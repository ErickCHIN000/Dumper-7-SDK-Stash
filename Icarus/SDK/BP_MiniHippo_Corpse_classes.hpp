#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x774 - 0x770)
// BlueprintGeneratedClass BP_MiniHippo_Corpse.BP_MiniHippo_Corpse_C
class ABP_MiniHippo_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
	int32                                        CosmeticSkinIndex;                                 // 0x770(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MiniHippo_Corpse_C* GetDefaultObj();

	void Update_Cosmetic_Materials(class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, int32 Temp_int_Variable, class USkeletalMesh* Temp_object_Variable_3, class USkeletalMesh* Temp_object_Variable_4, class USkeletalMesh* Temp_object_Variable_5, int32 Temp_int_Variable_1, class USkeletalMesh* Temp_object_Variable_6, class USkeletalMesh* Temp_object_Variable_7, class USkeletalMesh* Temp_object_Variable_8, bool Temp_bool_Variable, int32 Temp_int_Variable_2, class USkeletalMesh* Temp_object_Variable_9, class USkeletalMesh* Temp_object_Variable_10, class USkeletalMesh* Temp_object_Variable_11, int32 Temp_int_Variable_3, class UMaterialInterface* Temp_object_Variable_12, class UMaterialInterface* Temp_object_Variable_13, class UMaterialInterface* Temp_object_Variable_14, bool Temp_bool_Variable_1, int32 Temp_int_Variable_4, class UMaterialInterface* Temp_object_Variable_15, class UMaterialInterface* Temp_object_Variable_16, class UMaterialInterface* Temp_object_Variable_17, int32 Temp_int_Variable_5, class UMaterialInterface* K2Node_Select_Default, class USkeletalMesh* K2Node_Select_Default_1, class USkeletalMesh* K2Node_Select_Default_2, class USkeletalMesh* K2Node_Select_Default_3, class USkeletalMesh* K2Node_Select_Default_4, class UMaterialInterface* K2Node_Select_Default_5, int32 Temp_int_Variable_6, class UMaterialInterface* K2Node_Select_Default_6, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* K2Node_Select_Default_7, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void OnRep_CosmeticSkinIndex();
	void IsSkeletonUpdated();
	void OnSkinnedStateUpdated();
};

}


