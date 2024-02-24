#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x260 - 0x1F8)
// BlueprintGeneratedClass bc_Crafting_New.bc_Crafting_New_C
class Ubc_Crafting_New_C : public USceneComponent
{
public:
	uint8                                        Pad_28D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_Crafting_Main_C*                  UI;                                                // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x218(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        InBlendDuration;                                   // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutBlendDuration;                                  // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bItemShouldShow;                                   // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            CustomOpacityForMesh;                              // 0x238(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_Crafting_New_C* GetDefaultObj();

	void InitWidget(class AActor* CallFunc_GetOwner_ReturnValue, class Aba_Crafting_Base_02_C* K2Node_DynamicCast_AsBa_Crafting_Base_02, bool K2Node_DynamicCast_bSuccess, class UWid_Crafting_Main_C* CallFunc_Create_ReturnValue);
	void Start();
	void Initialize(class UStaticMeshComponent* Mesh);
	void End();
	void NextTab();
	void PreviousTab();
	void LeftItem();
	void RightItem();
	void Craft();
	void NewSelectionUI(class FName ItemId);
	void Back();
	void GoBackUI();
	void Cancel();
	void ExecuteUbergraph_bc_Crafting_New(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, TSoftObjectPtr<class UTexture> Temp_softobject_Variable, TSoftObjectPtr<class UTexture> Temp_softobject_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* K2Node_CustomEvent_Mesh, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName K2Node_CustomEvent_ItemID, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, TSoftObjectPtr<class UTexture> K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, float CallFunc_SelectFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float K2Node_Select_Default_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_HideShowActiveItem_OutActionSuccessful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void GoBack__DelegateSignature();
};

}


