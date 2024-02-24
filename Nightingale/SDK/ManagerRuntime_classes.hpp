#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2C0 - 0x2A0)
// Class ManagerRuntime.ManagerBase
class AManagerBase : public AActor
{
public:
	uint8                                        Pad_949[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialisationTimeout;                             // 0x2A8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_94D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBasicAwaiter*                         ManagerBaseAwaiter;                                // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bManagerInitialized;                               // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_951[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AManagerBase* GetDefaultObj();

	void MarkReady();
	void InitializeManager();
};

// 0x0 (0x28 - 0x28)
// Class ManagerRuntime.ManagerProviderInterface
class IManagerProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IManagerProviderInterface* GetDefaultObj();

};

}


