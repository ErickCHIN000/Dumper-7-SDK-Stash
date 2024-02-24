#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Techniques.BPFL_Techniques_C
// (None)

class UClass* UBPFL_Techniques_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Techniques_C");

	return Clss;
}


// BPFL_Techniques_C BPFL_Techniques.Default__BPFL_Techniques_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Techniques_C* UBPFL_Techniques_C::GetDefaultObj()
{
	static class UBPFL_Techniques_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Techniques_C*>(UBPFL_Techniques_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Techniques.BPFL_Techniques_C.Get Resource From Resource Collector
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Collector                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      PlayerActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               StillResourcesLeft                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ResourceCollectionInterface                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceCollectionInterface>K2Node_DynamicCast_AsResource_Collection_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPickupResult               CallFunc_CalculatePickupResult_ReturnValue                       (None)
// TScriptInterface<class IResourceCollectionInterface>K2Node_DynamicCast_AsResource_Collection_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClaimItem_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItem_ClaimedInstances                              (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItem_UnclaimedItems                                (ReferenceParm)
// bool                               CallFunc_CanRemoveResource_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceCollectionInterface>K2Node_DynamicCast_AsResource_Collection_Interface_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RemoveResource_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Techniques_C::Get_Resource_From_Resource_Collector(class UObject* Collector, class AActor* PlayerActor, class UObject* __WorldContext, bool* Success, bool StillResourcesLeft, class UObject* ResourceCollectionInterface, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface, bool K2Node_DynamicCast_bSuccess, const struct FPickupResult& CallFunc_CalculatePickupResult_ReturnValue, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, bool CallFunc_CanRemoveResource_ReturnValue, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_RemoveResource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Techniques_C", "Get Resource From Resource Collector");

	Params::UBPFL_Techniques_C_Get_Resource_From_Resource_Collector_Params Parms{};

	Parms.Collector = Collector;
	Parms.PlayerActor = PlayerActor;
	Parms.__WorldContext = __WorldContext;
	Parms.StillResourcesLeft = StillResourcesLeft;
	Parms.ResourceCollectionInterface = ResourceCollectionInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsResource_Collection_Interface = K2Node_DynamicCast_AsResource_Collection_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CalculatePickupResult_ReturnValue = CallFunc_CalculatePickupResult_ReturnValue;
	Parms.K2Node_DynamicCast_AsResource_Collection_Interface_1 = K2Node_DynamicCast_AsResource_Collection_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ClaimItem_bSuccess = CallFunc_ClaimItem_bSuccess;
	Parms.CallFunc_ClaimItem_ClaimedInstances = CallFunc_ClaimItem_ClaimedInstances;
	Parms.CallFunc_ClaimItem_UnclaimedItems = CallFunc_ClaimItem_UnclaimedItems;
	Parms.CallFunc_CanRemoveResource_ReturnValue = CallFunc_CanRemoveResource_ReturnValue;
	Parms.K2Node_DynamicCast_AsResource_Collection_Interface_2 = K2Node_DynamicCast_AsResource_Collection_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_RemoveResource_ReturnValue = CallFunc_RemoveResource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_Techniques.BPFL_Techniques_C.Fill Item Water Level Completely
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquippableItemBase_C*    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWaterData_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWaterData_Water                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWaterData_MaxWater                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateWaterLevel_NewWater                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Techniques_C::Fill_Item_Water_Level_Completely(class ABP_EquippableItemBase_C* Item, class UObject* __WorldContext, bool* Success, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetWaterData_Success, double CallFunc_GetWaterData_Water, double CallFunc_GetWaterData_MaxWater, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_UpdateWaterLevel_NewWater, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Techniques_C", "Fill Item Water Level Completely");

	Params::UBPFL_Techniques_C_Fill_Item_Water_Level_Completely_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWaterData_Success = CallFunc_GetWaterData_Success;
	Parms.CallFunc_GetWaterData_Water = CallFunc_GetWaterData_Water;
	Parms.CallFunc_GetWaterData_MaxWater = CallFunc_GetWaterData_MaxWater;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_UpdateWaterLevel_NewWater = CallFunc_UpdateWaterLevel_NewWater;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_Techniques.BPFL_Techniques_C.Fill Item from Water Collector
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Collector                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ResourceContainerAccess                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ResourceCollectionInterface                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceCollectionInterface>K2Node_DynamicCast_AsResource_Collection_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanRemoveResource_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceCollectionInterface>K2Node_DynamicCast_AsResource_Collection_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWaterData_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWaterData_Water                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWaterData_MaxWater                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceContainerAccess>K2Node_DynamicCast_AsResource_Container_Access                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceContainerObservable>CallFunc_GetResourceContainerObservable_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              CallFunc_RemoveResource_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateWaterLevel_NewWater                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureResourceCollectionTypeCallFunc_GetResourceType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RemoveResource_Amount_ImplicitCast                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateWaterLevel_Change_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Techniques_C::Fill_Item_from_Water_Collector(class UObject* Collector, class ABP_EquippableItemBase_C* Item, class UObject* __WorldContext, bool* Success, class UObject* ResourceContainerAccess, class UObject* ResourceCollectionInterface, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_MakeLiteralString_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue_1, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanRemoveResource_ReturnValue, TScriptInterface<class IResourceCollectionInterface> K2Node_DynamicCast_AsResource_Collection_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetWaterData_Success, double CallFunc_GetWaterData_Water, double CallFunc_GetWaterData_MaxWater, TScriptInterface<class IResourceContainerAccess> K2Node_DynamicCast_AsResource_Container_Access, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, TScriptInterface<class IResourceContainerObservable> CallFunc_GetResourceContainerObservable_ReturnValue, float CallFunc_RemoveResource_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_UpdateWaterLevel_NewWater, enum class EStructureResourceCollectionType CallFunc_GetResourceType_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_RemoveResource_Amount_ImplicitCast, double CallFunc_UpdateWaterLevel_Change_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Techniques_C", "Fill Item from Water Collector");

	Params::UBPFL_Techniques_C_Fill_Item_from_Water_Collector_Params Parms{};

	Parms.Collector = Collector;
	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.ResourceContainerAccess = ResourceContainerAccess;
	Parms.ResourceCollectionInterface = ResourceCollectionInterface;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_FindFirstImplementor_ReturnValue_1 = CallFunc_FindFirstImplementor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsResource_Collection_Interface = K2Node_DynamicCast_AsResource_Collection_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanRemoveResource_ReturnValue = CallFunc_CanRemoveResource_ReturnValue;
	Parms.K2Node_DynamicCast_AsResource_Collection_Interface_1 = K2Node_DynamicCast_AsResource_Collection_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetWaterData_Success = CallFunc_GetWaterData_Success;
	Parms.CallFunc_GetWaterData_Water = CallFunc_GetWaterData_Water;
	Parms.CallFunc_GetWaterData_MaxWater = CallFunc_GetWaterData_MaxWater;
	Parms.K2Node_DynamicCast_AsResource_Container_Access = K2Node_DynamicCast_AsResource_Container_Access;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetResourceContainerObservable_ReturnValue = CallFunc_GetResourceContainerObservable_ReturnValue;
	Parms.CallFunc_RemoveResource_ReturnValue = CallFunc_RemoveResource_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_UpdateWaterLevel_NewWater = CallFunc_UpdateWaterLevel_NewWater;
	Parms.CallFunc_GetResourceType_ReturnValue = CallFunc_GetResourceType_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_RemoveResource_Amount_ImplicitCast = CallFunc_RemoveResource_Amount_ImplicitCast;
	Parms.CallFunc_UpdateWaterLevel_Change_ImplicitCast = CallFunc_UpdateWaterLevel_Change_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPFL_Techniques.BPFL_Techniques_C.GetDamageActivationTagForTechnique
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>Technique                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Damage_Activation_Tag                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSoftObjectPath             CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// class UTechniqueDataAsset*         K2Node_DynamicCast_AsTechnique_Data_Asset                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Techniques_C::GetDamageActivationTagForTechnique(TSoftObjectPtr<class UTechniqueDataAsset> Technique, class UObject* __WorldContext, struct FGameplayTag* Damage_Activation_Tag, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FSoftObjectPath& CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue, class UTechniqueDataAsset* K2Node_DynamicCast_AsTechnique_Data_Asset, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_BreakSoftObjectPath_PathString, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetBaseFilename_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Techniques_C", "GetDamageActivationTagForTechnique");

	Params::UBPFL_Techniques_C_GetDamageActivationTagForTechnique_Params Parms{};

	Parms.Technique = Technique;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue = CallFunc_Conv_SoftObjRefToSoftObjPath_ReturnValue;
	Parms.K2Node_DynamicCast_AsTechnique_Data_Asset = K2Node_DynamicCast_AsTechnique_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage_Activation_Tag != nullptr)
		*Damage_Activation_Tag = std::move(Parms.Damage_Activation_Tag);

}

}


