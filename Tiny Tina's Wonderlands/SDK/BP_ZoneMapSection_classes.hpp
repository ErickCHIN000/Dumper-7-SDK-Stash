#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x4A0 - 0x458)
// BlueprintGeneratedClass BP_ZoneMapSection.BP_ZoneMapSection_C
class ABP_ZoneMapSection_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cube;                                              // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  Section_Name;                                      // 0x468(0x18)(Edit, BlueprintVisible)
	class UZoneMapMeshData*                      NewVar_0;                                          // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Min;                                               // 0x488(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewVar_1;                                          // 0x494(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ZoneMapSection_C* GetDefaultObj();

	void UserConstructionScript(const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ZoneMapSection(int32 EntryPoint);
};

}


