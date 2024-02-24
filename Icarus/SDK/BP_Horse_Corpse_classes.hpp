#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x77C - 0x770)
// BlueprintGeneratedClass BP_Horse_Corpse.BP_Horse_Corpse_C
class ABP_Horse_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
	class UGFurComponent*                        GFur;                                              // 0x770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        CosmeticSkinIndex;                                 // 0x778(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Horse_Corpse_C* GetDefaultObj();

	void IsSkeletonUpdated();
	void UpdateCorpseMaterials(class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, bool Temp_bool_Variable, int32 Temp_int_Variable, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, class UMaterialInterface* Temp_object_Variable_8, int32 Temp_int_Variable_2, class UMaterialInterface* Temp_object_Variable_9, class UMaterialInterface* Temp_object_Variable_10, class UMaterialInterface* Temp_object_Variable_11, int32 Temp_int_Variable_3, class UMaterialInterface* Temp_object_Variable_12, class UMaterialInterface* Temp_object_Variable_13, class UMaterialInterface* Temp_object_Variable_14, int32 Temp_int_Variable_4, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1, int32 Temp_int_Variable_5, class UMaterialInterface* K2Node_Select_Default_2, class UMaterialInterface* K2Node_Select_Default_3, class UMaterialInterface* K2Node_Select_Default_4, class UMaterialInterface* K2Node_Select_Default_5, class UMaterialInterface* K2Node_Select_Default_6);
	void OnRep_CosmeticSkinIndex();
	void OnSkinnedStateUpdated();
};

}


