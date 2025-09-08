# Write your MySQL query statement below
SELECT samples.sample_id,
       samples.dna_sequence,
       samples.species,
       CASE
         WHEN samples.dna_sequence LIKE 'ATG%' THEN 1
         ELSE 0
       end AS has_start,
       CASE
         WHEN samples.dna_sequence LIKE '%TAA'
               OR samples.dna_sequence LIKE '%TAG'
               OR samples.dna_sequence LIKE '%TGA' THEN 1
         ELSE 0
       end AS has_stop,
       CASE
         WHEN samples.dna_sequence LIKE '%ATAT'
               OR samples.dna_sequence LIKE 'ATAT%'
               OR samples.dna_sequence LIKE '%ATAT%' THEN 1
         ELSE 0
       end AS has_atat,
       CASE
         WHEN samples.dna_sequence LIKE '%GGG%' THEN 1
         ELSE 0
       end AS has_ggg
FROM   samples
ORDER  BY samples.sample_id ASC 