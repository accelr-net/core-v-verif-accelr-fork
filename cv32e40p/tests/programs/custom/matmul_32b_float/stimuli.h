long int matA[N*M] __attribute__ ((aligned (4))) = {
  0x4e3a67f8,  0x4e1da87f,  0x4e70c7b1,  0x4eb4f9e3,  0x4eddc42f,  0x4e94ada5,  0x4e8aa0ca,  0x4ebc7985,  0x4dfbd0cc,  0x4dc30d16,  0x4ec33e42,  0x4ede6e96,  0x4e791541,  0x4eed253d,  0x4ebbcbf3,  0x4e119ed5,
  0x4cf412f6,  0x4eca56f8,  0x4e217506,  0x4e82e773,  0x4ea01e96,  0x4cb2a6da,  0x4dd3e1d3,  0x4dcda1e8,  0x4d5627f2,  0x4d554ea9,  0x4c20f323,  0x4e6f7ed1,  0x4efde705,  0x4d9937b8,  0x4ee97715,  0x4ed2b2e7,
  0x4c582053,  0x4e805d4c,  0x4d62d5d3,  0x4e85fa38,  0x4d56ceb5,  0x4ee738b0,  0x4e31912f,  0x4ec3bef3,  0x4e7d99d3,  0x4e2321ad,  0x4ed78134,  0x4c2cd786,  0x4db8d391,  0x4e8f1b30,  0x4e9ad203,  0x4d0321ee,
  0x4efed7f6,  0x4ef90e8b,  0x4e940649,  0x4ed7ac00,  0x4d016b3c,  0x4efeb26c,  0x4ed985da,  0x4edc8395,  0x4ea0da27,  0x4edc2745,  0x4ef764ab,  0x4e1b8727,  0x4cd42aba,  0x4df51621,  0x4dfab369,  0x4e134f67,
  0x4ede6b50,  0x4e316f00,  0x4ec1bf01,  0x4d8546e7,  0x4eef4830,  0x4deb899d,  0x4ee27584,  0x4d848334,  0x4e0af4d1,  0x4efbab07,  0x4eded614,  0x4e44f143,  0x4d993577,  0x4e942d6e,  0x4eed67f0,  0x4ea27f08,
  0x4d822d7f,  0x4df91367,  0x4dae6822,  0x4eb436c8,  0x4e7f3571,  0x4ee3b043,  0x4c4fe58e,  0x4ee55fe8,  0x4b8648a4,  0x4e88d8a8,  0x4da9e624,  0x4ecd07f6,  0x4e8b0f73,  0x4eb5c11f,  0x4dfc2a15,  0x4e089547,
  0x4e26ed5d,  0x4e03c08b,  0x4ee22610,  0x4e99f2f0,  0x4ee5303e,  0x4ec3d106,  0x4e827444,  0x4ddea3fc,  0x4e8a3bdd,  0x4e4af939,  0x4eabd2f0,  0x4c2f89a2,  0x4e93b9f6,  0x4eaf59c6,  0x4d1bec93,  0x4dc96982,
  0x4e6c67cd,  0x4ee604f8,  0x4e54a367,  0x4eba1ac0,  0x4efd9b1c,  0x4decc56d,  0x4d9c72d1,  0x4c1398bf,  0x4dcd7003,  0x4e4c1bef,  0x4e9c9df5,  0x4d308aa0,  0x4d9b1ec2,  0x4bc719be,  0x4eb90f84,  0x4ea13984,
  0x4ea9b16d,  0x4e879d62,  0x4c66cca2,  0x4e470a24,  0x4ebfa3e8,  0x4e84e0e1,  0x4d0c863c,  0x4e98192e,  0x4ef3970a,  0x4d906ee4,  0x4e5362d6,  0x4ec08cea,  0x4eff9828,  0x4ecabe5e,  0x4ef92019,  0x4ee7eb17,
  0x4ef3365f,  0x4eb6d4a7,  0x4eb1409b,  0x4eff3e45,  0x4eb91026,  0x4e2f4a41,  0x4cd9ccd1,  0x4cf8db56,  0x4eede575,  0x4e9168d5,  0x4e5bacf7,  0x4ee80ffb,  0x4d2cf886,  0x4d98593b,  0x4d7631df,  0x4eb190af,
  0x4e7b13bd,  0x4cc695ec,  0x4e82bf0e,  0x4e9faefd,  0x4e8fc6ca,  0x4c4e041f,  0x4ee7126d,  0x4e9e976e,  0x4e134e89,  0x4db23b06,  0x4e81f603,  0x4d93b18c,  0x4ec76d16,  0x4ea6543d,  0x4e32082e,  0x4ef82fed,
  0x4ec04a41,  0x4c2b0de3,  0x4d02077b,  0x4e7db106,  0x4e9c5b8b,  0x4df5ad42,  0x4e9b467a,  0x4e30cbb2,  0x4cc03012,  0x4e9c6b7f,  0x4e999357,  0x4d96385c,  0x4cc5a93a,  0x4e0e677e,  0x4d8f1cfc,  0x4defb280,
  0x4e07f9ee,  0x4d9c6b3e,  0x4ee64c7c,  0x4ef445a0,  0x4dacefdb,  0x4c42bfb2,  0x4cdb3ae3,  0x4eab7030,  0x4ee37071,  0x4ea7afb3,  0x4c933915,  0x4ede0435,  0x4e99201e,  0x4e75d99f,  0x4e49373f,  0x4ea0f8dd,
  0x4ef81e7f,  0x4efcd67d,  0x4e5c0dff,  0x4e422601,  0x4d8b3433,  0x4e3f8ace,  0x4ec5a4d5,  0x4e146ed5,  0x4e26228d,  0x4d986439,  0x4ebf24e8,  0x4e63a5f9,  0x4da554de,  0x4d29630f,  0x4ea3993c,  0x4dda25b8,
  0x4e7c71d7,  0x4e74456a,  0x4d91f01f,  0x4e8582e1,  0x4e04bd68,  0x4e6f939f,  0x4ef07ddf,  0x4eb118cf,  0x4eb3e857,  0x4e9fd3fd,  0x4edb4f21,  0x4ecb5244,  0x4efe66c6,  0x4e929530,  0x4e96a3e5,  0x4df6def1,
  0x4efc7e89,  0x4b0e5d80,  0x4e931027,  0x4e50874a,  0x4e57cfc7,  0x4edd7264,  0x4ea20eae,  0x4e9ff4e7,  0x4e4b7a22,  0x4ec90444,  0x4e22dfbb,  0x4e0b6115,  0x4e69aa5b,  0x4ef1d6a5,  0x4ea16458,  0x4d81578a
};

long int matB[N*M] __attribute__ ((aligned (4))) = {
  0x4e8aaec0,  0x4eb15709,  0x4eb916d9,  0x4efb426b,  0x4d8336e9,  0x4edcabbc,  0x4d6b1aeb,  0x4c8a91a8,  0x4e264218,  0x4ea6bd2d,  0x4ea0dbda,  0x4e99bc28,  0x4c19d321,  0x4ea4bbb4,  0x4e84926f,  0x4d47ff7a,
  0x4e97a3aa,  0x4e87a508,  0x4e7ea1b7,  0x4db9fac8,  0x4d3ca8bc,  0x4daafd7e,  0x4ec7a3f2,  0x4e67d950,  0x4e48577f,  0x4ede0340,  0x4ef9186b,  0x4e81923a,  0x4e49c94b,  0x4eb9b2f8,  0x4e5e3ab1,  0x4ef8b844,
  0x4e9d09df,  0x4e2ef70b,  0x4bd12fcc,  0x4ebc7950,  0x4e9124a5,  0x4e1fa497,  0x4d55094e,  0x4e671b2c,  0x4ede68c8,  0x4e83d482,  0x4ec9503f,  0x4ed56838,  0x4daed2a9,  0x4d3d5fcb,  0x4e439c2d,  0x4ea19305,
  0x4e90c18a,  0x4d599582,  0x4e7e1185,  0x4eaee020,  0x4ebee4b0,  0x4e51ebfe,  0x4ec2715f,  0x4e30a586,  0x4db851af,  0x4e70b6b6,  0x4ee18e02,  0x4d96663b,  0x4edcdec4,  0x4ea814ae,  0x4e1b538c,  0x4df61340,
  0x4e056c7d,  0x4e64e333,  0x4dc18e02,  0x4ed1ec68,  0x4d801095,  0x4ec8ce0a,  0x4d3b2fe5,  0x4e834fab,  0x4efd4812,  0x4df37c4b,  0x4e12dd34,  0x4eec18c0,  0x4e9fbe2a,  0x4e49f470,  0x4eddd521,  0x4ecbd340,
  0x4efb3688,  0x4ee24a60,  0x4e3f2d27,  0x4d5711c8,  0x4eef1930,  0x4e44207a,  0x4c1a2206,  0x4e17f32a,  0x4ee10aef,  0x4ee0ef36,  0x4eeb5149,  0x4e218dce,  0x4e426ac8,  0x4e70eec6,  0x4e30804d,  0x4e3f2bca,
  0x4e828f7d,  0x4e7e216f,  0x4ef6170e,  0x4e438192,  0x4e7b4667,  0x4eebaf6a,  0x4ea930ee,  0x4e848d66,  0x4ec081a7,  0x4eb4b566,  0x4dca124a,  0x4ddb898d,  0x4ebb3d6c,  0x4ed2c47c,  0x4ef3a46a,  0x4e4de882,
  0x4e68754c,  0x4e30b3ee,  0x4e7fefd1,  0x4e1f03e2,  0x4e7bd78c,  0x4e800f60,  0x4e65b4b4,  0x4eb15891,  0x4e5432c5,  0x4edf2ef1,  0x4e57148a,  0x4dc15fae,  0x4ec56b1b,  0x4de9150c,  0x4dd5db1e,  0x4dbd0dac,
  0x4e873e7c,  0x4d201906,  0x4e037045,  0x4c1a3026,  0x4e9eb66d,  0x4ee6c09d,  0x4e897da7,  0x4e09d990,  0x4efe2726,  0x4e9034ff,  0x4de8b434,  0x4e90791b,  0x4ec3a951,  0x4eb8a7ac,  0x4e57efc5,  0x4ea2d186,
  0x4e5f10f2,  0x4efa6cc4,  0x4d52cdc4,  0x4e61c907,  0x4e841f26,  0x4ecaa0ed,  0x4eefbe4f,  0x4b19eb50,  0x4dcea5b9,  0x4e2f2dbf,  0x4e23eb7f,  0x4e5add46,  0x4eb2ce59,  0x4cebf294,  0x4ce01657,  0x4d0fe4d6,
  0x4e50caab,  0x4dbb29e7,  0x4cba7a3e,  0x4def3ccf,  0x4ef7541e,  0x4e9d6397,  0x4d2feeb3,  0x4ed4f7e2,  0x4dc0010c,  0x4eb77dc0,  0x4d24f5e4,  0x4e979513,  0x4e160563,  0x4ee63352,  0x4e2fc9d7,  0x4ed68df5,
  0x4c13296e,  0x4e06129f,  0x4ea5076d,  0x4ea007b9,  0x4e8548a4,  0x4e836df7,  0x4edc02be,  0x4ee4edbf,  0x4e84f49b,  0x4e8df904,  0x4ec157e2,  0x4e4200da,  0x4ecbe254,  0x4e4abd55,  0x4dfd8eae,  0x4ee41180,
  0x4e028a1e,  0x4e287bcd,  0x4ea5f353,  0x4e82a806,  0x4dc6c3c0,  0x4ec68271,  0x4e3cf7ad,  0x4d4db57b,  0x4e0fb75f,  0x4e7a0790,  0x4ecd3dca,  0x4d2c7128,  0x4d94dfd0,  0x4ebce75d,  0x4eb6d970,  0x4ea89897,
  0x4ec813ad,  0x4ede6afa,  0x4ef11c1d,  0x4e9942f6,  0x4e4e51fd,  0x4dc202ec,  0x4cb35971,  0x4ea91546,  0x4ef1e71d,  0x4e3889af,  0x4c03a871,  0x4e308a0a,  0x4eecbfcc,  0x4e8df0d7,  0x4eb6253f,  0x4e9bb7bb,
  0x4dcd7fac,  0x4eec3feb,  0x4edb35b6,  0x4e0e9229,  0x4ee54848,  0x4c803890,  0x4ec2013a,  0x4e071e4a,  0x4ed731dd,  0x4e661a7d,  0x4d0d37cb,  0x4c148b14,  0x4ee07ea6,  0x4ea20002,  0x4ec91e9e,  0x4d26e682,
  0x4eb7da71,  0x4d83ea41,  0x4e869f9c,  0x4ed56edb,  0x4ee00d74,  0x4e38cb84,  0x4e8e8b33,  0x4e2bee0a,  0x4dff2390,  0x4e021864,  0x4e945688,  0x4e1fad46,  0x4ed845ba,  0x4cb79124,  0x4dbe3983,  0x4e9de2e1
};

long int matC[N*M] __attribute__ ((aligned (4)));

long int exp_res[N*M] __attribute__ ((aligned (4))) = {
  0x5f86d0a9,  0x5f8a6c34,  0x5f95ef71,  0x5f901bf4,  0x5f9ec149,  0x5f912951,  0x5f6d0156,  0x5f8e3079,  0x5fadc893,  0x5fa0ca70,  0x5f859459,  0x5f648c21,  0x5fb2e794,  0x5f985df7,  0x5f9205aa,  0x5f98711b,
  0x5f296025,  0x5f3028dc,  0x5f5dc7c6,  0x5f54aea8,  0x5f485fea,  0x5f35dbed,  0x5f5a273d,  0x5f1bffe1,  0x5f56a059,  0x5f4a4626,  0x5f6656b3,  0x5f096f73,  0x5f7512d4,  0x5f4b1281,  0x5f535425,  0x5f640de7,
  0x5f60774a,  0x5f51ea89,  0x5f4095d9,  0x5f075cc7,  0x5f81e6ba,  0x5f400961,  0x5f2913d2,  0x5f3a6020,  0x5f6cb7a0,  0x5f821bc8,  0x5f35574f,  0x5f0cd2bb,  0x5f7a668f,  0x5f685533,  0x5f36f40d,  0x5f3fc1fe,
  0x5faa6ec9,  0x5f981c51,  0x5f8bd24e,  0x5f8601d4,  0x5fae85a6,  0x5fac4bcf,  0x5f8d0c6b,  0x5f7daade,  0x5f9e4189,  0x5fc75b65,  0x5fa5f0e3,  0x5f801d79,  0x5fa72506,  0x5fa58468,  0x5f7e4122,  0x5f8e66da,
  0x5f884a17,  0x5f9ca61e,  0x5f88fccf,  0x5f9a573a,  0x5f9ba767,  0x5fa124f2,  0x5f78de9a,  0x5f6ad4bf,  0x5fa9a982,  0x5f954924,  0x5f665da7,  0x5f85093f,  0x5fa58fa3,  0x5f8de8a2,  0x5f93ab5b,  0x5f8be5a0,
  0x5f590f28,  0x5f601a61,  0x5f5a9e5f,  0x5f555ead,  0x5f6d73ef,  0x5f531c24,  0x5f40c53a,  0x5f47fae3,  0x5f6f22a6,  0x5f7725e0,  0x5f74a1cc,  0x5f17dcf3,  0x5f8ac019,  0x5f42a7b3,  0x5f34bc45,  0x5f532b59,
  0x5f83fc84,  0x5f648ea3,  0x5f48db52,  0x5f6ff6bd,  0x5f80d0f6,  0x5f8967f3,  0x5f1dbfda,  0x5f49f7e7,  0x5f993fed,  0x5f84e5a1,  0x5f6fa31d,  0x5f6619dd,  0x5f80a630,  0x5f7c4a5a,  0x5f767ce3,  0x5f835800,
  0x5f4c83a4,  0x5f45f589,  0x5f33f79e,  0x5f606cb1,  0x5f62b329,  0x5f51c04b,  0x5f47677e,  0x5f262db1,  0x5f639fb9,  0x5f5fcc9f,  0x5f5f5b68,  0x5f4737eb,  0x5f715f25,  0x5f5ccfc3,  0x5f4f0d7a,  0x5f6609c3,
  0x5f8c4ea6,  0x5f8addbe,  0x5fa32f37,  0x5f923496,  0x5f9f2f22,  0x5f9bb16c,  0x5f84b91d,  0x5f7680c7,  0x5fb0cf1e,  0x5fa0db53,  0x5f90a01b,  0x5f60c353,  0x5fb8d5a9,  0x5f9fdd1e,  0x5f954a8b,  0x5fa0d6d5,
  0x5f830a40,  0x5f56a292,  0x5f5d20cb,  0x5f93310f,  0x5f8ac4e3,  0x5f968bfc,  0x5f7f8018,  0x5f56238b,  0x5f8f4301,  0x5f8f5b2b,  0x5f9bb1ab,  0x5f830997,  0x5f97b218,  0x5f81a73c,  0x5f571a02,  0x5f929824,
  0x5f721b22,  0x5f486678,  0x5f83d6d0,  0x5f88cd64,  0x5f823e86,  0x5f89dbc8,  0x5f49b507,  0x5f4ec29b,  0x5f835a6c,  0x5f7bbad0,  0x5f5aed8f,  0x5f373cd6,  0x5f93084d,  0x5f76b409,  0x5f7d2e76,  0x5f723af9,
  0x5f240bb9,  0x5f2b5703,  0x5f1f9862,  0x5f3ac930,  0x5f2e4e14,  0x5f54ce1e,  0x5f09247f,  0x5f07cf3d,  0x5f27c7cb,  0x5f367939,  0x5f0c5bb1,  0x5f12ea58,  0x5f3ee2e8,  0x5f2de019,  0x5f20f7a0,  0x5f0cc15c,
  0x5f64544d,  0x5f41e32f,  0x5f62c64e,  0x5f81be43,  0x5f882e89,  0x5f810ba8,  0x5f818c52,  0x5f48de24,  0x5f85eca2,  0x5f7bb3a5,  0x5f8591b5,  0x5f3e9ff5,  0x5f9e9d02,  0x5f537c43,  0x5f40ebd2,  0x5f71e4e5,
  0x5f5ceac7,  0x5f5b0c82,  0x5f6cbded,  0x5f503632,  0x5f6bc3d4,  0x5f6ec7f2,  0x5f53334c,  0x5f40424b,  0x5f6f99c8,  0x5f905f20,  0x5f6dbe01,  0x5f3bf89d,  0x5f65a699,  0x5f87552a,  0x5f5eaab4,  0x5f66def3,
  0x5f8807c5,  0x5f8b9414,  0x5f9df9e6,  0x5f822582,  0x5fa04424,  0x5face5b4,  0x5f8fcbe3,  0x5f8166c3,  0x5f9fe736,  0x5faf29d4,  0x5f8ae706,  0x5f5295f8,  0x5faf6d09,  0x5faaafc8,  0x5f917240,  0x5f97571c,
  0x5f8e3033,  0x5f9cfb53,  0x5f8d3672,  0x5f8708e8,  0x5f8f5c21,  0x5f955d53,  0x5f4d42d0,  0x5f4aa094,  0x5fa493ca,  0x5f978a63,  0x5f73c158,  0x5f54297c,  0x5f9891de,  0x5f85f38d,  0x5f84ff57,  0x5f5a4e7f
};

