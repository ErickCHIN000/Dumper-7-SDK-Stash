#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1230 - 0x1228)
// BlueprintGeneratedClass LightBrigandBase_Guitar_SpecialOne.LightBrigandBase_Guitar_SpecialOne_C
class ALightBrigandBase_Guitar_SpecialOne_C : public ALightBrigandBase_Guitar_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1228(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ALightBrigandBase_Guitar_SpecialOne_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void DropGuitar();
	void ExecuteUbergraph_LightBrigandBase_Guitar_SpecialOne(int32 EntryPoint, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_small_physics_prop_guitar_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


