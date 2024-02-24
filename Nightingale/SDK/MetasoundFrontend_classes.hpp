#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MetasoundFrontend.MetaSoundDocumentInterface
class IMetaSoundDocumentInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMetaSoundDocumentInterface* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MetasoundFrontend.MetasoundParameterPack
class UMetasoundParameterPack : public UObject
{
public:
	uint8                                        Pad_2187[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMetasoundParameterPack* GetDefaultObj();

	enum class ESetParamResult SetTrigger(class FName ParameterName, bool OnlyIfExists);
	enum class ESetParamResult SetString(class FName ParameterName, const class FString& InValue, bool OnlyIfExists);
	enum class ESetParamResult SetInt(class FName ParameterName, int32 InValue, bool OnlyIfExists);
	enum class ESetParamResult SetFloat(class FName ParameterName, float InValue, bool OnlyIfExists);
	enum class ESetParamResult SetBool(class FName ParameterName, bool InValue, bool OnlyIfExists);
	class UMetasoundParameterPack* MakeMetasoundParameterPack();
	bool HasTrigger(class FName ParameterName);
	bool HasString(class FName ParameterName);
	bool HasInt(class FName ParameterName);
	bool HasFloat(class FName ParameterName);
	bool HasBool(class FName ParameterName);
	bool GetTrigger(class FName ParameterName, enum class ESetParamResult* Result);
	class FString GetString(class FName ParameterName, enum class ESetParamResult* Result);
	int32 GetInt(class FName ParameterName, enum class ESetParamResult* Result);
	float GetFloat(class FName ParameterName, enum class ESetParamResult* Result);
	bool GetBool(class FName ParameterName, enum class ESetParamResult* Result);
};

// 0x1D8 (0x200 - 0x28)
// Class MetasoundFrontend.MetaSoundBuilderDocument
class UMetaSoundBuilderDocument : public UObject
{
public:
	uint8                                        Pad_21D7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetasoundFrontendDocument            Document;                                          // 0x30(0x1C8)(Transient, NativeAccessSpecifierPrivate)
	TSubclassOf<class UObject>                   MetaSoundUClass;                                   // 0x1F8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMetaSoundBuilderDocument* GetDefaultObj();

};

}


