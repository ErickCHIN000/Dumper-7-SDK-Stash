#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Techniques.BPFL_Techniques_C
class UBPFL_Techniques_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Techniques_C* GetDefaultObj();

	void Get_Resource_From_Resource_Collector(class UObject* Collector, class AActor* PlayerActor, class UObject* __WorldContext, bool* Success, bool StillResourcesLeft, class UObject* ResourceCollectionInterface, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface, bool K2Node_DynamicCast_bSuccess, const struct FPickupResult& CallFunc_CalculatePickupResult_ReturnValue, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, bool CallFunc_CanRemoveResource_ReturnValue, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_RemoveResource_ReturnValue);
	void Fill_Item_Water_Level_Completely(class ABP_EquippableItemBase_C* Item, class UObject* __WorldContext, bool* Success, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetWaterData_Success, double CallFunc_GetWaterData_Water, double CallFunc_GetWaterData_MaxWater, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_UpdateWaterLevel_NewWater, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void Fill_Item_from_Water_Collector(class UObject* Collector, class ABP_EquippableItemBase_C* Item, class UObject* __WorldContext, bool* Success, class UObject* ResourceContainerAccess, class UObject* ResourceCollectionInterface, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_MakeLiteralString_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue_1, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanRemoveResource_ReturnValue, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetWaterData_Success, double CallFunc_GetWaterData_Water, double CallFunc_GetWaterData_MaxWater, TScriptInterface<class IResourceContainerAccess> K2Node_DynamicCast_AsResource_Container_Access, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, TScriptInterface<class IResourceContainerObservable> CallFunc_GetResourceContainerObservable_ReturnValue, float CallFunc_RemoveResource_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_UpdateWaterLevel_NewWater, enum class EStructureResourceCollectionType CallFunc_GetResourceType_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_RemoveResource_Amount_ImplicitCast, double CallFunc_UpdateWaterLevel_Change_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void GetDamageActivationTagForTechnique(TSoftObjectPtr<class UTechniqueDataAsset> Technique, class UObject* __WorldContext, struct FGameplayTag* Damage_Activation_Tag, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FSoftObjectPath& CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue, class UTechniqueDataAsset* K2Node_DynamicCast_AsTechnique_Data_Asset, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_BreakSoftObjectPath_PathString, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetBaseFilename_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}


