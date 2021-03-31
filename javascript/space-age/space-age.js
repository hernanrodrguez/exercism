//
// This is only a SKELETON file for the 'Space Age' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const age = (planet, seconds) => {
  let i=0;
  for(i=0; i<8; i++){
    if(planet == PLANETS[i])
      break;
  }
  return Number(((seconds/31557600)/YEARS_REL[i]).toFixed(2)); 
};

export const PLANETS = ['mercury','venus','earth','mars','jupiter','saturn','uranus','neptune'];
export const YEARS_REL = [0.2408467, 0.61519726, 1, 1.8808158, 11.862615, 29.447498, 84.016846, 164.79132];
