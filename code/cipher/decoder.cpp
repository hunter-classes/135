/*
  This is not a complete program but rather
  notes for you to implement the
  cipher lab
*/


// make an array to be a vector for the
// english language
// you can download this or
// build this
double eng_frequencies = {.082,
			  .015,
			  .027}; // etc
// a appears 8.2 % of the time
// b appears 1.5 % of the time etc.
// eng_frequenceies[0] is for a
// eng_frequenceies[1] is for b
// etc for all 26 letters

// you can also build the frequency
// vector by grabbing a text and calculating
// it on the fly

// calc the distance between 2 vectors
// normally one of the parameters
// will be the english language
/ frequencies vector
double distance(double v1[],
		double v2[],int len){
  return 0.0;
}


std::string decoder(std::string input){
  std::string decoded = "";

  // remember to ignore spaces and punctuation
  // Loop over all Caesar Cipher
  // rotations of input
  // and for each:
  //    1. calculate the fequency vector
  //       for the rotation.
  //       ex: the freq vect for "aaaabbcccd"
  //       is [.4,.2,.3,.1,0,0,0...]
  //    2. Calc distance between freq vector
  //       and eng frequency vector
  //
  //  the smallest distance should
  //  be the decoded rotation
  return decoded;
}
