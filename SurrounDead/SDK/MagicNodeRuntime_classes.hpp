#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class MagicNodeRuntime.MagicNode
class UMagicNode : public UObject
{
public:
	uint8                                        Pad_1069[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicNode* GetDefaultObj();

	void Finish();
};

// 0x8 (0x30 - 0x28)
// Class MagicNodeRuntime.MagicNodeScript
class UMagicNodeScript : public UObject
{
public:
	TSubclassOf<class UMagicNode>                RuntimeScriptClass;                                // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMagicNodeScript* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MagicNodeRuntime.MGC_Settings
class UMGC_Settings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMGC_Settings* GetDefaultObj();

};

}


