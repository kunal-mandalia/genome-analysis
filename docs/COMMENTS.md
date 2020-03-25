## Analysis

The human genome contains up to 3 billion base pairs.

Challenges:
- Loading 3 billion base pairs into memory // Suppose it can be done

DNA = [...]

- Constant time lookup of a particular pair
- Compare sequences
  - How do they differ
  - 


DNA        | Attribute1 | Attribute2 | ...
AATCC..    | x          |            |
GCCAT..    | x          | x          |

Given enough data points can we identify which base-pair combinations are responsible for particular attributes?

How much data would be required in order to make inferences about attributes
- how does confidence level vary with predictions?

This sound like the realm of machine learning

dataset = [
  {
    genome: 'AATCG...',
    attributes: {
      a: true,
      b: false,
      c: true
    }
  },
  ...
]

Q: is there a causal relationship between the attributes and the genome.


What do we want to know?
- How does the virus affect people in general
- How will the virus affect me?
- How do we deal with the virus
  - Immunisation
    - Build up immunity to the virus
      - Currently we overreact
      - Better to contract virus now while young
      - Long term effects
- What do I do once I get it?
  - Isolate

Humans have 99.99% common genes.

[ ------------------------------- | - ]

Q: Does the genome vary in size: between 1/2bn - 3bn?
Q: Do risk factors such as smoking, obesity, affect genes?
  - if yes then risk factors are coded into the gene


The $1000 genome project
