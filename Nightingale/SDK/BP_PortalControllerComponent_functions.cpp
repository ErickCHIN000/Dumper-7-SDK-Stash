#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PortalControllerComponent.BP_PortalControllerComponent_C
// (None)

class UClass* UBP_PortalControllerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PortalControllerComponent_C");

	return Clss;
}


// BP_PortalControllerComponent_C BP_PortalControllerComponent.Default__BP_PortalControllerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PortalControllerComponent_C* UBP_PortalControllerComponent_C::GetDefaultObj()
{
	static class UBP_PortalControllerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PortalControllerComponent_C*>(UBP_PortalControllerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.IsSavedRealm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Cards                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsSavedRealm                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IServerKeyProvider>KeyProvider                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URealmDeploymentSystemComponent*RealmDeploymentSystemComponent                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterAppearanceComponent_C*AppearanceComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              RealmSettings                                                    (Edit, BlueprintVisible)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerKeyProviderUsingRealmTags*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmSettingsFromCards_IsValidCardSet                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              CallFunc_GetRealmSettingsFromCards_RealmSettings                 (None)
// enum class ERealmDifficulty        CallFunc_GetSelectedDifficulty_SelectedDifficulty                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextRealmPower_NextRealmPower                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSavedRealmWithTags_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::IsSavedRealm(TArray<struct FInventoryEntry>& Cards, class UObject* PlayerController, bool* IsSavedRealm, TScriptInterface<class IServerKeyProvider> KeyProvider, class URealmDeploymentSystemComponent* RealmDeploymentSystemComponent, class UBP_CharacterAppearanceComponent_C* AppearanceComponent, const struct FRealmSettings& RealmSettings, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UServerKeyProviderUsingRealmTags* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetRealmSettingsFromCards_IsValidCardSet, const struct FRealmSettings& CallFunc_GetRealmSettingsFromCards_RealmSettings, enum class ERealmDifficulty CallFunc_GetSelectedDifficulty_SelectedDifficulty, int32 CallFunc_GetNextRealmPower_NextRealmPower, bool CallFunc_HasSavedRealmWithTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "IsSavedRealm");

	Params::UBP_PortalControllerComponent_C_IsSavedRealm_Params Parms{};

	Parms.Cards = Cards;
	Parms.PlayerController = PlayerController;
	Parms.KeyProvider = KeyProvider;
	Parms.RealmDeploymentSystemComponent = RealmDeploymentSystemComponent;
	Parms.AppearanceComponent = AppearanceComponent;
	Parms.RealmSettings = RealmSettings;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRealmSettingsFromCards_IsValidCardSet = CallFunc_GetRealmSettingsFromCards_IsValidCardSet;
	Parms.CallFunc_GetRealmSettingsFromCards_RealmSettings = CallFunc_GetRealmSettingsFromCards_RealmSettings;
	Parms.CallFunc_GetSelectedDifficulty_SelectedDifficulty = CallFunc_GetSelectedDifficulty_SelectedDifficulty;
	Parms.CallFunc_GetNextRealmPower_NextRealmPower = CallFunc_GetNextRealmPower_NextRealmPower;
	Parms.CallFunc_HasSavedRealmWithTags_ReturnValue = CallFunc_HasSavedRealmWithTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSavedRealm != nullptr)
		*IsSavedRealm = Parms.IsSavedRealm;

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.OpenPortalWithSavedRealm_Private
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URealmDeploymentSystemComponent*RealmDeploymentSystemComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              RealmSettings                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class ADeploymentPortal*           DeploymentPortal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IServerKeyProvider>KeyProvider                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSavedRealmWithTags_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDestinationAndRestart_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::OpenPortalWithSavedRealm_Private(class URealmDeploymentSystemComponent* RealmDeploymentSystemComponent, const struct FRealmSettings& RealmSettings, class ADeploymentPortal* DeploymentPortal, TScriptInterface<class IServerKeyProvider> KeyProvider, const class FString& CallFunc_GetSavedRealmWithTags_ReturnValue, bool CallFunc_SetDestinationAndRestart_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "OpenPortalWithSavedRealm_Private");

	Params::UBP_PortalControllerComponent_C_OpenPortalWithSavedRealm_Private_Params Parms{};

	Parms.RealmDeploymentSystemComponent = RealmDeploymentSystemComponent;
	Parms.RealmSettings = RealmSettings;
	Parms.DeploymentPortal = DeploymentPortal;
	Parms.KeyProvider = KeyProvider;
	Parms.CallFunc_GetSavedRealmWithTags_ReturnValue = CallFunc_GetSavedRealmWithTags_ReturnValue;
	Parms.CallFunc_SetDestinationAndRestart_ReturnValue = CallFunc_SetDestinationAndRestart_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.CreateTemporalConfigFromRealmSettings
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRealmSettings              RealmSettings                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     RealmCards                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTemporalConfig             TemporalConfig                                                   (Parm, OutParm)
// class FString                      CallFunc_GetOptionalTargetPlayerStartTag_ReturnValue             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_Get_Realm_Cards_List_Realm_Card_ID_List                 (ReferenceParm)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ConvertTagContainerToStringArray_ReturnValue            (ConstParm, ReferenceParm)
// class ANWXGameStateBase*           CallFunc_GetNWXGameStateBase_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// struct FTemporalConfig             K2Node_MakeStruct_TemporalConfig                                 (None)

void UBP_PortalControllerComponent_C::CreateTemporalConfigFromRealmSettings(struct FRealmSettings& RealmSettings, TArray<struct FInventoryEntry>& RealmCards, struct FTemporalConfig* TemporalConfig, const class FString& CallFunc_GetOptionalTargetPlayerStartTag_ReturnValue, TArray<struct FGuid>& CallFunc_Get_Realm_Cards_List_Realm_Card_ID_List, int32 CallFunc_Conv_ByteToInt_ReturnValue, TArray<class FString>& CallFunc_ConvertTagContainerToStringArray_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const struct FTemporalConfig& K2Node_MakeStruct_TemporalConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "CreateTemporalConfigFromRealmSettings");

	Params::UBP_PortalControllerComponent_C_CreateTemporalConfigFromRealmSettings_Params Parms{};

	Parms.RealmSettings = RealmSettings;
	Parms.RealmCards = RealmCards;
	Parms.CallFunc_GetOptionalTargetPlayerStartTag_ReturnValue = CallFunc_GetOptionalTargetPlayerStartTag_ReturnValue;
	Parms.CallFunc_Get_Realm_Cards_List_Realm_Card_ID_List = CallFunc_Get_Realm_Cards_List_Realm_Card_ID_List;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_ConvertTagContainerToStringArray_ReturnValue = CallFunc_ConvertTagContainerToStringArray_ReturnValue;
	Parms.CallFunc_GetNWXGameStateBase_ReturnValue = CallFunc_GetNWXGameStateBase_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.K2Node_MakeStruct_TemporalConfig = K2Node_MakeStruct_TemporalConfig;

	UObject::ProcessEvent(Func, &Parms);

	if (TemporalConfig != nullptr)
		*TemporalConfig = std::move(Parms.TemporalConfig);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.AddVaultTag
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PortalControllerComponent_C::AddVaultTag(struct FGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "AddVaultTag");

	Params::UBP_PortalControllerComponent_C_AddVaultTag_Params Parms{};

	Parms.TagContainer = TagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.Get Realm Cards List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Used_Realm_Cards                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FGuid>               Realm_Card_ID_List                                               (Parm, OutParm)
// TArray<struct FItemDataReference>  LRealmCardDataReferences                                         (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_SetRealmCardIDArray_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::Get_Realm_Cards_List(TArray<struct FInventoryEntry>& Used_Realm_Cards, TArray<struct FGuid>* Realm_Card_ID_List, const TArray<struct FItemDataReference>& LRealmCardDataReferences, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGuid>& CallFunc_SetRealmCardIDArray_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "Get Realm Cards List");

	Params::UBP_PortalControllerComponent_C_Get_Realm_Cards_List_Params Parms{};

	Parms.Used_Realm_Cards = Used_Realm_Cards;
	Parms.LRealmCardDataReferences = LRealmCardDataReferences;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetRealmCardIDArray_ReturnValue = CallFunc_SetRealmCardIDArray_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Realm_Card_ID_List != nullptr)
		*Realm_Card_ID_List = std::move(Parms.Realm_Card_ID_List);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.ShouldUseOpenRealm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPublicRealm                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFeatureFlagEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::ShouldUseOpenRealm(bool bPublicRealm, bool* Result, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "ShouldUseOpenRealm");

	Params::UBP_PortalControllerComponent_C_ShouldUseOpenRealm_Params Parms{};

	Parms.bPublicRealm = bPublicRealm;
	Parms.CallFunc_IsFeatureFlagEnabled_ReturnValue = CallFunc_IsFeatureFlagEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.GetRealmSettingsFromCards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     CardEntries                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsValidCardSet                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              RealmSettings                                                    (Parm, OutParm)
// TArray<struct FItemData>           CardItemData                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmSettingsFromRealmCards_IsValidCardSet           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              CallFunc_GetRealmSettingsFromRealmCards_ReturnValue              (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::GetRealmSettingsFromCards(TArray<struct FInventoryEntry>& CardEntries, bool* IsValidCardSet, struct FRealmSettings* RealmSettings, const TArray<struct FItemData>& CardItemData, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetRealmSettingsFromRealmCards_IsValidCardSet, const struct FRealmSettings& CallFunc_GetRealmSettingsFromRealmCards_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "GetRealmSettingsFromCards");

	Params::UBP_PortalControllerComponent_C_GetRealmSettingsFromCards_Params Parms{};

	Parms.CardEntries = CardEntries;
	Parms.CardItemData = CardItemData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetRealmSettingsFromRealmCards_IsValidCardSet = CallFunc_GetRealmSettingsFromRealmCards_IsValidCardSet;
	Parms.CallFunc_GetRealmSettingsFromRealmCards_ReturnValue = CallFunc_GetRealmSettingsFromRealmCards_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidCardSet != nullptr)
		*IsValidCardSet = Parms.IsValidCardSet;

	if (RealmSettings != nullptr)
		*RealmSettings = std::move(Parms.RealmSettings);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.ShouldUseServerTravel
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Cards                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTutorialCard_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::ShouldUseServerTravel(TArray<struct FInventoryEntry>& Cards, bool* Result, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool CallFunc_HasTutorialCard_Result, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "ShouldUseServerTravel");

	Params::UBP_PortalControllerComponent_C_ShouldUseServerTravel_Params Parms{};

	Parms.Cards = Cards;
	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.CallFunc_HasTutorialCard_Result = CallFunc_HasTutorialCard_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.HasTutorialCard
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Cards                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_RealmCard         CallFunc_TryGetItemDataRealmCard_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataRealmCard_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetRealmCardAssetGameplayTags_ReturnValue               (ConstParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTutorialTags_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::HasTutorialCard(TArray<struct FInventoryEntry>& Cards, bool* Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_RealmCard& CallFunc_TryGetItemDataRealmCard_OutData, enum class EGetResult CallFunc_TryGetItemDataRealmCard_Branches, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FGameplayTagContainer& CallFunc_GetRealmCardAssetGameplayTags_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasTutorialTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "HasTutorialCard");

	Params::UBP_PortalControllerComponent_C_HasTutorialCard_Params Parms{};

	Parms.Cards = Cards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataRealmCard_OutData = CallFunc_TryGetItemDataRealmCard_OutData;
	Parms.CallFunc_TryGetItemDataRealmCard_Branches = CallFunc_TryGetItemDataRealmCard_Branches;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetRealmCardAssetGameplayTags_ReturnValue = CallFunc_GetRealmCardAssetGameplayTags_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasTutorialTags_ReturnValue = CallFunc_HasTutorialTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.Has DeploymentSet Card
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Cards                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItemDataRealmCardDeploymentSet_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::Has_DeploymentSet_Card(TArray<struct FInventoryEntry>& Cards, bool* Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasItemDataRealmCardDeploymentSet_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "Has DeploymentSet Card");

	Params::UBP_PortalControllerComponent_C_Has_DeploymentSet_Card_Params Parms{};

	Parms.Cards = Cards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasItemDataRealmCardDeploymentSet_ReturnValue = CallFunc_HasItemDataRealmCardDeploymentSet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.Has Address Card
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Cards                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_RealmCard         CallFunc_TryGetItemDataRealmCard_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataRealmCard_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmCardType          CallFunc_GetRealmCardAssetType_ReturnValue                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::Has_Address_Card(TArray<struct FInventoryEntry>& Cards, bool* Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_RealmCard& CallFunc_TryGetItemDataRealmCard_OutData, enum class EGetResult CallFunc_TryGetItemDataRealmCard_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ERealmCardType CallFunc_GetRealmCardAssetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "Has Address Card");

	Params::UBP_PortalControllerComponent_C_Has_Address_Card_Params Parms{};

	Parms.Cards = Cards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataRealmCard_OutData = CallFunc_TryGetItemDataRealmCard_OutData;
	Parms.CallFunc_TryGetItemDataRealmCard_Branches = CallFunc_TryGetItemDataRealmCard_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetRealmCardAssetType_ReturnValue = CallFunc_GetRealmCardAssetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.SetVFXActorState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETemporalPortalState    DeploymentPortalState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetPortalVisualsActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PortalArch_C>K2Node_DynamicCast_AsBPI_Portal_Arch                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::SetVFXActorState(enum class ETemporalPortalState DeploymentPortalState, class AActor* CallFunc_GetPortalVisualsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_PortalArch_C> K2Node_DynamicCast_AsBPI_Portal_Arch, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "SetVFXActorState");

	Params::UBP_PortalControllerComponent_C_SetVFXActorState_Params Parms{};

	Parms.DeploymentPortalState = DeploymentPortalState;
	Parms.CallFunc_GetPortalVisualsActor_ReturnValue = CallFunc_GetPortalVisualsActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Portal_Arch = K2Node_DynamicCast_AsBPI_Portal_Arch;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.Server_UnbindEventFrom_OnPortalCardsCommitted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Listener                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::Server_UnbindEventFrom_OnPortalCardsCommitted(FDelegateProperty_& Listener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "Server_UnbindEventFrom_OnPortalCardsCommitted");

	Params::UBP_PortalControllerComponent_C_Server_UnbindEventFrom_OnPortalCardsCommitted_Params Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.Server_BindEventTo_OnPortalCardsCommitted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Listener                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::Server_BindEventTo_OnPortalCardsCommitted(FDelegateProperty_& Listener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "Server_BindEventTo_OnPortalCardsCommitted");

	Params::UBP_PortalControllerComponent_C_Server_BindEventTo_OnPortalCardsCommitted_Params Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.ClosePortal
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanClosePortal_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeploymentPortal*           CallFunc_GetDeploymentPortal_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

bool UBP_PortalControllerComponent_C::ClosePortal(class APlayerController* PlayerController, bool CallFunc_GetCanClosePortal_ReturnValue, class ADeploymentPortal* CallFunc_GetDeploymentPortal_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "ClosePortal");

	Params::UBP_PortalControllerComponent_C_ClosePortal_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetCanClosePortal_ReturnValue = CallFunc_GetCanClosePortal_ReturnValue;
	Parms.CallFunc_GetDeploymentPortal_ReturnValue = CallFunc_GetDeploymentPortal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.OpenPortalToRealmVault
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_CharacterAppearanceComponent_C*AppearanceComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              RealmSettings                                                    (Edit, BlueprintVisible)
// class ADeploymentPortal*           DeploymentPortal                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        CallFunc_GetSelectedDifficulty_SelectedDifficulty                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ReferenceParm)
// class UBP_CharacterAppearanceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_NewGuid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_InfluenceToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FTemporalConfig             CallFunc_CreateTemporalConfigFromRealmSettings_TemporalConfig    (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanOpenPortal_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeploymentPortal*           CallFunc_GetDeploymentPortal_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentRealmSettings_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              CallFunc_GetCurrentRealmSettings_RealmSettings                   (None)
// class FString                      CallFunc_FindVaultMeetingRequirements_ReturnValue                (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PortalControllerComponent_C::OpenPortalToRealmVault(class APlayerController* PlayerController, class APlayerState* PlayerState, class UBP_CharacterAppearanceComponent_C* AppearanceComponent, const struct FRealmSettings& RealmSettings, class ADeploymentPortal* DeploymentPortal, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ERealmDifficulty CallFunc_GetSelectedDifficulty_SelectedDifficulty, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FGuid& CallFunc_NewGuid_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_InfluenceToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FTemporalConfig& CallFunc_CreateTemporalConfigFromRealmSettings_TemporalConfig, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_GetCanOpenPortal_ReturnValue, class ADeploymentPortal* CallFunc_GetDeploymentPortal_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GetCurrentRealmSettings_Success, const struct FRealmSettings& CallFunc_GetCurrentRealmSettings_RealmSettings, const class FString& CallFunc_FindVaultMeetingRequirements_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_2, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "OpenPortalToRealmVault");

	Params::UBP_PortalControllerComponent_C_OpenPortalToRealmVault_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.PlayerState = PlayerState;
	Parms.AppearanceComponent = AppearanceComponent;
	Parms.RealmSettings = RealmSettings;
	Parms.DeploymentPortal = DeploymentPortal;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSelectedDifficulty_SelectedDifficulty = CallFunc_GetSelectedDifficulty_SelectedDifficulty;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_NewGuid_ReturnValue = CallFunc_NewGuid_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_InfluenceToString_ReturnValue = CallFunc_InfluenceToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_CreateTemporalConfigFromRealmSettings_TemporalConfig = CallFunc_CreateTemporalConfigFromRealmSettings_TemporalConfig;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetCanOpenPortal_ReturnValue = CallFunc_GetCanOpenPortal_ReturnValue;
	Parms.CallFunc_GetDeploymentPortal_ReturnValue = CallFunc_GetDeploymentPortal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetCurrentRealmSettings_Success = CallFunc_GetCurrentRealmSettings_Success;
	Parms.CallFunc_GetCurrentRealmSettings_RealmSettings = CallFunc_GetCurrentRealmSettings_RealmSettings;
	Parms.CallFunc_FindVaultMeetingRequirements_ReturnValue = CallFunc_FindVaultMeetingRequirements_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.OpenPortalWithCards
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmCardMachineComponent*  RealmCardMachineComponent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     Cards                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bPublicRealm                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFreshRealm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasSavedRealm                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IServerKeyProvider>KeyProvider                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URealmDeploymentSystemComponent*RealmDeploymentSystemComponent                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_CharacterAppearanceComponent_C*AppearanceComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ADeploymentPortal*           DeploymentPortal                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              RealmSettings                                                    (Edit, BlueprintVisible)
// enum class ERealmDifficulty        CallFunc_GetSelectedDifficulty_SelectedDifficulty                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextRealmPower_NextRealmPower                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterAppearanceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSavedRealmWithTags_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetID_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// enum class ERealmDifficulty        CallFunc_GetSelectedDifficulty_SelectedDifficulty_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldUseOpenRealm_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDestinationDeploymentSetDynamic_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmSettingsFromCards_IsValidCardSet                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRealmSettings              CallFunc_GetRealmSettingsFromCards_RealmSettings                 (None)
// bool                               CallFunc_ShouldUseServerTravel_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_NewGuid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_VerifyPlayerRealmCards_IsValid                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_VerifyPlayerRealmCards_Error                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_DeploymentSet_Card_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_Address_Card_Result                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanOpenPortal_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeploymentPortal*           CallFunc_GetDeploymentPortal_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UServerKeyProviderUsingRealmTags*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_RealmCardDeploymentSetCallFunc_TryGetItemDataRealmCardDeploymentSet_OutData            (None)
// enum class EGetResult              CallFunc_TryGetItemDataRealmCardDeploymentSet_Branches           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TryGetProfileFromRespiteAddressCard_Profile             (ZeroConstructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGetProfileFromRespiteAddressCard_Branches            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TryGetNameFromNamedAddressCard_Name                     (ZeroConstructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGetNameFromNamedAddressCard_Branches                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDestinationDeploymentSet_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TryGetDeploymentFromNPCAddressCard_Deployment           (ZeroConstructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGetDeploymentFromNPCAddressCard_Branches             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDestinationAndRestart_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_FindMapsMeetingRequirements_ReturnValue                 (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_InfluenceToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FTemporalConfig             CallFunc_CreateTemporalConfigFromRealmSettings_TemporalConfig    (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

bool UBP_PortalControllerComponent_C::OpenPortalWithCards(class APlayerController* PlayerController, class URealmCardMachineComponent* RealmCardMachineComponent, TArray<struct FInventoryEntry>& Cards, bool bPublicRealm, bool bFreshRealm, bool HasSavedRealm, TScriptInterface<class IServerKeyProvider> KeyProvider, class URealmDeploymentSystemComponent* RealmDeploymentSystemComponent, class APlayerState* PlayerState, class UBP_CharacterAppearanceComponent_C* AppearanceComponent, class ADeploymentPortal* DeploymentPortal, const struct FRealmSettings& RealmSettings, enum class ERealmDifficulty CallFunc_GetSelectedDifficulty_SelectedDifficulty, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetNextRealmPower_NextRealmPower, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasSavedRealmWithTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_GetID_ReturnValue, enum class ERealmDifficulty CallFunc_GetSelectedDifficulty_SelectedDifficulty_1, bool CallFunc_ShouldUseOpenRealm_Result, bool CallFunc_SetDestinationDeploymentSetDynamic_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetRealmSettingsFromCards_IsValidCardSet, const struct FRealmSettings& CallFunc_GetRealmSettingsFromCards_RealmSettings, bool CallFunc_ShouldUseServerTravel_Result, const struct FGuid& CallFunc_NewGuid_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, bool CallFunc_VerifyPlayerRealmCards_IsValid, const class FString& CallFunc_VerifyPlayerRealmCards_Error, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Has_DeploymentSet_Card_Result, bool CallFunc_Has_Address_Card_Result, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_GetCanOpenPortal_ReturnValue, class ADeploymentPortal* CallFunc_GetDeploymentPortal_ReturnValue, class UServerKeyProviderUsingRealmTags* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_RealmCardDeploymentSet& CallFunc_TryGetItemDataRealmCardDeploymentSet_OutData, enum class EGetResult CallFunc_TryGetItemDataRealmCardDeploymentSet_Branches, const class FString& CallFunc_TryGetProfileFromRespiteAddressCard_Profile, enum class EGetResult CallFunc_TryGetProfileFromRespiteAddressCard_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const class FString& CallFunc_TryGetNameFromNamedAddressCard_Name, enum class EGetResult CallFunc_TryGetNameFromNamedAddressCard_Branches, bool CallFunc_SetDestinationDeploymentSet_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, const class FString& CallFunc_TryGetDeploymentFromNPCAddressCard_Deployment, enum class EGetResult CallFunc_TryGetDeploymentFromNPCAddressCard_Branches, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_SetDestinationAndRestart_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_FindMapsMeetingRequirements_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, const class FString& CallFunc_InfluenceToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FTemporalConfig& CallFunc_CreateTemporalConfigFromRealmSettings_TemporalConfig, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "OpenPortalWithCards");

	Params::UBP_PortalControllerComponent_C_OpenPortalWithCards_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.RealmCardMachineComponent = RealmCardMachineComponent;
	Parms.Cards = Cards;
	Parms.bPublicRealm = bPublicRealm;
	Parms.bFreshRealm = bFreshRealm;
	Parms.HasSavedRealm = HasSavedRealm;
	Parms.KeyProvider = KeyProvider;
	Parms.RealmDeploymentSystemComponent = RealmDeploymentSystemComponent;
	Parms.PlayerState = PlayerState;
	Parms.AppearanceComponent = AppearanceComponent;
	Parms.DeploymentPortal = DeploymentPortal;
	Parms.RealmSettings = RealmSettings;
	Parms.CallFunc_GetSelectedDifficulty_SelectedDifficulty = CallFunc_GetSelectedDifficulty_SelectedDifficulty;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetNextRealmPower_NextRealmPower = CallFunc_GetNextRealmPower_NextRealmPower;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_HasSavedRealmWithTags_ReturnValue = CallFunc_HasSavedRealmWithTags_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_GetSelectedDifficulty_SelectedDifficulty_1 = CallFunc_GetSelectedDifficulty_SelectedDifficulty_1;
	Parms.CallFunc_ShouldUseOpenRealm_Result = CallFunc_ShouldUseOpenRealm_Result;
	Parms.CallFunc_SetDestinationDeploymentSetDynamic_ReturnValue = CallFunc_SetDestinationDeploymentSetDynamic_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetRealmSettingsFromCards_IsValidCardSet = CallFunc_GetRealmSettingsFromCards_IsValidCardSet;
	Parms.CallFunc_GetRealmSettingsFromCards_RealmSettings = CallFunc_GetRealmSettingsFromCards_RealmSettings;
	Parms.CallFunc_ShouldUseServerTravel_Result = CallFunc_ShouldUseServerTravel_Result;
	Parms.CallFunc_NewGuid_ReturnValue = CallFunc_NewGuid_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_VerifyPlayerRealmCards_IsValid = CallFunc_VerifyPlayerRealmCards_IsValid;
	Parms.CallFunc_VerifyPlayerRealmCards_Error = CallFunc_VerifyPlayerRealmCards_Error;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Has_DeploymentSet_Card_Result = CallFunc_Has_DeploymentSet_Card_Result;
	Parms.CallFunc_Has_Address_Card_Result = CallFunc_Has_Address_Card_Result;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetCanOpenPortal_ReturnValue = CallFunc_GetCanOpenPortal_ReturnValue;
	Parms.CallFunc_GetDeploymentPortal_ReturnValue = CallFunc_GetDeploymentPortal_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataRealmCardDeploymentSet_OutData = CallFunc_TryGetItemDataRealmCardDeploymentSet_OutData;
	Parms.CallFunc_TryGetItemDataRealmCardDeploymentSet_Branches = CallFunc_TryGetItemDataRealmCardDeploymentSet_Branches;
	Parms.CallFunc_TryGetProfileFromRespiteAddressCard_Profile = CallFunc_TryGetProfileFromRespiteAddressCard_Profile;
	Parms.CallFunc_TryGetProfileFromRespiteAddressCard_Branches = CallFunc_TryGetProfileFromRespiteAddressCard_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_TryGetNameFromNamedAddressCard_Name = CallFunc_TryGetNameFromNamedAddressCard_Name;
	Parms.CallFunc_TryGetNameFromNamedAddressCard_Branches = CallFunc_TryGetNameFromNamedAddressCard_Branches;
	Parms.CallFunc_SetDestinationDeploymentSet_ReturnValue = CallFunc_SetDestinationDeploymentSet_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_TryGetDeploymentFromNPCAddressCard_Deployment = CallFunc_TryGetDeploymentFromNPCAddressCard_Deployment;
	Parms.CallFunc_TryGetDeploymentFromNPCAddressCard_Branches = CallFunc_TryGetDeploymentFromNPCAddressCard_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_SetDestinationAndRestart_ReturnValue = CallFunc_SetDestinationAndRestart_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_FindMapsMeetingRequirements_ReturnValue = CallFunc_FindMapsMeetingRequirements_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_InfluenceToString_ReturnValue = CallFunc_InfluenceToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_CreateTemporalConfigFromRealmSettings_TemporalConfig = CallFunc_CreateTemporalConfigFromRealmSettings_TemporalConfig;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.VerifyPlayerRealmCards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URealmCardMachineComponent*  RealmCardMachineComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     Cards                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               PublicRealm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Error                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>TableContainer                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetTableContainer_ReturnValue                           (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_RealmCard         CallFunc_TryGetItemDataRealmCard_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataRealmCard_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetRealmCardAssetGameplayTags_ReturnValue               (ConstParm)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::VerifyPlayerRealmCards(class URealmCardMachineComponent* RealmCardMachineComponent, TArray<struct FInventoryEntry>& Cards, bool PublicRealm, bool* IsValid, class FString* Error, TScriptInterface<class IItemContainer> TableContainer, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UInWorldItemContainerComponent* CallFunc_GetTableContainer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_RealmCard& CallFunc_TryGetItemDataRealmCard_OutData, enum class EGetResult CallFunc_TryGetItemDataRealmCard_Branches, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FGameplayTagContainer& CallFunc_GetRealmCardAssetGameplayTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "VerifyPlayerRealmCards");

	Params::UBP_PortalControllerComponent_C_VerifyPlayerRealmCards_Params Parms{};

	Parms.RealmCardMachineComponent = RealmCardMachineComponent;
	Parms.Cards = Cards;
	Parms.PublicRealm = PublicRealm;
	Parms.TableContainer = TableContainer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetTableContainer_ReturnValue = CallFunc_GetTableContainer_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataRealmCard_OutData = CallFunc_TryGetItemDataRealmCard_OutData;
	Parms.CallFunc_TryGetItemDataRealmCard_Branches = CallFunc_TryGetItemDataRealmCard_Branches;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetRealmCardAssetGameplayTags_ReturnValue = CallFunc_GetRealmCardAssetGameplayTags_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (Error != nullptr)
		*Error = std::move(Parms.Error);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.OnPortalStateChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETemporalPortalState    State                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeploymentPortal*           DeploymentPortal                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PortalControllerComponent_C::OnPortalStateChanged(enum class ETemporalPortalState State, class ADeploymentPortal* DeploymentPortal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "OnPortalStateChanged");

	Params::UBP_PortalControllerComponent_C_OnPortalStateChanged_Params Parms{};

	Parms.State = State;
	Parms.DeploymentPortal = DeploymentPortal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PortalControllerComponent.BP_PortalControllerComponent_C.OnPortalCardsCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTemporalConfig             Temporal_Realm_Configuration                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PortalControllerComponent_C::OnPortalCardsCommitted__DelegateSignature(const struct FTemporalConfig& Temporal_Realm_Configuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PortalControllerComponent_C", "OnPortalCardsCommitted__DelegateSignature");

	Params::UBP_PortalControllerComponent_C_OnPortalCardsCommitted__DelegateSignature_Params Parms{};

	Parms.Temporal_Realm_Configuration = Temporal_Realm_Configuration;

	UObject::ProcessEvent(Func, &Parms);

}

}


