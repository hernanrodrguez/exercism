//
// This is only a SKELETON file for the 'RNA Transcription' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const toRna = (dna_strand) => {
  let rna_strand = '';
  for(let i=0; i<dna_strand.length; i++){
    rna_strand = rna_strand.concat(char_toRna(dna_strand[i]));
  }
  return rna_strand;
};

export const char_toRna = (dna_char) => {
  for(let i=0; i<4; i++){
    if(dna_char == DNA[i])
      return RNA[i];
  }
  return ''
};

export const DNA = ['G','C','T','A'];
export const RNA = ['C','G','A','U'];
