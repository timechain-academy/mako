typedef struct ecdsa_vector_s {
  const char *priv;
  const char *pub;
  const char *tweak;
  const char *privadd;
  const char *privmul;
  const char *privneg;
  const char *privinv;
  const char *pubadd;
  const char *pubmul;
  const char *pubneg;
  const char *pubdbl;
  const char *pubconv;
  const char *pubhybrid;
  const char *msg;
  const char *sig;
  const char *der;
  unsigned int param;
  const char *other;
  const char *secret;
} ecdsa_vector_t;

static const ecdsa_vector_t ecdsa_vectors[] = {
  {
    "0393ad1d3c88d3e53598eef4301571d8f97932d62bba3cfed5829c82d7365d2e",
    "0282136b105b5350d7d30dd793f7e109fdea0bbe6114821dc8a3f8a39c2f4baf6e",
    "88426fc41ea2b089d762b4f3a881ca224cea2856151945e42a2e5367688a0449",
    "8bd61ce15b2b846f0cfba3e7d8973bfb46635b2c40d382e2ffb0efea3fc06177",
    "132615efee3f1508becf2c258f17b3061c118737af96d9f75ba8e348a11b6570",
    "fc6c52e2c3772c1aca67110bcfea8e25c135aa10838e633cea4fc209f8ffe413",
    "7f3ee4f7f4ba5c06e07accd5e56dc186720ad272bd39ee74e0d8cf9702e7fbef",
    "0318c907b63a3154f2958ab8de841660c771d088a68f0d6e433da757a236617cff",
    "0237f79d8b757dc31c1814bac7b59c9715b46d4c9ec29e8db93ae68611f45d4187",
    "0382136b105b5350d7d30dd793f7e109fdea0bbe6114821dc8a3f8a39c2f4baf6e",
    "021703294b2a0b8489a339922b4bcf4976079f0dc88fe6ec740dd8b75cc345d58d",
    "0482136b105b5350d7d30dd793f7e109fdea0bbe6114821dc8a3f8a39c2f4baf6eab2458e54db9593286548fb5b11f31a0f3ac081f15a04e12ea32a55256f3cc50",
    "0682136b105b5350d7d30dd793f7e109fdea0bbe6114821dc8a3f8a39c2f4baf6eab2458e54db9593286548fb5b11f31a0f3ac081f15a04e12ea32a55256f3cc50",
    "f20f02672172913d2a3919fbb9b566c52474f7f5e3bdc4d21d0107b82b669f0e",
    "a3a292a948cfa6512406bc483c1f791b7041451b280dc513cd5e7e2adf9fdceb00b7cedb40af5b61f3cf66b08b7c6722d19f75f31fc171e31259386efdcf9819",
    "3045022100a3a292a948cfa6512406bc483c1f791b7041451b280dc513cd5e7e2adf9fdceb022000b7cedb40af5b61f3cf66b08b7c6722d19f75f31fc171e31259386efdcf9819",
    0,
    "b913b309b7ff0d43cc2b0f05dfca98d75c1d78a8e7f028dd3baf5aae91064359",
    "0290133ec0ddb26a42ef19d17f919a374a10caed6115273651cab52a976d0a24e7"
  },
  {
    "273eb041a2a1da09f075f56400e9e7383ee4bdad92ec58539faf9421139adc12",
    "037fa604ca1b82a657f63832b75bef6287c5ae76a6e2599ce1a8edc5234ec87e1c",
    "6a7a1cd61f8ae98c30b78e752b134132f974cf6a3bf62d89526447b9522d7b32",
    "91b8cd17c22cc396212d83d92bfd286b38598d17cee285dcf213dbda65c85744",
    "9deeac2f65da1932c0e7b596444e6d780a6e077be44a942ca19b1f648fbeb590",
    "d8c14fbe5d5e25f60f8a0a9bff1618c67bca1f391c5c47e82022ca6bbc9b652f",
    "6eb30869c841cf28bb68d7dec4bea82a3fd326454c8062c4f321ee858ed0b940",
    "02a2d72f0b17a35af7b9dffab6b712e5a946480edae9ce057d48332c465ab9fe51",
    "02ff5fc043f5c7ffc6f1ca5e97dc395bfc79099cfe35026417c6dc4c01450a7ff3",
    "027fa604ca1b82a657f63832b75bef6287c5ae76a6e2599ce1a8edc5234ec87e1c",
    "023fac3673cef168fd1ffcc015f63ef13151ab053fa0126d5c2a4de0ceecf0fc6e",
    "047fa604ca1b82a657f63832b75bef6287c5ae76a6e2599ce1a8edc5234ec87e1c320da6b27585e309be91152110c0a57104a1ccd3c605f3ac314de92b8c3d0375",
    "077fa604ca1b82a657f63832b75bef6287c5ae76a6e2599ce1a8edc5234ec87e1c320da6b27585e309be91152110c0a57104a1ccd3c605f3ac314de92b8c3d0375",
    "4af236617fa214d0aa8e00ab2d1f0d316de178fd254b67eeb3bb6318e3c7c643",
    "c75b13dbbbecd8d2886e7bd294b65aa6523dec353488d1a20906df93798690f07df6f86dc1d294509ae5574eb8cc1badf6d877801eebbacbd43ca0217ab9f45f",
    "3045022100c75b13dbbbecd8d2886e7bd294b65aa6523dec353488d1a20906df93798690f002207df6f86dc1d294509ae5574eb8cc1badf6d877801eebbacbd43ca0217ab9f45f",
    1,
    "6521b0a3c042c68b4ff5ac5521ee16917dbbfcd9804066315c24c5738206e87e",
    "028c90bcc770b38d135bc946c3def1ef9b2502cd4830323fff2dcd2fa17d42adef"
  },
  {
    "7cba47c9797fd6d14b9f6aa7d5456c2269c8ce2a6151415f6b0ccb75f28f2344",
    "03fd8980f112d15aeb373bab2c1631ef8574072b1c695ddc8c778f44817f87bd08",
    "a28c110ea21565e9ad9511d0d99b765b8e221be1bc4ba4aa397d1237b9612502",
    "1f4658d81b953cbaf9347c78aee0e27f3d3c0d256e5445cde4b77f20dbba0705",
    "88eb12cecfa4c3ae2bc9edfcf4d3105e3b664b15b99e6593ba284eec3fa468b4",
    "8345b8368680292eb46095582aba93dc50e60ebc4df75edc54c59316dda71dfd",
    "393d427da2ae29aabfc1c6aac9017487c4e14bed8a54b7a26416462150bcfcdc",
    "0321b1f9649109fcb3649e5f072bc19d304b0f5738a710bdcbb0e8cd9619bf388e",
    "026503363bbfc5e7c5350e952f1209f406ca9066784509ac19cd2588fff717db2c",
    "02fd8980f112d15aeb373bab2c1631ef8574072b1c695ddc8c778f44817f87bd08",
    "02fd0aad3dad16149f985bccf0c59bdac5f82b9c02cb589d2463981e4395bfd90b",
    "04fd8980f112d15aeb373bab2c1631ef8574072b1c695ddc8c778f44817f87bd08ba258163a23a804b4a7ac18667f44f5603395e6cea024b015b24fec933529ebd",
    "07fd8980f112d15aeb373bab2c1631ef8574072b1c695ddc8c778f44817f87bd08ba258163a23a804b4a7ac18667f44f5603395e6cea024b015b24fec933529ebd",
    "e053a66705fb335fb3f99f98cbaae6f3c12ddd535518f7fca4dc82a26752abfa",
    "d4bf699c989eeab55040e245738e98cae156513cf9d6a916d7c70fc50b63de731a61b0e95274260170a80ddbb6b9ce5c14e67f3b436bcb5cd289bcc10e05da5e",
    "3045022100d4bf699c989eeab55040e245738e98cae156513cf9d6a916d7c70fc50b63de7302201a61b0e95274260170a80ddbb6b9ce5c14e67f3b436bcb5cd289bcc10e05da5e",
    1,
    "3a5b2bfb1903c40775e514f2a97cea5a2555a1c3e00d0a5e27cbdbba0a1f40f4",
    "0306066b571f961f7599c480e06fbc7620f73edf2fa68f4637fdf3ec4786fd7bbc"
  },
  {
    "b008d28818bd3993069c3767e4e237719d5581493783952ad39c575a3cba100a",
    "03d06c3a55d6569a705a34ba895276a58cc02bed99ade8616e9999208a0511b6d7",
    "4276208258b8c4496bded925e9db8cccf983fab564291b2c8177b3ae7f44ad4c",
    "f27ef30a7175fddc727b108dcebdc43e96d97bfe9bacb05755140b08bbfebd56",
    "1865d4ea42c10e365486b837617977375f3376c2136ef68272cad0b13de49944",
    "4ff72d77e742c66cf963c8981b1dc88d1d595b9d77c50b10ec360732937c3137",
    "4171b9d40715d8efc266638e088277dfee67a3d1824d3862f8f6131dd4d02450",
    "03bfbc654662f7fc754251a7ab45513e37ea515c55fd461068992d0da880ca712f",
    "0343b960b081bafc57e323b02a967a82829754be9cd27678911c1af843b2ae4ae2",
    "02d06c3a55d6569a705a34ba895276a58cc02bed99ade8616e9999208a0511b6d7",
    "0213cb3e1b7897957cac48b411909e542ded8cf56cd058f7e315d3cf55f430aeb3",
    "04d06c3a55d6569a705a34ba895276a58cc02bed99ade8616e9999208a0511b6d70108132de4ca5d03ee6d85756ab1af6646e9d7bb716600079ed85e9f4374c427",
    "07d06c3a55d6569a705a34ba895276a58cc02bed99ade8616e9999208a0511b6d70108132de4ca5d03ee6d85756ab1af6646e9d7bb716600079ed85e9f4374c427",
    "7c7a43f27dbd3b903f5c0abdb7c96f78c8bd6d3b208b1ef9f5c9e64f4d266840",
    "f69324bdf5fde530854ef5653078c23baa0ede86f4d9321977fa5c373a92d3937bd0c22127efb923a6bbf837a1a27790cd81d5f3160d79701bfabefaff2d3372",
    "3045022100f69324bdf5fde530854ef5653078c23baa0ede86f4d9321977fa5c373a92d39302207bd0c22127efb923a6bbf837a1a27790cd81d5f3160d79701bfabefaff2d3372",
    0,
    "ccabf5e951c5893cc858eada180502c10d2638310774161dc9236057138c4512",
    "02f00fbbcf237d0114840acc5a359a2b915952183866a4e761ce0958e4a5eb6159"
  },
  {
    "b3e58f0bb00d30663810efb5cb9d03b8a51acb5852ed16297ceb41e6e2858f95",
    "02e1c2d29e572fb6ad9c5163b80cf8780ad8abfeac6e851fd7c4bb1b1d6e223aae",
    "b48d8f82738457bbc5b736b487d9728f86a7e22b992e4c95b8b761b6538d9b32",
    "68731e8e23918821fdc8266a537676497113d09d3cd2c28375d0451065dce986",
    "960f44a55c1f6edffdbe1ff0b96f687d69f93ae3af2b32245eea7488db34f379",
    "4c1a70f44ff2cf99c7ef104a3462fc461594118e5c5b8a1242e71ca5edb0b1ac",
    "539300af8d3aac06079731e4f79b31d2d72127aeae64c3ba476f834d5f4c4592",
    "0363d783d16263e9ae9eb8e78ef0cd76af3a04d08622653b3959c1db38c08c2f5d",
    "03f3ebb79f7eaa46c68804619e6df6226fc6d38bed43707b54fc560b91a8587227",
    "03e1c2d29e572fb6ad9c5163b80cf8780ad8abfeac6e851fd7c4bb1b1d6e223aae",
    "035016a5adfc54f14a878ebcdcfbb0df0e7413996684b14df0ca0938b771dd16d7",
    "04e1c2d29e572fb6ad9c5163b80cf8780ad8abfeac6e851fd7c4bb1b1d6e223aae08739b202e1f9762d9d3732013b41e0deea563062d5eccde632471c8e3a3efdc",
    "06e1c2d29e572fb6ad9c5163b80cf8780ad8abfeac6e851fd7c4bb1b1d6e223aae08739b202e1f9762d9d3732013b41e0deea563062d5eccde632471c8e3a3efdc",
    "cc64712f25b86463e14ece6d0df000006ca24a69160e7a4e4122715de6b88d34",
    "88d9ea2a86a9e26f9ee0f71a2c0ef68785435cde5cff14fdd6f81556c6c902763626de10d5e76baecfbee3e653695f7f26ee8ca97ef45a35635c5539386ec0ad",
    "304502210088d9ea2a86a9e26f9ee0f71a2c0ef68785435cde5cff14fdd6f81556c6c9027602203626de10d5e76baecfbee3e653695f7f26ee8ca97ef45a35635c5539386ec0ad",
    0,
    "1ccd489f9d750d42c7020431a06ab449ab7124f0f4ee21a7252c6e6bc1e06964",
    "028f2e8af22f51432c9be11ccc0aec65da78e0ab26d3f43b148bef190860caa033"
  },
  {
    "bd21d0d8824bfb78fa6c662d996c0869513563e6ed71f42f4ec3dd8fd1d51798",
    "02fa2b552ebc6250dc603a16ef303a5b1d15da89e8af21b2ce825ceb333a8f1d81",
    "3ec7ef2a92fccfcd4284fd43b3b9703c3bf70c7ae4cf76ca82646ed1370549b9",
    "fbe9c0031548cb463cf163714d2578a58d2c7061d2416af9d1284c6108da6151",
    "92d5f5b4b64725cd42bd103733e057099bda91d26ff4a10ec124531f0f5c1c70",
    "42de2f277db40487059399d26693f795697978ffc1d6ac0c710e80fcfe6129a9",
    "aca80fff8a2c6766beac42507ce5a80cd594193ccc6d802296b927f51fcaafe4",
    "02e95646af9f43a1b1d655df866b335a8cd8f281f6526092b6dd8651155f4e34f7",
    "039f1fcf68e6620c375b6d66497e523f46a9092a14a12c67d3a06cb87ec60c39be",
    "03fa2b552ebc6250dc603a16ef303a5b1d15da89e8af21b2ce825ceb333a8f1d81",
    "02690980d21aeb46fc8731cdd8810a622f633a6817adcc992277959de5e11ff9ae",
    "04fa2b552ebc6250dc603a16ef303a5b1d15da89e8af21b2ce825ceb333a8f1d81036696c1326b03c56977e4badf13aed04b657666bb420b6489fe22cec3c4e048",
    "06fa2b552ebc6250dc603a16ef303a5b1d15da89e8af21b2ce825ceb333a8f1d81036696c1326b03c56977e4badf13aed04b657666bb420b6489fe22cec3c4e048",
    "6935ab748cd9ecbf14d31496c3baf7d05f2c89287cb97bcf4ee917b9e4eeedaf",
    "0ef55d7d97016d40a37bb6bc0e6f2e46ef0c14b0b26f2cfbba434b3722643a7105b238d5535923744ca960f7304170ba40f7fdb7693aba0eda397835c478bdab",
    "304402200ef55d7d97016d40a37bb6bc0e6f2e46ef0c14b0b26f2cfbba434b3722643a71022005b238d5535923744ca960f7304170ba40f7fdb7693aba0eda397835c478bdab",
    0,
    "66fe0e2d7cb4a4b6a8686d763e5b5fd25dfeb2074af903112860cd3557fa57a1",
    "02b29db41af135d33a5d4f52e61072292a08b9e696e94985132319921dc04e8619"
  },
  {
    "6a0b9fa10f7f689d19dad85aadac38e9bfac4f357173e0e7335bc955f0fd2aeb",
    "02ec29b7151444ddd6d5bd32982e23fa8e0284414bc156bcf275dc849af48835e5",
    "bfc96736008cb7ee450ffb060acc97c4b5855f2542ccded511276ebdc4b12021",
    "29d506d7100c208b5eead360b878d0afba82d17404f81f8084b0d986e57809cb",
    "8aa84bb2a8f729e20d41fc2fb96ea4437dcf621037a80e6dc96460e3b329d6cd",
    "95f4605ef0809762e62527a55253c714fb028db13dd4bf548c769536df391656",
    "3dacfe1d77e378e196edafb0d7592864a5c6f02957eff0889d6b10730bed1b1d",
    "02d8cf4ff0ea8d6e85a37b879f98d052553eda212d291a7804a15ed1bed9d0799f",
    "0325e11d7303fc4ad5883acddcd55e7921ebbd11e79019d1c475c483dac38bb295",
    "03ec29b7151444ddd6d5bd32982e23fa8e0284414bc156bcf275dc849af48835e5",
    "03a9b282e3c7195d0148310820fe26d19f0a628701ce3646fd3eeb54604825eed7",
    "04ec29b7151444ddd6d5bd32982e23fa8e0284414bc156bcf275dc849af48835e5f8deee3eafbce881af52d97959194af33034a648a8dad848f0bd4138fdb7d278",
    "06ec29b7151444ddd6d5bd32982e23fa8e0284414bc156bcf275dc849af48835e5f8deee3eafbce881af52d97959194af33034a648a8dad848f0bd4138fdb7d278",
    "4f44cdf61b4392cf338c661ac5e07f4b238b28556bce813e0f0d4ea36e5cd14e",
    "d84e69c645a59fee7dae2e75883364abe8238d40f3b6e6e4572e7b89cf6dcbc056f20549a0676bedcbef4e7c0b8bbe095d88680582e293b23eef976fdd17355c",
    "3045022100d84e69c645a59fee7dae2e75883364abe8238d40f3b6e6e4572e7b89cf6dcbc0022056f20549a0676bedcbef4e7c0b8bbe095d88680582e293b23eef976fdd17355c",
    1,
    "ff125af61785cced42adf5fc992c3f83267e42dc1e675f79bd2930321f7d4225",
    "03b4aa6dca17da6fc77647547b499fc927174c30d1e6746c3f754e901954ab1934"
  },
  {
    "5ec35d75f6e4b59fa9fe29215065b375c47499818b8d689e340246264d9cad50",
    "022b5ac94c41b1d6f72bf2b9893611c7ac87011d4f656a684d7723d83c8cd28ce2",
    "0fe508afe17c32816e314db59840a5bb4038c998b2c02de946b5f5a182f978ae",
    "6ea86625d860e821182f76d6e8a6593104ad631a3e4d96877ab83bc7d09625fe",
    "890380771b442547aa7ada0a0402913c38a305b536fbf60f15884f0b2b28e949",
    "a13ca28a091b4a605601d6deaf9a4c88f63a436523bb379d8bd01866829993f1",
    "244227740612cc2ed6fd4c6e1b4dc9a6ffa7f4a948f4e7737288ea313674d17a",
    "028a7bd88b23abdbb016f967fb406978ae626067049f04a4d7095bb885bb845442",
    "03aa77dc9f1d9d7eb8e95eb27e05e1b9e78c7357411b44e78bfce5b3339da886ef",
    "032b5ac94c41b1d6f72bf2b9893611c7ac87011d4f656a684d7723d83c8cd28ce2",
    "0232cb66fd73bb5fed139051a60162108f174985dc8b06d0956a3f7b277f533b6b",
    "042b5ac94c41b1d6f72bf2b9893611c7ac87011d4f656a684d7723d83c8cd28ce2ee5d8d49747709d30a2a301f43badc336b37a1110a4575ecb58184b87314cb56",
    "062b5ac94c41b1d6f72bf2b9893611c7ac87011d4f656a684d7723d83c8cd28ce2ee5d8d49747709d30a2a301f43badc336b37a1110a4575ecb58184b87314cb56",
    "daaa74b7ef65d9a29fb0051493d0a81d0914d0b831416992622163cd0eb7f2e1",
    "232aa7677dba4126a6730d38de1cddf2077d7192bf19b3418dd5f2dfb99a3f851fb48f4b3e9941d4988a865ce900952cba8a30a7b52cc30efd9d872baaaef329",
    "30440220232aa7677dba4126a6730d38de1cddf2077d7192bf19b3418dd5f2dfb99a3f8502201fb48f4b3e9941d4988a865ce900952cba8a30a7b52cc30efd9d872baaaef329",
    1,
    "8a9c2958986c5d2f5a4ab3cbcd144e36c5067058b0f0635890df3485646c5a63",
    "03594bc51a2234336882e76f3b2d736c06b60bbe140d60fba47f98b30e5fdfecea"
  },
  {
    "c6ba9706ce3914321619d5c7a07b8e6f19520601f5c2c6cfc7a0ab85fa7095ce",
    "024ba733c0cfc0cc476d132bf92f5dbf291a165d56c6319124171db5922fd61520",
    "a9188fe627d1f3f8159ed96017e31f10f1e2378ecfd58094c4f4debb0371ba7b",
    "6fd326ecf60b082a2bb8af27b85ead81508560aa164fa728ccc32bb42dac0f08",
    "5eb997f31f644a5ed94d0c9a3061f87bc286402048dcda0b005f16c25d170017",
    "394568f931c6ebcde9e62a385f84718fa15cd6e4b985d96bf831b306d5c5ab73",
    "487f57cfa7d3278e4ac8ce18a0b2414a5817ecfce4df23f495dbe60549363dcf",
    "02082509101add7b67cd1fdd77e070819c28980d6ec971db4962944b337ee36224",
    "020c326c1dbb8f3f1a3871660744b47fb6b9c1f7ccbebeccce3394674114da9bbe",
    "034ba733c0cfc0cc476d132bf92f5dbf291a165d56c6319124171db5922fd61520",
    "0388bc8818f66702718399b7668fe084cc2f663c1cc4445f5631dc1356de4dffe3",
    "044ba733c0cfc0cc476d132bf92f5dbf291a165d56c6319124171db5922fd61520cff0063a235bf2eafc85a7fae4fc2b50672c6f9f57caeb5f4937caf3ba805448",
    "064ba733c0cfc0cc476d132bf92f5dbf291a165d56c6319124171db5922fd61520cff0063a235bf2eafc85a7fae4fc2b50672c6f9f57caeb5f4937caf3ba805448",
    "aaaa8e1555b799665dac2097b178b5cc31b1e75d7c9936e2ad2a1bef247925d8",
    "1147d52bd414e9573c52c2276186d7c7b2b32f10c3668a6c6a1b1522f36ba1593e177baa5e207497e41cd18a7f0f1a87a50523106e54956328d325b2ffe15047",
    "304402201147d52bd414e9573c52c2276186d7c7b2b32f10c3668a6c6a1b1522f36ba15902203e177baa5e207497e41cd18a7f0f1a87a50523106e54956328d325b2ffe15047",
    1,
    "70a3fd6dafd032aefa17e08d097f6abc4fa696f8fbb42b583a7119f92b3aed62",
    "02db0a916e6135d0c83b01ede7dba97609db830a925c6e52f8b1ef5008508970e6"
  },
  {
    "80bb3c65f98112098aff119bbbc11d2dc260b9fa631effe7edffe5656f5b15e6",
    "0290ce3f65dcfdb0d106b15923a4ef2c42c78b2d01e5467e3d755663a4d989c435",
    "05d15118928a207e58778812695b196cc20b71e57728c7fe5c9f8c5d0876de02",
    "868c8d7e8c0b3287e37699ae251c369a846c2bdfda47c7e64a9f71c277d1f3e8",
    "364249c7badc3411bedaf6e32c819e8c0b503c323b11eff6a757b7a6a5db3e6d",
    "7f44c39a067eedf67500ee64443ee2d0f84e22ec4c29a053d1d2792760db2b5b",
    "0c5a4808197fb59288da94609264731f74d4761aa3eb80df541f1c4cc6e05eff",
    "02331c5d17f2393becba7bee9ee8f4c40a6569685eb2d43c054adb089173e65180",
    "03aa03aa913d5bbe89cd0eac2479f46e1c347173723f0bf488989684c91ef5cc74",
    "0390ce3f65dcfdb0d106b15923a4ef2c42c78b2d01e5467e3d755663a4d989c435",
    "020dcce1f371d25f393580f84dea0dcb33afd2b3f4a83f05ff71650f7592daccab",
    "0490ce3f65dcfdb0d106b15923a4ef2c42c78b2d01e5467e3d755663a4d989c435ab156033f34288351909a49159e37f07f83b35ff79e4b6447a09a6a6216e643e",
    "0690ce3f65dcfdb0d106b15923a4ef2c42c78b2d01e5467e3d755663a4d989c435ab156033f34288351909a49159e37f07f83b35ff79e4b6447a09a6a6216e643e",
    "203245df0ac2bf75d7b6f28d17b7a9624cd733dcca5ae6c4e4bae4415982f95d",
    "b93a406951084f29c017d450f712dbf6e6528d99089e53d8528f801c50b09a5f295ea40a8cc966f0fa23ee7c1a4ac3f7dbcd190b09722c25d78c54713f8492cb",
    "3045022100b93a406951084f29c017d450f712dbf6e6528d99089e53d8528f801c50b09a5f0220295ea40a8cc966f0fa23ee7c1a4ac3f7dbcd190b09722c25d78c54713f8492cb",
    0,
    "d2229f5d36ff0b502a689ce7224a13d36e843cc198f00abf9d3c0d34b9771a56",
    "03e32fe6ea597ada3c954277c0d1e489f846c48819f88a607af7d6157a9c258203"
  },
  {
    "5ac2e80fac5c67979c8c758a12b7a08db070868c7902b1a13d9a280d6ad66f9f",
    "020a83bacc0ced9371caf834c8709aee0645fde919e38b1429b7e9fcc0ac4bdb2b",
    "d2ffbd393fdfe9509057f85f95f08a3b3e75f3546c9514f97e0d96eacf2425e3",
    "2dc2a548ec3c50e82ce46de9a8a82aca34379cfa364f265efbd5606b69c45441",
    "f6cfa7af3e630382a236c1cccd949d2da58fd0e1f19c312716a88836c01d53b3",
    "a53d17f053a3986863738a75ed485f710a3e565a3645ee9a8238367f655fd1a2",
    "fa02d29ac82680354046bf2ca5261425674eff9d6d50431b491777a27fea1003",
    "0399741fe76eab451ca4518e25625356edf585eddf1b81800f596e531cf9c4c1ac",
    "02c9c85f865bbcdaae6146015382fb23a09128531412e30eeea5ae9008e43a1152",
    "030a83bacc0ced9371caf834c8709aee0645fde919e38b1429b7e9fcc0ac4bdb2b",
    "026d3be0a90951fa0a39aeabeaaaed14984b163a5ac384543499d1c3108a649eec",
    "040a83bacc0ced9371caf834c8709aee0645fde919e38b1429b7e9fcc0ac4bdb2b3f751fce2337c087e18137862c03738a8258d5d41aaf29d7b3d22ea7cff0e1c8",
    "060a83bacc0ced9371caf834c8709aee0645fde919e38b1429b7e9fcc0ac4bdb2b3f751fce2337c087e18137862c03738a8258d5d41aaf29d7b3d22ea7cff0e1c8",
    "51029f0b26259c7139333dd7d3ed59015d61acfd62341327811e306f5b1e5b66",
    "2feaf0c0071e78ecfbb6c655885ce056950973a003ad34afeee312f9f81719a10c164c7453449efb66ba393fd21f82a31888f23f57625597d66c2b6414cab33b",
    "304402202feaf0c0071e78ecfbb6c655885ce056950973a003ad34afeee312f9f81719a102200c164c7453449efb66ba393fd21f82a31888f23f57625597d66c2b6414cab33b",
    0,
    "2041ce1ecdafb13671555166e3112233375b7cfd79beeba42da036d50b6174de",
    "03fc9b063c3d475a952ace023a68869173c2c1404b81933c3b593159909e501142"
  },
  {
    "4df171371de6d82175064f3613674f9acecaf2dd9df1af9f2d759eac27465a20",
    "024c0098f90984999297aab10e9f1b0bca06391714d20179dfbab2df12ce28c4b2",
    "aa11a771c350800e1799767f2692bdf54c197613c9173af4fcd5bb85062d8df4",
    "f80318a8e137582f8c9fc5b539fa0d901ae468f16708ea942a4b5a312d73e814",
    "f5dc6b890ed27096d2fbc585f585719e514dace7852783bda30c6e97d36c770a",
    "b20e8ec8e21927de8af9b0c9ec98b063ebe3ea091156f09c925cbfe0a8efe721",
    "aa132c38eadacda9e6b4eaf998150dd3c31fe2edd756995bdc2d3a5999546684",
    "03819a06d4d838d670905eab06cfbf4d39b2886f22c287ab5d2af43093a35fb3dc",
    "0309afb3df6d8f10f5ab5cee55dce77f3b34ee8e7f0127063e63915958ca11f39f",
    "034c0098f90984999297aab10e9f1b0bca06391714d20179dfbab2df12ce28c4b2",
    "03e8798b2671f8952b20c952b778405644b587ee9f8164bb2cb792336c87d36e69",
    "044c0098f90984999297aab10e9f1b0bca06391714d20179dfbab2df12ce28c4b2bf9587058b8925ea1d89f01a6ecc8ebab5e166315dac9b9f0b1c95540e1caec2",
    "064c0098f90984999297aab10e9f1b0bca06391714d20179dfbab2df12ce28c4b2bf9587058b8925ea1d89f01a6ecc8ebab5e166315dac9b9f0b1c95540e1caec2",
    "6e3df8c8f7cbc58179f9c28b1dca81fe8f5dc7817aab2621bd269565c421e203",
    "4864a52cefcfd61fa2ff7df7da1ae605a34d44a350ba601eafd2512644d7641a68f7ee1b337dcc78a60980e43298bb0a6b940eccae02108c022e91e3d472a979",
    "304402204864a52cefcfd61fa2ff7df7da1ae605a34d44a350ba601eafd2512644d7641a022068f7ee1b337dcc78a60980e43298bb0a6b940eccae02108c022e91e3d472a979",
    0,
    "8586a6576e9ec882a0eeef2ce1fa438ec6c1fa6a29f2dbc3a164504687cc2669",
    "029a2e90bd465a5a02c78057a887265d0464533a22a903f3c024ed7c8395844d94"
  },
  {
    "31853eec3e529b5741feadba5694a6f17253eea5279bc1a28d8824c3cebeea6b",
    "033258a8fbd89b9044f23c902f3cc896d75bef58bb3e566344c3b5b3514365a497",
    "275314eba4c30e97ec3ab248a3b68b23605e2eb962fb9e97d60bd94eed841eae",
    "58d853d7e315a9ef2e396002fa4b3214d2b21d5e8a97603a6393fe12bc430919",
    "bdc3d84cc027bdfac6886e039a1fd157166c7ace7b551d9ede85805ad2394f64",
    "ce7ac113c1ad64a8be015245a96b590d485aee4187acde99324a39c9017756d6",
    "cad5e59fbab423018fe247926d4a4cf20b5066a03300cd081a51968ea6afd3da",
    "021b3038e941040202416f5ef143f521be659b213e1d4ec8037b97472190daa79b",
    "02c171aeb697d75b5158ae02b337672f2c9d79199d4a62047614f10ad57cc4f8f4",
    "023258a8fbd89b9044f23c902f3cc896d75bef58bb3e566344c3b5b3514365a497",
    "021759b2913fbc453a2d7b03e492e930249538b230d259cc015dc2182b389be2b7",
    "043258a8fbd89b9044f23c902f3cc896d75bef58bb3e566344c3b5b3514365a4972262844225ddda1e1c4d23c0f6434f69aedb42ad23fa47e33c03eda5e7488303",
    "073258a8fbd89b9044f23c902f3cc896d75bef58bb3e566344c3b5b3514365a4972262844225ddda1e1c4d23c0f6434f69aedb42ad23fa47e33c03eda5e7488303",
    "5381cf1022c35cec8d04e402b227d268d648e350634328214e611fc95f184da5",
    "9cdcebfdb884d2206f6a3c178acdaaf714f62256dab26ec1919447e5b06f6daf0b7dddd9b0019973843032de6e539eaeb78777afea89334f29e0d39423527f65",
    "30450221009cdcebfdb884d2206f6a3c178acdaaf714f62256dab26ec1919447e5b06f6daf02200b7dddd9b0019973843032de6e539eaeb78777afea89334f29e0d39423527f65",
    0,
    "746c73da27d82ebb3a23a7014e49daff0e2c785cdb5f5df6fda2679266099dad",
    "0344c30a14bf4ef847a73f9376cb4d424d1052e0f67a94bd40018def73ac104e6d"
  },
  {
    "adb51a218821b2dad4b6f51329513d960d50512be82a6333bbb25fa34a084c8c",
    "02de0bfb595386dc7a3589d5258c8da10b37df4a4577f0ee3facac1edd4daa32cc",
    "c51989c2dda008ad475d103ae96b29a5377b9d4f9318ad5790f45c539f3520b2",
    "72cea3e465c1bb881c14054e12bc673c8a1d1194cbfa704f8cd45d6a19072bfd",
    "83fc1621c0b08ae9cb0a29012428347546831bd1020e27f8a62fbca69f046058",
    "524ae5de77de4d252b490aecd6aec268ad5e8bbac71e3d08041ffee9862df4b5",
    "9c5bcb4db76a2abf64869b92f45f0a65a9580da25e2b3b54665f46893872a57a",
    "036bb032a905fc076be5fdba0c0f0a802ce05849fbef68b59ac31d5b3b7c212c0e",
    "024a6eb630b87062d9f72f77bfe6bbf52d12afdb130c80bd29c76f8f98e1bfc259",
    "03de0bfb595386dc7a3589d5258c8da10b37df4a4577f0ee3facac1edd4daa32cc",
    "0318140fb22e7178ab95596cdc2e0557dc78900a018286d49bc2c85e6a823257b3",
    "04de0bfb595386dc7a3589d5258c8da10b37df4a4577f0ee3facac1edd4daa32ccb6d3bdb5c6953a7b83aafa287ddb518dfc9f31d2868525aeae879220103b8fb2",
    "06de0bfb595386dc7a3589d5258c8da10b37df4a4577f0ee3facac1edd4daa32ccb6d3bdb5c6953a7b83aafa287ddb518dfc9f31d2868525aeae879220103b8fb2",
    "ce40a98cf1291eb82f5c0ef42bf2b448fd2c4b09ed87e30bb7220bd8e908ece1",
    "45cf9b648b1018117094d417662058ee864a3ae702d17e0785e3509fcbf4ac673564d9830b32ac96f4371d8d047558253fe24a9067521c316b57862a42d3de6c",
    "3044022045cf9b648b1018117094d417662058ee864a3ae702d17e0785e3509fcbf4ac6702203564d9830b32ac96f4371d8d047558253fe24a9067521c316b57862a42d3de6c",
    1,
    "3ed168f0d0e0668182641d4f84f0615ec025eb5edac160f2b97d8fb90296de43",
    "0300c7287eb3d1ec72e85d4d3bf158d6cd461557471728380a4961e463f1a977d9"
  },
  {
    "9f0a998f02a7aad726ad3905e1e43efd8066b9221205fac05a643ecafd9e640e",
    "02ea2223c10809277d80ac112f67cfc69bfa45bda1f856d930f7b71336f32c80d0",
    "e0b5ef09b15a0206e7dee2e4a7f324e836c41ea10c4ee2e8c0f8f6d4f38b1650",
    "7fc08898b401acde0e8c1bea89d763e6fc7bfadc6f0c3d6d5b8ad71320f3391d",
    "c8ef5397e06a3c205d312477ba902da480079b946ed131ee5fe732d2896a5057",
    "60f56670fd585528d952c6fa1e1bc1013a4823c49d42a57b656e1fc1d297dd33",
    "f5dbef8537e14039108a6d128032e67ecaec9f17e103bb3bbedd8563e25dc7d8",
    "02ef3e1cd6c38ecc6aff193ae15266ce2c458ba8f8680acc629554caf0e83bbafd",
    "03bfe22e9c23869fd7b163a245ca369fe6e73826db32a50b799ac4cf622eb5be45",
    "03ea2223c10809277d80ac112f67cfc69bfa45bda1f856d930f7b71336f32c80d0",
    "02dabf6433d617a39f2573af76b01ed74f2e3644f49e268fe77fbec79aa72b3347",
    "04ea2223c10809277d80ac112f67cfc69bfa45bda1f856d930f7b71336f32c80d05039375a9af9993075342cb70350d18b181ab956a3447ccf753d84e9e2689d2a",
    "06ea2223c10809277d80ac112f67cfc69bfa45bda1f856d930f7b71336f32c80d05039375a9af9993075342cb70350d18b181ab956a3447ccf753d84e9e2689d2a",
    "65d870c36bc6b7e87101f1d23e4cd69198ddc8f34f04c61761e2f1f14bf36665",
    "2f07a0a04dbec6293a2a545c3e17bcfaf94ece8687a2e7851cdc98082b3a6db818e1a953ff1c15dd1e5d0aae65c7d89d2f5e95de389138ee0a81a44331652575",
    "304402202f07a0a04dbec6293a2a545c3e17bcfaf94ece8687a2e7851cdc98082b3a6db8022018e1a953ff1c15dd1e5d0aae65c7d89d2f5e95de389138ee0a81a44331652575",
    1,
    "25ecfdc9b9976eef437eea2c3d28d815ef8f83f96b5d9c0ac170122f2e95c1b8",
    "02ccc17f49edf0284d22a1bfb4c7274c297ed6fe7b1681a36bc0077580277f5645"
  },
  {
    "0a8b55ccd7ec599631fe41b2bb30aa94ba406db197322671bb4e36d513ba50a7",
    "021af537b3fe907754989933bdb9f0b50e3df971d3375aab47a594921fc0ef75f2",
    "4c3175315b534d038880f572f144ea1c9a9022090df244e9608c66630a1153b4",
    "56bccafe333fa699ba7f3725ac7594b154d08fbaa5246b5b1bda9d381dcba45b",
    "421acd4a7752874b0817eed4b8c4d26adeac55a693b65a922c6842b7bd77ddbb",
    "f574aa332813a669ce01be4d44cf556a006e6f35181679ca048427b7bc7bf09a",
    "e01aabcd0a9afc4ecfec1371c441b1a4a5ef53e2270e2bb3fa580d7eec4ca0f4",
    "0295243abea40e5f96d01f869b277f16859fb39b7f9bfc862e50663629fee920ef",
    "03adce0a9759b7f41f67e7c8e72442d6a55d2b96d4e51006b715d28a45d66ae439",
    "031af537b3fe907754989933bdb9f0b50e3df971d3375aab47a594921fc0ef75f2",
    "039011d50370d41ad2bc17e18e7ae09aa7e0d83fd04fae7f57ea60398e71f9317b",
    "041af537b3fe907754989933bdb9f0b50e3df971d3375aab47a594921fc0ef75f24a544d51a8a7cad74e96df90828946802155feb6bacce8c460edffe90f267e5c",
    "061af537b3fe907754989933bdb9f0b50e3df971d3375aab47a594921fc0ef75f24a544d51a8a7cad74e96df90828946802155feb6bacce8c460edffe90f267e5c",
    "3eac7044fa6e1cbe36f4248c5ac9fa7fc7fca52271e426b96b7e109121367932",
    "7689aada25877b545471cac1d0969b54d7dfbcbc2cce03e96fff5ddc5bd81a466f41fd46328eda9b8f8d7caff6b1b57095922eba6baacad06fd8ebd32424a117",
    "304402207689aada25877b545471cac1d0969b54d7dfbcbc2cce03e96fff5ddc5bd81a4602206f41fd46328eda9b8f8d7caff6b1b57095922eba6baacad06fd8ebd32424a117",
    0,
    "0dbc69c25c4901616e815c6929901521762e2697f5113b2d788dc59492cb26a7",
    "035aa0c6e456eb4826558cb760c13fb5f7613b2fb01bcf5729b2d56443e3bcfb8d"
  }
};
