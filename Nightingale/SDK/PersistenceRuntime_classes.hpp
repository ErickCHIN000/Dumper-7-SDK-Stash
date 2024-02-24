#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class PersistenceRuntime.PersistentDataObject
class IPersistentDataObject : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPersistentDataObject* GetDefaultObj();

};

// 0x40 (0xF8 - 0xB8)
// Class PersistenceRuntime.PersistentDataComponent
class UPersistentDataComponent : public UDelayedRegistrationComponent
{
public:
	uint8                                        Pad_9D1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Namespace;                                         // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UPersistentDataComponent>  StopAtClass;                                       // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPersistentDataHelper*                 PersistentDataHelper;                              // 0xD8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9D9[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPersistentDataComponent* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class PersistenceRuntime.PersistentDataHelper
class UPersistentDataHelper : public UObject
{
public:
	uint8                                        Pad_A0A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseProfileV3;                                     // 0x30(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParentProperties;                          // 0x31(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A11[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            PersistentPropertyNames;                           // 0x38(0x50)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInitialized;                                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A1C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPersistentDataHelper* GetDefaultObj();

	TArray<class FName> GetOwnerPersistableProperties();
};

}


