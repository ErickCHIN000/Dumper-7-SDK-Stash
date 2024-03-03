#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x80 - 0x28)
// Class LowEntryEncryption.LowEntryEncryptionAesFastEngine
class ULowEntryEncryptionAesFastEngine : public UObject
{
public:
	int32                                        ROUNDS;                                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5[0x24];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        C0;                                                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C1;                                                // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C2;                                                // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C3;                                                // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C0store1;                                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C1store1;                                          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C2store1;                                          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C3store1;                                          // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C0store2;                                          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C1store2;                                          // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C2store2;                                          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C3store2;                                          // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULowEntryEncryptionAesFastEngine* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class LowEntryEncryption.LowEntryEncryptionAesFastEngine1D
class ULowEntryEncryptionAesFastEngine1D : public UObject
{
public:
	int32                                        ROUNDS;                                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                EW;                                                // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                DW;                                                // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        C0;                                                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C1;                                                // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C2;                                                // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C3;                                                // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C0store1;                                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C1store1;                                          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C2store1;                                          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C3store1;                                          // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C0store2;                                          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C1store2;                                          // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C2store2;                                          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C3store2;                                          // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULowEntryEncryptionAesFastEngine1D* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LowEntryEncryption.LowEntryEncryptionAesKey
class ULowEntryEncryptionAesKey : public UObject
{
public:
	int32                                        ROUNDS;                                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EncryptionWSet;                                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF[0x13];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DecryptionWSet;                                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULowEntryEncryptionAesKey* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LowEntryEncryption.LowEntryEncryptionAesKey1D
class ULowEntryEncryptionAesKey1D : public UObject
{
public:
	int32                                        ROUNDS;                                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EncryptionWSet;                                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                EncryptionW;                                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         DecryptionWSet;                                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                DecryptionW;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULowEntryEncryptionAesKey1D* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LowEntryEncryption.LowEntryEncryptionLibrary
class ULowEntryEncryptionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULowEntryEncryptionLibrary* GetDefaultObj();

	bool VerifySignatureRsa(TArray<uint8>& Signature, TArray<uint8>& ExpectedHash, class ULowEntryRsaPublicKey* PublicKey);
	TArray<uint8> SignRsa(TArray<uint8>& Hash, class ULowEntryRsaPrivateKey* PrivateKey);
	TArray<uint8> RsaPublicKeyToBytes(class ULowEntryRsaPublicKey* PublicKey);
	TArray<uint8> RsaPrivateKeyToBytes(class ULowEntryRsaPrivateKey* PrivateKey);
	TArray<uint8> GenerateSecureRandomBytesRandomLength(int32 MinLength, int32 MaxLength);
	TArray<uint8> GenerateSecureRandomBytes(int32 Length);
	void GenerateKeysRsa(class ULowEntryRsaPublicKey** PublicKey, class ULowEntryRsaPrivateKey** PrivateKey, int32 Bits);
	TArray<uint8> EncryptRsa(TArray<uint8>& Data, class ULowEntryRsaPublicKey* PublicKey);
	TArray<uint8> EncryptAes(TArray<uint8>& Data, TArray<uint8>& Key, bool AddHash);
	TArray<uint8> DecryptRsa(TArray<uint8>& EncryptedData, class ULowEntryRsaPrivateKey* PrivateKey);
	TArray<uint8> DecryptAes(TArray<uint8>& EncryptedData, TArray<uint8>& Key, bool AddedHash);
	void BytesToRsaPublicKey(bool* Success, class ULowEntryRsaPublicKey** PublicKey, TArray<uint8>& ByteArray, int32 Index, int32 Length);
	void BytesToRsaPrivateKey(bool* Success, class ULowEntryRsaPrivateKey** PrivateKey, TArray<uint8>& ByteArray, int32 Index, int32 Length);
};

// 0x10 (0x38 - 0x28)
// Class LowEntryEncryption.LowEntryRsaKeys
class ULowEntryRsaKeys : public UObject
{
public:
	class ULowEntryRsaPublicKey*                 PublicKey;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryRsaPrivateKey*                PrivateKey;                                        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULowEntryRsaKeys* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class LowEntryEncryption.LowEntryRsaPrivateKey
class ULowEntryRsaPrivateKey : public UObject
{
public:
	uint8                                        Pad_331[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULowEntryRsaPrivateKey* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class LowEntryEncryption.LowEntryRsaPublicKey
class ULowEntryRsaPublicKey : public UObject
{
public:
	uint8                                        Pad_33F[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULowEntryRsaPublicKey* GetDefaultObj();

};

}


