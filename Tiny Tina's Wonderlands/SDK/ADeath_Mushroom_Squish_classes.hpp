#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass ADeath_Mushroom_Squish.ADeath_Mushroom_Squish_C
class UADeath_Mushroom_Squish_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UADeath_Mushroom_Squish_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_ADeath_Mushroom_Squish(int32 EntryPoint, class AActor* K2Node_Event_Actor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue);
};

}


