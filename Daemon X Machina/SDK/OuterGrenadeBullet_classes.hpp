#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3E0 - 0x3D8)
// BlueprintGeneratedClass OuterGrenadeBullet.OuterGrenadeBullet_C
class AOuterGrenadeBullet_C : public AGrenadeBullet_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AOuterGrenadeBullet_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_OuterGrenadeBullet(int32 EntryPoint);
};

}


