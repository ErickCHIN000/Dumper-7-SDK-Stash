#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// BlueprintGeneratedClass GrutchDeathContainer_Alpha.GrutchDeathContainer_Alpha_C
class AGrutchDeathContainer_Alpha_C : public AAi_BaseDeathContainer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGrutchDeathContainer_Alpha_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GrutchDeathContainer_Alpha(int32 EntryPoint);
};

}


