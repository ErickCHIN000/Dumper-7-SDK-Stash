#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x840 - 0x828)
// BlueprintGeneratedClass BP_Crop_Plot_Mound.BP_Crop_Plot_Mound_C
class ABP_Crop_Plot_Mound_C : public ABP_Crop_Plot_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x828(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFarmableComponent*                    Farmable;                                          // 0x830(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x838(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Crop_Plot_Mound_C* GetDefaultObj();

	void SetSoilState(bool bWet, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default);
	void HarvestResource(class AIcarusPlayerCharacter* PlayerCharacter, class UStaticMeshComponent*& StaticMeshComponent, bool bUsingSickle, bool* Harvested, bool CallFunc_HarvestResource_Harvested);
	void ReceiveBeginPlay();
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Crop_Plot_Mound(int32 EntryPoint, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue);
};

}


