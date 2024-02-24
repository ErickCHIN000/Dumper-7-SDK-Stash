#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CGFunctions.CGFunctions_C
// (None)

class UClass* UCGFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CGFunctions_C");

	return Clss;
}


// CGFunctions_C CGFunctions.Default__CGFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCGFunctions_C* UCGFunctions_C::GetDefaultObj()
{
	static class UCGFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCGFunctions_C*>(UCGFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CGFunctions.CGFunctions_C.IsGlobalSkinEnabled
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         Skin                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGlobalSkinInfo             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_GetEnabledGlobalSkin_OutSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGlobalSkinInfo             CallFunc_K2_GetEnabledGlobalSkin_ReturnValue                     (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCGFunctions_C::IsGlobalSkinEnabled(const struct FDataTableRowHandle& Skin, class UObject* __WorldContext, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FGlobalSkinInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_K2_GetEnabledGlobalSkin_OutSuccess, const struct FGlobalSkinInfo& CallFunc_K2_GetEnabledGlobalSkin_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "IsGlobalSkinEnabled");

	Params::UCGFunctions_C_IsGlobalSkinEnabled_Params Parms{};

	Parms.Skin = Skin;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_K2_GetEnabledGlobalSkin_OutSuccess = CallFunc_K2_GetEnabledGlobalSkin_OutSuccess;
	Parms.CallFunc_K2_GetEnabledGlobalSkin_ReturnValue = CallFunc_K2_GetEnabledGlobalSkin_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGFunctions.CGFunctions_C.GetRandomUpgrades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                RandomUpgrades                                                   (Parm, OutParm)
// class UDataTable*                  Table                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                DiscoveredUpgrades                                               (Edit, BlueprintVisible)
// TArray<class FName>                ChosenUpgradeCategories                                          (Edit, BlueprintVisible)
// class FName                        RandomUpgrade                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RandomUpgradeIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                ChosenUpgrades                                                   (Edit, BlueprintVisible)
// TArray<class FName>                AvailableUpgrdes                                                 (Edit, BlueprintVisible)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetAvailableUpgrades_ReturnValue                        (ReferenceParm)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUpgradeEntry               CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetRandomUpgrades(int32 Amount, class FName ItemId, class UObject* __WorldContext, TArray<class FName>* RandomUpgrades, class UDataTable* Table, const TArray<class FName>& DiscoveredUpgrades, const TArray<class FName>& ChosenUpgradeCategories, class FName RandomUpgrade, int32 RandomUpgradeIndex, const TArray<class FName>& ChosenUpgrades, const TArray<class FName>& AvailableUpgrdes, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UDataTable* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FName>& CallFunc_GetAvailableUpgrades_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FUpgradeEntry& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array_1, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetRandomUpgrades");

	Params::UCGFunctions_C_GetRandomUpgrades_Params Parms{};

	Parms.Amount = Amount;
	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.Table = Table;
	Parms.DiscoveredUpgrades = DiscoveredUpgrades;
	Parms.ChosenUpgradeCategories = ChosenUpgradeCategories;
	Parms.RandomUpgrade = RandomUpgrade;
	Parms.RandomUpgradeIndex = RandomUpgradeIndex;
	Parms.ChosenUpgrades = ChosenUpgrades;
	Parms.AvailableUpgrdes = AvailableUpgrdes;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetAvailableUpgrades_ReturnValue = CallFunc_GetAvailableUpgrades_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RandomUpgrades != nullptr)
		*RandomUpgrades = std::move(Parms.RandomUpgrades);

}


// Function CGFunctions.CGFunctions_C.GetConsoleImageRenderScale
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   RenderScale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::GetConsoleImageRenderScale(class UObject* __WorldContext, struct FVector2D* RenderScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetConsoleImageRenderScale");

	Params::UCGFunctions_C_GetConsoleImageRenderScale_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (RenderScale != nullptr)
		*RenderScale = std::move(Parms.RenderScale);

}


// Function CGFunctions.CGFunctions_C.CreateDialogueCompanionStatusPayload
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogueComponent*          DialogueComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogueComponentPayload*   CallFunc_GetPayloadByClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogueCompanionStatusPayload*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UDialogueCompanionStatusPayload*K2Node_DynamicCast_AsDialogue_Companion_Status_Payload           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::CreateDialogueCompanionStatusPayload(class UDialogueComponent* DialogueComponent, class FName CompanionID, class UObject* __WorldContext, class UDialogueComponentPayload* CallFunc_GetPayloadByClass_ReturnValue, class UDialogueCompanionStatusPayload* CallFunc_SpawnObject_ReturnValue, class UDialogueCompanionStatusPayload* K2Node_DynamicCast_AsDialogue_Companion_Status_Payload, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "CreateDialogueCompanionStatusPayload");

	Params::UCGFunctions_C_CreateDialogueCompanionStatusPayload_Params Parms{};

	Parms.DialogueComponent = DialogueComponent;
	Parms.CompanionID = CompanionID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPayloadByClass_ReturnValue = CallFunc_GetPayloadByClass_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsDialogue_Companion_Status_Payload = K2Node_DynamicCast_AsDialogue_Companion_Status_Payload;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.CreateDialogueTimelinePayload
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogueComponent*          DialogueComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogueTimelinePayloadDataPayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogueTimelinePayload*    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::CreateDialogueTimelinePayload(class UDialogueComponent* DialogueComponent, const struct FDialogueTimelinePayloadData& Payload, class UObject* __WorldContext, class UDialogueTimelinePayload* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "CreateDialogueTimelinePayload");

	Params::UCGFunctions_C_CreateDialogueTimelinePayload_Params Parms{};

	Parms.DialogueComponent = DialogueComponent;
	Parms.Payload = Payload;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetCurrentPersistentLevelEnum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_GetMapEnumByName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EEventMap UCGFunctions_C::GetCurrentPersistentLevelEnum(class UObject* Object, class UObject* __WorldContext, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, class UCustomGameInstance* CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCurrentPersistentLevelEnum");

	Params::UCGFunctions_C_GetCurrentPersistentLevelEnum_Params Parms{};

	Parms.Object = Object;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance = CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance;
	Parms.CallFunc_GetMapEnumByName_ReturnValue = CallFunc_GetMapEnumByName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGFunctions.CGFunctions_C.Get Is Console Platform
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsConsole                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCustomGameInstance*         CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::Get_Is_Console_Platform(class UObject* __WorldContext, bool* IsConsole, class UCustomGameInstance* CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "Get Is Console Platform");

	Params::UCGFunctions_C_Get_Is_Console_Platform_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance = CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsConsole != nullptr)
		*IsConsole = Parms.IsConsole;

}


// Function CGFunctions.CGFunctions_C.GetScalabilityClamp
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EScalabilityType        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   Global_Clamp                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   Advanced_Clamp                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScalabilityClampInfo       CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetScalabilityClamp(enum class EScalabilityType Type, class UObject* __WorldContext, struct FIntPoint* Global_Clamp, struct FIntPoint* Advanced_Clamp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FScalabilityClampInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetScalabilityClamp");

	Params::UCGFunctions_C_GetScalabilityClamp_Params Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Global_Clamp != nullptr)
		*Global_Clamp = std::move(Parms.Global_Clamp);

	if (Advanced_Clamp != nullptr)
		*Advanced_Clamp = std::move(Parms.Advanced_Clamp);

}


// Function CGFunctions.CGFunctions_C.GetFirstItemInInventory
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (Parm, OutParm)
// TArray<struct FInventoryEntry>     Items                                                            (Edit, BlueprintVisible)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItems_ReturnValue                                    (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetFirstItemInInventory(class FName ID, class UObject* __WorldContext, struct FInventoryEntry* Item, const TArray<struct FInventoryEntry>& Items, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, int32 Temp_int_Array_Index_Variable, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetFirstItemInInventory");

	Params::UCGFunctions_C_GetFirstItemInInventory_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;
	Parms.Items = Items;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);

}


// Function CGFunctions.CGFunctions_C.ValidateGasMask
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetIsWearingGasMask_WearingGasMask                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGActiveItem>   Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGActiveItem>   K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               CallFunc_FindActiveItemInInventory_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_aa_Gasmask_00_C*         K2Node_DynamicCast_AsBa_Aa_Gasmask_00                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::ValidateGasMask(class UObject* __WorldContext, bool Temp_bool_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, TSubclassOf<class ACGActiveItem> Temp_class_Variable, bool CallFunc_GetIsWearingGasMask_WearingGasMask, TSubclassOf<class ACGActiveItem> Temp_class_Variable_1, bool Temp_bool_Variable_1, TSubclassOf<class ACGActiveItem> K2Node_Select_Default, class FName Temp_name_Variable, class ACGActiveItem* CallFunc_FindActiveItemInInventory_ReturnValue, class Aba_aa_Gasmask_00_C* K2Node_DynamicCast_AsBa_Aa_Gasmask_00, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable_1, class FName K2Node_Select_Default_1, float CallFunc_Count_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "ValidateGasMask");

	Params::UCGFunctions_C_ValidateGasMask_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetIsWearingGasMask_WearingGasMask = CallFunc_GetIsWearingGasMask_WearingGasMask;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_FindActiveItemInInventory_ReturnValue = CallFunc_FindActiveItemInInventory_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Aa_Gasmask_00 = K2Node_DynamicCast_AsBa_Aa_Gasmask_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetXboxButtonIcon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Buttons_X1         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_2                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_3                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_4                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_5                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_6                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_7                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_8                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_9                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_10                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_11                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_12                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_13                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_14                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_15                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_16                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_17                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (HasGetValueTypeHash)

void UCGFunctions_C::GetXboxButtonIcon(enum class Enum_Buttons_X1 Type, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Icon, enum class Enum_Buttons_X1 Temp_byte_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_3, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_4, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_5, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_6, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_7, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_8, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_9, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_10, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_11, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_12, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_13, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_14, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_15, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_16, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_17, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetXboxButtonIcon");

	Params::UCGFunctions_C_GetXboxButtonIcon_Params Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.Temp_softobject_Variable_3 = Temp_softobject_Variable_3;
	Parms.Temp_softobject_Variable_4 = Temp_softobject_Variable_4;
	Parms.Temp_softobject_Variable_5 = Temp_softobject_Variable_5;
	Parms.Temp_softobject_Variable_6 = Temp_softobject_Variable_6;
	Parms.Temp_softobject_Variable_7 = Temp_softobject_Variable_7;
	Parms.Temp_softobject_Variable_8 = Temp_softobject_Variable_8;
	Parms.Temp_softobject_Variable_9 = Temp_softobject_Variable_9;
	Parms.Temp_softobject_Variable_10 = Temp_softobject_Variable_10;
	Parms.Temp_softobject_Variable_11 = Temp_softobject_Variable_11;
	Parms.Temp_softobject_Variable_12 = Temp_softobject_Variable_12;
	Parms.Temp_softobject_Variable_13 = Temp_softobject_Variable_13;
	Parms.Temp_softobject_Variable_14 = Temp_softobject_Variable_14;
	Parms.Temp_softobject_Variable_15 = Temp_softobject_Variable_15;
	Parms.Temp_softobject_Variable_16 = Temp_softobject_Variable_16;
	Parms.Temp_softobject_Variable_17 = Temp_softobject_Variable_17;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function CGFunctions.CGFunctions_C.GetKeyDisplayNameEnglish
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        English_Display_Name                                             (Parm, OutParm)
// class FName                        CallFunc_GetKeyName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// struct FKeyNameInfo                CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UCGFunctions_C::GetKeyDisplayNameEnglish(const struct FKey& Key, class UObject* __WorldContext, class FText* English_Display_Name, class FName CallFunc_GetKeyName_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, const struct FKeyNameInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetKeyDisplayNameEnglish");

	Params::UCGFunctions_C_GetKeyDisplayNameEnglish_Params Parms{};

	Parms.Key = Key;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetKeyName_ReturnValue = CallFunc_GetKeyName_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (English_Display_Name != nullptr)
		*English_Display_Name = Parms.English_Display_Name;

}


// Function CGFunctions.CGFunctions_C.WasMissionSuccessfull
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FMissionReportRequiredInformationMissionReportRequiredInformation                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Igor                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestInfoInput             CallFunc_GetQuestInfoBP_ReturnValue                              (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCGFunctions_C::WasMissionSuccessfull(struct FMissionReportRequiredInformation& MissionReportRequiredInformation, bool Igor, class UObject* __WorldContext, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, bool CallFunc_Contains_ReturnValue, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "WasMissionSuccessfull");

	Params::UCGFunctions_C_WasMissionSuccessfull_Params Parms{};

	Parms.MissionReportRequiredInformation = MissionReportRequiredInformation;
	Parms.Igor = Igor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetQuestInfoBP_ReturnValue = CallFunc_GetQuestInfoBP_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGFunctions.CGFunctions_C.Validate Armor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArmorEquipped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FArmorInfo                  CallFunc_GetEquippedArmorInfo_ReturnValue                        (ConstParm)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   K2Node_ClassDynamicCast_AsCGActive_Item                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGActiveItem*               CallFunc_FindActiveItemInInventory_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_aa_Armor_Template_C*     K2Node_DynamicCast_AsBa_Aa_Armor_Template                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::Validate_Armor(class UObject* __WorldContext, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_IsArmorEquipped_ReturnValue, const struct FArmorInfo& CallFunc_GetEquippedArmorInfo_ReturnValue, float CallFunc_Count_ReturnValue, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item, bool K2Node_ClassDynamicCast_bSuccess, class ACGActiveItem* CallFunc_FindActiveItemInInventory_ReturnValue, class Aba_aa_Armor_Template_C* K2Node_DynamicCast_AsBa_Aa_Armor_Template, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "Validate Armor");

	Params::UCGFunctions_C_Validate_Armor_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_IsArmorEquipped_ReturnValue = CallFunc_IsArmorEquipped_ReturnValue;
	Parms.CallFunc_GetEquippedArmorInfo_ReturnValue = CallFunc_GetEquippedArmorInfo_ReturnValue;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsCGActive_Item = K2Node_ClassDynamicCast_AsCGActive_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_FindActiveItemInInventory_ReturnValue = CallFunc_FindActiveItemInInventory_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Aa_Armor_Template = K2Node_DynamicCast_AsBa_Aa_Armor_Template;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.IsItemEquipped
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_2            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsWearingGasMask_WearingGasMask                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetEquippedArmorName_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_3            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetInternalItemId_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   K2Node_ClassDynamicCast_AsCGActive_Item                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGActiveItem>   K2Node_ClassDynamicCast_AsCGActive_Item_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGActiveItem*               CallFunc_FindActiveItemInInventory_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_GetItemAtOrFirst_ReturnValue                            (None)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetInternalItemId_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGActiveItem>   Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class ACGActiveItem>   Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGActiveItem>   K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACGActiveItem*               CallFunc_FindActiveItemInInventory_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItemAtOrFirst_ReturnValue_1                          (None)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::IsItemEquipped(const struct FInventoryEntry& Entry, class UObject* __WorldContext, bool* Result, class FName Temp_name_Variable, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool CallFunc_GetIsWearingGasMask_WearingGasMask, class FName CallFunc_GetEquippedArmorName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_3, bool CallFunc_NotEqual_IntInt_ReturnValue, class FName CallFunc_GetInternalItemId_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item_1, bool K2Node_ClassDynamicCast_bSuccess_1, class ACGActiveItem* CallFunc_FindActiveItemInInventory_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const struct FInventoryEntry& CallFunc_GetItemAtOrFirst_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, class FName Temp_name_Variable_1, bool Temp_bool_Variable, class FName CallFunc_GetInternalItemId_ReturnValue_1, class FName K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, TSubclassOf<class ACGActiveItem> Temp_class_Variable, TSubclassOf<class ACGActiveItem> Temp_class_Variable_1, bool Temp_bool_Variable_1, TSubclassOf<class ACGActiveItem> K2Node_Select_Default_1, class ACGActiveItem* CallFunc_FindActiveItemInInventory_ReturnValue_1, const struct FInventoryEntry& CallFunc_GetItemAtOrFirst_ReturnValue_1, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "IsItemEquipped");

	Params::UCGFunctions_C_IsItemEquipped_Params Parms{};

	Parms.Entry = Entry;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_1 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_2 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetIsWearingGasMask_WearingGasMask = CallFunc_GetIsWearingGasMask_WearingGasMask;
	Parms.CallFunc_GetEquippedArmorName_ReturnValue = CallFunc_GetEquippedArmorName_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_3 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_3;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetInternalItemId_ReturnValue = CallFunc_GetInternalItemId_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsCGActive_Item = K2Node_ClassDynamicCast_AsCGActive_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsCGActive_Item_1 = K2Node_ClassDynamicCast_AsCGActive_Item_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_FindActiveItemInInventory_ReturnValue = CallFunc_FindActiveItemInInventory_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetItemAtOrFirst_ReturnValue = CallFunc_GetItemAtOrFirst_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetInternalItemId_ReturnValue_1 = CallFunc_GetInternalItemId_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_4 = CallFunc_EqualEqual_NameName_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_FindActiveItemInInventory_ReturnValue_1 = CallFunc_FindActiveItemInInventory_ReturnValue_1;
	Parms.CallFunc_GetItemAtOrFirst_ReturnValue_1 = CallFunc_GetItemAtOrFirst_ReturnValue_1;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1 = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CGFunctions.CGFunctions_C.PrintWithCurrentTime
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UCGFunctions_C::PrintWithCurrentTime(const class FString& Text, class UObject* __WorldContext, float CallFunc_GetRealTimeSeconds_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "PrintWithCurrentTime");

	Params::UCGFunctions_C_PrintWithCurrentTime_Params Parms{};

	Parms.Text = Text;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetAITimerWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_AITimer_C*              AITimer                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::GetAITimerWidget(class UObject* __WorldContext, class UWid_AITimer_C** AITimer, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetAITimerWidget");

	Params::UCGFunctions_C_GetAITimerWidget_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (AITimer != nullptr)
		*AITimer = Parms.AITimer;

}


// Function CGFunctions.CGFunctions_C.ReplaceKeyWithText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<class FString, class FText>   KeyTextMap                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewText                                                          (Parm, OutParm)
// class FString                      ModifiedText                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::ReplaceKeyWithText(class FText Text, TMap<class FString, class FText> KeyTextMap, class UObject* __WorldContext, class FText* NewText, const class FString& ModifiedText, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_ReplaceInline_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "ReplaceKeyWithText");

	Params::UCGFunctions_C_ReplaceKeyWithText_Params Parms{};

	Parms.Text = Text;
	Parms.KeyTextMap = KeyTextMap;
	Parms.__WorldContext = __WorldContext;
	Parms.ModifiedText = ModifiedText;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewText != nullptr)
		*NewText = Parms.NewText;

}


// Function CGFunctions.CGFunctions_C.GetCGGameInstanceParent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomGameInstance*         AsCustom_Game_Instance                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomGameInstance*         K2Node_DynamicCast_AsCustom_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetCGGameInstanceParent(class UObject* __WorldContext, class UCustomGameInstance** AsCustom_Game_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UCustomGameInstance* K2Node_DynamicCast_AsCustom_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCGGameInstanceParent");

	Params::UCGFunctions_C_GetCGGameInstanceParent_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustom_Game_Instance = K2Node_DynamicCast_AsCustom_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsCustom_Game_Instance != nullptr)
		*AsCustom_Game_Instance = Parms.AsCustom_Game_Instance;

}


// Function CGFunctions.CGFunctions_C.Get PS4Button Icon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Buttons_PS4        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_2                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_3                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_4                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_5                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_6                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_7                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_8                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_9                                       (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_10                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_11                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_12                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_13                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_14                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_15                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_16                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_17                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_18                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_19                                      (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (HasGetValueTypeHash)

void UCGFunctions_C::Get_PS4Button_Icon(enum class Enum_Buttons_PS4 Type, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Icon, enum class Enum_Buttons_PS4 Temp_byte_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_3, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_4, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_5, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_6, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_7, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_8, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_9, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_10, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_11, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_12, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_13, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_14, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_15, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_16, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_17, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_18, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_19, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "Get PS4Button Icon");

	Params::UCGFunctions_C_Get_PS4Button_Icon_Params Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.Temp_softobject_Variable_3 = Temp_softobject_Variable_3;
	Parms.Temp_softobject_Variable_4 = Temp_softobject_Variable_4;
	Parms.Temp_softobject_Variable_5 = Temp_softobject_Variable_5;
	Parms.Temp_softobject_Variable_6 = Temp_softobject_Variable_6;
	Parms.Temp_softobject_Variable_7 = Temp_softobject_Variable_7;
	Parms.Temp_softobject_Variable_8 = Temp_softobject_Variable_8;
	Parms.Temp_softobject_Variable_9 = Temp_softobject_Variable_9;
	Parms.Temp_softobject_Variable_10 = Temp_softobject_Variable_10;
	Parms.Temp_softobject_Variable_11 = Temp_softobject_Variable_11;
	Parms.Temp_softobject_Variable_12 = Temp_softobject_Variable_12;
	Parms.Temp_softobject_Variable_13 = Temp_softobject_Variable_13;
	Parms.Temp_softobject_Variable_14 = Temp_softobject_Variable_14;
	Parms.Temp_softobject_Variable_15 = Temp_softobject_Variable_15;
	Parms.Temp_softobject_Variable_16 = Temp_softobject_Variable_16;
	Parms.Temp_softobject_Variable_17 = Temp_softobject_Variable_17;
	Parms.Temp_softobject_Variable_18 = Temp_softobject_Variable_18;
	Parms.Temp_softobject_Variable_19 = Temp_softobject_Variable_19;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function CGFunctions.CGFunctions_C.IsCustomGlobalStatPastHalfwayInRed
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        StatID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildGlobalStat            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCustomGlobalStatValue_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCustomGlobalStatValue_Unknown                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::IsCustomGlobalStatPastHalfwayInRed(class FName StatID, class UObject* __WorldContext, float* Delta, const struct FBuildGlobalStat& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_GetCustomGlobalStatValue_Value, bool CallFunc_GetCustomGlobalStatValue_Unknown, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "IsCustomGlobalStatPastHalfwayInRed");

	Params::UCGFunctions_C_IsCustomGlobalStatPastHalfwayInRed_Params Parms{};

	Parms.StatID = StatID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetCustomGlobalStatValue_Value = CallFunc_GetCustomGlobalStatValue_Value;
	Parms.CallFunc_GetCustomGlobalStatValue_Unknown = CallFunc_GetCustomGlobalStatValue_Unknown;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Delta != nullptr)
		*Delta = Parms.Delta;

}


// Function CGFunctions.CGFunctions_C.GetCustomGlobalStatValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StatID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Unknown                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentMonsterEventLevel_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_AdditionalRadiationController_01_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateTimeUntilStorm_InMinutes                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateTimeUntilStorm_InSeconds                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRadiationValueForUI_Output_Get                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::GetCustomGlobalStatValue(class FName StatID, int32 Offset, class UObject* __WorldContext, int32* Value, bool* Unknown, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_GetCurrentMonsterEventLevel_ReturnValue, class Aba_AdditionalRadiationController_01_C* CallFunc_GetActorOfClass_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_CalculateTimeUntilStorm_InMinutes, int32 CallFunc_CalculateTimeUntilStorm_InSeconds, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_GetRadiationValueForUI_Output_Get)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCustomGlobalStatValue");

	Params::UCGFunctions_C_GetCustomGlobalStatValue_Params Parms{};

	Parms.StatID = StatID;
	Parms.Offset = Offset;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCurrentMonsterEventLevel_ReturnValue = CallFunc_GetCurrentMonsterEventLevel_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CalculateTimeUntilStorm_InMinutes = CallFunc_CalculateTimeUntilStorm_InMinutes;
	Parms.CallFunc_CalculateTimeUntilStorm_InSeconds = CallFunc_CalculateTimeUntilStorm_InSeconds;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetRadiationValueForUI_Output_Get = CallFunc_GetRadiationValueForUI_Output_Get;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (Unknown != nullptr)
		*Unknown = Parms.Unknown;

}


// Function CGFunctions.CGFunctions_C.KeyToIcon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// class FString                      KeyString                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ParsedString                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPS4GamepadConnected_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindSubstring_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAxisNames_AxisNames                                  (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetKeyDisplayNameEnglish_English_Display_Name           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue_1                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetActionNames_ActionNames                              (ReferenceParm)
// int32                              CallFunc_ReplaceInline_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_4                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetKeyDisplayNameEnglish_English_Display_Name_1         (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue_2                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanXOR_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_ReplaceInline_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSubstring_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRichImageRow               CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindSubstring_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::KeyToIcon(class FText& InText, class UObject* __WorldContext, class FText* OutText, const class FString& KeyString, const class FString& ParsedString, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsPS4GamepadConnected_ReturnValue, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_LastInputWasFromGamepad_Gamepad_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, int32 CallFunc_ReplaceInline_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<class FName>& CallFunc_GetAxisNames_AxisNames, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class FText CallFunc_GetKeyDisplayNameEnglish_English_Display_Name, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue_1, bool CallFunc_Key_IsGamepadKey_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_BooleanXOR_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, TArray<class FName>& CallFunc_GetActionNames_ActionNames, int32 CallFunc_ReplaceInline_ReturnValue_1, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, class FText CallFunc_GetKeyDisplayNameEnglish_English_Display_Name_1, bool CallFunc_Less_IntInt_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue_2, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, bool CallFunc_BooleanXOR_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, int32 CallFunc_ReplaceInline_ReturnValue_2, int32 CallFunc_FindSubstring_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const struct FRichImageRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "KeyToIcon");

	Params::UCGFunctions_C_KeyToIcon_Params Parms{};

	Parms.InText = InText;
	Parms.__WorldContext = __WorldContext;
	Parms.KeyString = KeyString;
	Parms.ParsedString = ParsedString;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsPS4GamepadConnected_ReturnValue = CallFunc_IsPS4GamepadConnected_ReturnValue;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad_1 = CallFunc_LastInputWasFromGamepad_Gamepad_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue = CallFunc_CullSpacesFromA_String_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetAxisNames_AxisNames = CallFunc_GetAxisNames_AxisNames;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetKeyDisplayNameEnglish_English_Display_Name = CallFunc_GetKeyDisplayNameEnglish_English_Display_Name;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue_1 = CallFunc_CullSpacesFromA_String_ReturnValue_1;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_BooleanXOR_ReturnValue = CallFunc_BooleanXOR_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_GetActionNames_ActionNames = CallFunc_GetActionNames_ActionNames;
	Parms.CallFunc_ReplaceInline_ReturnValue_1 = CallFunc_ReplaceInline_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_GetKeyDisplayNameEnglish_English_Display_Name_1 = CallFunc_GetKeyDisplayNameEnglish_English_Display_Name_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue_2 = CallFunc_CullSpacesFromA_String_ReturnValue_2;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue_1 = CallFunc_Key_IsGamepadKey_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_BooleanXOR_ReturnValue_1 = CallFunc_BooleanXOR_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_ReplaceInline_ReturnValue_2 = CallFunc_ReplaceInline_ReturnValue_2;
	Parms.CallFunc_FindSubstring_ReturnValue_1 = CallFunc_FindSubstring_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue_2 = CallFunc_FindSubstring_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function CGFunctions.CGFunctions_C.FormatText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Capitalize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RemoveHardEnters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReplaceSoftEntersWIthHard                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      SoftEnterSign                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Output                                                           (Parm, OutParm)
// TArray<class FString>              TempCharArray                                                    (Edit, BlueprintVisible)
// class FString                      Text                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_RemoveNewLineFromString_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void UCGFunctions_C::FormatText(class FText InText, bool Capitalize, bool RemoveHardEnters, bool ReplaceSoftEntersWIthHard, const class FString& SoftEnterSign, class UObject* __WorldContext, class FText* Output, const TArray<class FString>& TempCharArray, const class FString& Text, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, const class FString& CallFunc_RemoveNewLineFromString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "FormatText");

	Params::UCGFunctions_C_FormatText_Params Parms{};

	Parms.InText = InText;
	Parms.Capitalize = Capitalize;
	Parms.RemoveHardEnters = RemoveHardEnters;
	Parms.ReplaceSoftEntersWIthHard = ReplaceSoftEntersWIthHard;
	Parms.SoftEnterSign = SoftEnterSign;
	Parms.__WorldContext = __WorldContext;
	Parms.TempCharArray = TempCharArray;
	Parms.Text = Text;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_RemoveNewLineFromString_ReturnValue = CallFunc_RemoveNewLineFromString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function CGFunctions.CGFunctions_C.GetCompanionIndicatorWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionIndicator_Main_C*CompanionIndicatorWidget                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CompanionIndicator_Main_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetCompanionIndicatorWidget(class UObject* __WorldContext, class UWid_CompanionIndicator_Main_C** CompanionIndicatorWidget, class UWid_CompanionIndicator_Main_C* CallFunc_Create_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCompanionIndicatorWidget");

	Params::UCGFunctions_C_GetCompanionIndicatorWidget_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CompanionIndicatorWidget != nullptr)
		*CompanionIndicatorWidget = Parms.CompanionIndicatorWidget;

}


// Function CGFunctions.CGFunctions_C.GetMainMenuZOrder
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ZOrder                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::GetMainMenuZOrder(class UObject* __WorldContext, int32* ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetMainMenuZOrder");

	Params::UCGFunctions_C_GetMainMenuZOrder_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ZOrder != nullptr)
		*ZOrder = Parms.ZOrder;

}


// Function CGFunctions.CGFunctions_C.FloatToMinSec
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              InFloat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      OutMinsec                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UCGFunctions_C::FloatToMinSec(float InFloat, class UObject* __WorldContext, class FString* OutMinsec, bool Temp_bool_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "FloatToMinSec");

	Params::UCGFunctions_C_FloatToMinSec_Params Parms{};

	Parms.InFloat = InFloat;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMinsec != nullptr)
		*OutMinsec = std::move(Parms.OutMinsec);

}


// Function CGFunctions.CGFunctions_C.ContainsChildOf
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>              InClasses                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                      InParentClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bOutContains                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::ContainsChildOf(TArray<class UClass*>& InClasses, class UClass* InParentClass, class UObject* __WorldContext, bool* bOutContains, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "ContainsChildOf");

	Params::UCGFunctions_C_ContainsChildOf_Params Parms{};

	Parms.InClasses = InClasses;
	Parms.InParentClass = InParentClass;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOutContains != nullptr)
		*bOutContains = Parms.bOutContains;

}


// Function CGFunctions.CGFunctions_C.UpdateThreatMeterMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::UpdateThreatMeterMode(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "UpdateThreatMeterMode");

	Params::UCGFunctions_C_UpdateThreatMeterMode_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetOnScreenLogQueue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_OnScreenFrameInformation_C*OnScreenFrameQueue                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::GetOnScreenLogQueue(class UObject* __WorldContext, class UWid_OnScreenFrameInformation_C** OnScreenFrameQueue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetOnScreenLogQueue");

	Params::UCGFunctions_C_GetOnScreenLogQueue_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (OnScreenFrameQueue != nullptr)
		*OnScreenFrameQueue = Parms.OnScreenFrameQueue;

}


// Function CGFunctions.CGFunctions_C.CheckVolumeLevelStreamingCompleted
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           GameInstance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ALevelStreamingVolume*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelStreamingVolume*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOverlappingActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLevelLoaded_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::CheckVolumeLevelStreamingCompleted(class UCGGameInstance_C* GameInstance, class ACh_Hero_00_C* Pawn, class UObject* __WorldContext, TArray<class ALevelStreamingVolume*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class ALevelStreamingVolume* CallFunc_Array_Get_Item, bool CallFunc_IsOverlappingActor_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsLevelLoaded_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "CheckVolumeLevelStreamingCompleted");

	Params::UCGFunctions_C_CheckVolumeLevelStreamingCompleted_Params Parms{};

	Parms.GameInstance = GameInstance;
	Parms.Pawn = Pawn;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsOverlappingActor_ReturnValue = CallFunc_IsOverlappingActor_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetStreamingLevel_ReturnValue = CallFunc_GetStreamingLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsLevelLoaded_ReturnValue = CallFunc_IsLevelLoaded_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetColorCoding
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ColorCoding         CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetColorCoding(class FName RowName, class UObject* __WorldContext, struct FLinearColor* Color, const struct FStruct_ColorCoding& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetColorCoding");

	Params::UCGFunctions_C_GetColorCoding_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function CGFunctions.CGFunctions_C.Finish Event (Safe)
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         EventID                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPIE_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInPIE_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_GetMapEnumByName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetActiveEventsV2_ReturnValue                           (ReferenceParm)
// bool                               CallFunc_FinishEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::Finish_Event__Safe_(struct FDataTableRowHandle& EventID, class UObject* __WorldContext, bool CallFunc_IsInPIE_ReturnValue, bool CallFunc_IsInPIE_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue, TArray<class FName>& CallFunc_GetActiveEventsV2_ReturnValue, bool CallFunc_FinishEvent_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "Finish Event (Safe)");

	Params::UCGFunctions_C_Finish_Event__Safe__Params Parms{};

	Parms.EventID = EventID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsInPIE_ReturnValue = CallFunc_IsInPIE_ReturnValue;
	Parms.CallFunc_IsInPIE_ReturnValue_1 = CallFunc_IsInPIE_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_GetMapEnumByName_ReturnValue = CallFunc_GetMapEnumByName_ReturnValue;
	Parms.CallFunc_GetActiveEventsV2_ReturnValue = CallFunc_GetActiveEventsV2_ReturnValue;
	Parms.CallFunc_FinishEvent_ReturnValue = CallFunc_FinishEvent_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetWorstOrBestHealingItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Get_Best                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FoundAny                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CurrentRow                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentCandidate                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentMatch                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayerHasHealingItem_Has_Healing_Item                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_PlayerHasHealingItem_HealingItemsInPossesionReturn      (ReferenceParm)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class Aba_aa_HealingTemplate_C>K2Node_ClassDynamicCast_AsBa_Aa_Healing_Template                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetWorstOrBestHealingItem(bool Get_Best, class UObject* __WorldContext, class FName* Return, bool* FoundAny, class FName CurrentRow, class FName CurrentCandidate, float CurrentMatch, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_PlayerHasHealingItem_Has_Healing_Item, TArray<class FName>& CallFunc_PlayerHasHealingItem_HealingItemsInPossesionReturn, bool Temp_bool_IsClosed_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, TSubclassOf<class Aba_aa_HealingTemplate_C> K2Node_ClassDynamicCast_AsBa_Aa_Healing_Template, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetWorstOrBestHealingItem");

	Params::UCGFunctions_C_GetWorstOrBestHealingItem_Params Parms{};

	Parms.Get_Best = Get_Best;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentRow = CurrentRow;
	Parms.CurrentCandidate = CurrentCandidate;
	Parms.CurrentMatch = CurrentMatch;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_PlayerHasHealingItem_Has_Healing_Item = CallFunc_PlayerHasHealingItem_Has_Healing_Item;
	Parms.CallFunc_PlayerHasHealingItem_HealingItemsInPossesionReturn = CallFunc_PlayerHasHealingItem_HealingItemsInPossesionReturn;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBa_Aa_Healing_Template = K2Node_ClassDynamicCast_AsBa_Aa_Healing_Template;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (FoundAny != nullptr)
		*FoundAny = Parms.FoundAny;

}


// Function CGFunctions.CGFunctions_C.PlayerHasHealingItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Has_Healing_Item                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                HealingItemsInPossesionReturn                                    (Parm, OutParm)
// TArray<class FName>                HealingItemsInPossesion                                          (Edit, BlueprintVisible)
// bool                               Result                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UClass*>              HealingClassesInPossession                                       (Edit, BlueprintVisible)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetItems_ReturnValue                                    (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHealingItem_Is_healing_item                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::PlayerHasHealingItem(class UObject* __WorldContext, bool* Has_Healing_Item, TArray<class FName>* HealingItemsInPossesionReturn, const TArray<class FName>& HealingItemsInPossesion, bool Result, const TArray<class UClass*>& HealingClassesInPossession, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 Temp_int_Array_Index_Variable, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsHealingItem_Is_healing_item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "PlayerHasHealingItem");

	Params::UCGFunctions_C_PlayerHasHealingItem_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.HealingItemsInPossesion = HealingItemsInPossesion;
	Parms.Result = Result;
	Parms.HealingClassesInPossession = HealingClassesInPossession;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsHealingItem_Is_healing_item = CallFunc_IsHealingItem_Is_healing_item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Healing_Item != nullptr)
		*Has_Healing_Item = Parms.Has_Healing_Item;

	if (HealingItemsInPossesionReturn != nullptr)
		*HealingItemsInPossesionReturn = std::move(Parms.HealingItemsInPossesionReturn);

}


// Function CGFunctions.CGFunctions_C.IsHealingItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_healing_item                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Return                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TSubclassOf<class Ubc_Base_UseAction_Template_Healing_C>K2Node_ClassDynamicCast_AsBc_Base_Use_Action_Template_Healing    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class Aba_aa_HealingTemplate_C>K2Node_ClassDynamicCast_AsBa_Aa_Healing_Template                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UCGFunctions_C::IsHealingItem(class FName Item, class UObject* __WorldContext, bool* Is_healing_item, bool Return, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSubclassOf<class Ubc_Base_UseAction_Template_Healing_C> K2Node_ClassDynamicCast_AsBc_Base_Use_Action_Template_Healing, bool K2Node_ClassDynamicCast_bSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TSubclassOf<class Aba_aa_HealingTemplate_C> K2Node_ClassDynamicCast_AsBa_Aa_Healing_Template, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "IsHealingItem");

	Params::UCGFunctions_C_IsHealingItem_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.Return = Return;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBc_Base_Use_Action_Template_Healing = K2Node_ClassDynamicCast_AsBc_Base_Use_Action_Template_Healing;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBa_Aa_Healing_Template = K2Node_ClassDynamicCast_AsBa_Aa_Healing_Template;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_healing_item != nullptr)
		*Is_healing_item = Parms.Is_healing_item;

}


// Function CGFunctions.CGFunctions_C.ResourceEnumToItemEnum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EResourceType           Resource                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ItemNames          Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ItemNames          CallFunc_NameIDToitemEnum_Output                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::ResourceEnumToItemEnum(enum class EResourceType Resource, class UObject* __WorldContext, enum class Enum_ItemNames* Output, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, enum class Enum_ItemNames CallFunc_NameIDToitemEnum_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "ResourceEnumToItemEnum");

	Params::UCGFunctions_C_ResourceEnumToItemEnum_Params Parms{};

	Parms.Resource = Resource;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_NameIDToitemEnum_Output = CallFunc_NameIDToitemEnum_Output;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function CGFunctions.CGFunctions_C.CheckIfPlayerHPIsAboveTreshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Treshold                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Tolerance                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHP_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHP_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCGFunctions_C::CheckIfPlayerHPIsAboveTreshold(float Treshold, float Tolerance, class UObject* __WorldContext, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_GetCurrentHP_ReturnValue, float CallFunc_GetMaxHP_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "CheckIfPlayerHPIsAboveTreshold");

	Params::UCGFunctions_C_CheckIfPlayerHPIsAboveTreshold_Params Parms{};

	Parms.Treshold = Treshold;
	Parms.Tolerance = Tolerance;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentHP_ReturnValue = CallFunc_GetCurrentHP_ReturnValue;
	Parms.CallFunc_GetMaxHP_ReturnValue = CallFunc_GetMaxHP_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGFunctions.CGFunctions_C.CGSetQuickUse
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldEnable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainPawnCpp*                CGPAWN                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::CGSetQuickUse(bool ShouldEnable, class AMainPawnCpp* CGPAWN, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "CGSetQuickUse");

	Params::UCGFunctions_C_CGSetQuickUse_Params Parms{};

	Parms.ShouldEnable = ShouldEnable;
	Parms.CGPAWN = CGPAWN;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetItemData_Pure
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NameID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  Data                                                             (Parm, OutParm)
// struct FItemEntry                  CallFunc_GetItemData_Data                                        (None)

void UCGFunctions_C::GetItemData_Pure(class FName NameID, class UObject* __WorldContext, struct FItemEntry* Data, const struct FItemEntry& CallFunc_GetItemData_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetItemData_Pure");

	Params::UCGFunctions_C_GetItemData_Pure_Params Parms{};

	Parms.NameID = NameID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemData_Data = CallFunc_GetItemData_Data;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function CGFunctions.CGFunctions_C.SeperateParameters
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)

TArray<class FString> UCGFunctions_C::SeperateParameters(const class FString& Input, class UObject* __WorldContext, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "SeperateParameters");

	Params::UCGFunctions_C_SeperateParameters_Params Parms{};

	Parms.Input = Input;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGFunctions.CGFunctions_C.NameIDToResourceEnum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::NameIDToResourceEnum(class FName Input, class UObject* __WorldContext, enum class EResourceType* Output, bool* Found, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "NameIDToResourceEnum");

	Params::UCGFunctions_C_NameIDToResourceEnum_Params Parms{};

	Parms.Input = Input;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function CGFunctions.CGFunctions_C.AssignQuestDescVariables
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        In_brief                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EEventMap               CustomMap                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseCustomMap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Brief                                                            (Parm, OutParm)
// class FText                        Text                                                             (Parm, OutParm)
// class FString                      ReturnBrief                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class EEventMap               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FName                        CallFunc_GetEnumeratorName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Impart_standard_expressions_Result                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// TArray<float>                      K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FString                      CallFunc_Impart_standard_expressions_Result_1                    (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UCGFunctions_C::AssignQuestDescVariables(class FText& In_brief, class FText& InText, enum class EEventMap CustomMap, bool UseCustomMap, class UObject* __WorldContext, class FText* Brief, class FText* Text, const class FString& ReturnBrief, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, enum class EEventMap K2Node_Select_Default, TArray<float>& K2Node_MakeArray_Array_1, class FName CallFunc_GetEnumeratorName_ReturnValue, const class FString& CallFunc_Impart_standard_expressions_Result, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<float>& K2Node_MakeArray_Array_2, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_3, const class FString& CallFunc_Impart_standard_expressions_Result_1, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "AssignQuestDescVariables");

	Params::UCGFunctions_C_AssignQuestDescVariables_Params Parms{};

	Parms.In_brief = In_brief;
	Parms.InText = InText;
	Parms.CustomMap = CustomMap;
	Parms.UseCustomMap = UseCustomMap;
	Parms.__WorldContext = __WorldContext;
	Parms.ReturnBrief = ReturnBrief;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetEnumeratorName_ReturnValue = CallFunc_GetEnumeratorName_ReturnValue;
	Parms.CallFunc_Impart_standard_expressions_Result = CallFunc_Impart_standard_expressions_Result;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Impart_standard_expressions_Result_1 = CallFunc_Impart_standard_expressions_Result_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Brief != nullptr)
		*Brief = Parms.Brief;

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function CGFunctions.CGFunctions_C.NameIDToitemEnum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ItemNames          Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue_1                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::NameIDToitemEnum(class FName Input, class UObject* __WorldContext, enum class Enum_ItemNames* Output, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "NameIDToitemEnum");

	Params::UCGFunctions_C_NameIDToitemEnum_Params Parms{};

	Parms.Input = Input;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue = CallFunc_CullSpacesFromA_String_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue_1 = CallFunc_CullSpacesFromA_String_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function CGFunctions.CGFunctions_C.ExpOnScreenLog
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_OnScreenExpType    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_OnscreenLogDictionaryKeysLogType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      Float_parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FDataTableRowHandle> Dynamic_Variable_handles                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTexture2D*                  Texture_2d_overrride                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OverrrideColumnName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::ExpOnScreenLog(enum class Enum_OnScreenExpType Type, enum class Enum_OnscreenLogDictionaryKeys LogType, TArray<float>& Float_parameters, TArray<struct FDataTableRowHandle>& Dynamic_Variable_handles, class UTexture2D* Texture_2d_overrride, class FName OverrrideColumnName, class UObject* __WorldContext, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "ExpOnScreenLog");

	Params::UCGFunctions_C_ExpOnScreenLog_Params Parms{};

	Parms.Type = Type;
	Parms.LogType = LogType;
	Parms.Float_parameters = Float_parameters;
	Parms.Dynamic_Variable_handles = Dynamic_Variable_handles;
	Parms.Texture_2d_overrride = Texture_2d_overrride;
	Parms.OverrrideColumnName = OverrrideColumnName;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetDesctFromQuestID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         DataTableRowHandle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Brief                                                            (Parm, OutParm)
// class FText                        Text                                                             (Parm, OutParm)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DescFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ReturnBrief                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FQuestInfoInput             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// struct FDescriptionInfo            CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_AssignQuestDescVariables_Brief                          (None)
// class FText                        CallFunc_AssignQuestDescVariables_Text                           (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::GetDesctFromQuestID(struct FDataTableRowHandle& DataTableRowHandle, class UObject* __WorldContext, class FText* Brief, class FText* Text, class UTexture2D** Image, bool* DescFound, const class FString& ReturnBrief, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FQuestInfoInput& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_1, const struct FDescriptionInfo& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FText CallFunc_AssignQuestDescVariables_Brief, class FText CallFunc_AssignQuestDescVariables_Text, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetDesctFromQuestID");

	Params::UCGFunctions_C_GetDesctFromQuestID_Params Parms{};

	Parms.DataTableRowHandle = DataTableRowHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.ReturnBrief = ReturnBrief;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_AssignQuestDescVariables_Brief = CallFunc_AssignQuestDescVariables_Brief;
	Parms.CallFunc_AssignQuestDescVariables_Text = CallFunc_AssignQuestDescVariables_Text;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (Brief != nullptr)
		*Brief = Parms.Brief;

	if (Text != nullptr)
		*Text = Parms.Text;

	if (Image != nullptr)
		*Image = Parms.Image;

	if (DescFound != nullptr)
		*DescFound = Parms.DescFound;

}


// Function CGFunctions.CGFunctions_C.GetReportIdForQuest
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         DataTableRowHandle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         OutputReport                                                     (Parm, OutParm, NoDestructor)
// struct FQuestInfoInput             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)

void UCGFunctions_C::GetReportIdForQuest(struct FDataTableRowHandle& DataTableRowHandle, class UObject* __WorldContext, struct FDataTableRowHandle* OutputReport, const struct FQuestInfoInput& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetReportIdForQuest");

	Params::UCGFunctions_C_GetReportIdForQuest_Params Parms{};

	Parms.DataTableRowHandle = DataTableRowHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputReport != nullptr)
		*OutputReport = std::move(Parms.OutputReport);

}


// Function CGFunctions.CGFunctions_C.FindLogTypeEnumByName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_OnscreenLogDictionaryKeysEnum                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::FindLogTypeEnumByName(class FName Name, class UObject* __WorldContext, enum class Enum_OnscreenLogDictionaryKeys* Enum, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "FindLogTypeEnumByName");

	Params::UCGFunctions_C_FindLogTypeEnumByName_Params Parms{};

	Parms.Name = Name;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enum != nullptr)
		*Enum = Parms.Enum;

}


// Function CGFunctions.CGFunctions_C.GetPersonsImage
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionDefinition        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetPersonsImage(class FName RowName, class UObject* __WorldContext, class UTexture2D** Image, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetPersonsImage");

	Params::UCGFunctions_C_GetPersonsImage_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;

}


// Function CGFunctions.CGFunctions_C.GetXpReward
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_QuestType          QuestType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CustomExperienceHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Display_log_message                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_StandardXPRewards       CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_StandardXPRewards       CallFunc_GetDataTableRowFromName_OutRow_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetXpReward(enum class Enum_QuestType QuestType, const struct FDataTableRowHandle& CustomExperienceHandle, class UObject* __WorldContext, float* Amount, bool* Display_log_message, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSt_StandardXPRewards& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSt_StandardXPRewards& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetXpReward");

	Params::UCGFunctions_C_GetXpReward_Params Parms{};

	Parms.QuestType = QuestType;
	Parms.CustomExperienceHandle = CustomExperienceHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

	if (Display_log_message != nullptr)
		*Display_log_message = Parms.Display_log_message;

}


// Function CGFunctions.CGFunctions_C.StandardXPReward
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_QuestType          QuestType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Quest_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FDataTableRowHandle         Event_Object                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               IsMainQuest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCustomExp                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CustomExpTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CustomExperienceHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RecievedXp                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_OnScreenExpType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_OnScreenExpType    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_OnScreenExpType    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_OnscreenLogDictionaryKeysTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_QuestType          Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         Temp_struct_Variable                                             (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_1                                           (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_2                                           (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_3                                           (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_4                                           (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_5                                           (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_6                                           (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_7                                           (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_8                                           (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_9                                           (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_10                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_11                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_12                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_13                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_14                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_15                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_16                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_17                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_18                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_19                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_20                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_21                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_22                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_23                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_24                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_25                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_26                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_27                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_28                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_29                                          (NoDestructor)
// struct FDataTableRowHandle         Temp_struct_Variable_30                                          (NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQuestInfoInput             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDescriptionInfo            CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_OnScreenFrameInformation_C*CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array                                           (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetReportIdForQuest_OutputReport                        (NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// float                              CallFunc_GetXpReward_Amount                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetXpReward_Display_log_message                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_OnScreenExpType    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_OnScreenExpType    K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor, UObjectWrapper)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Select_Default_3                                          (NoDestructor)
// enum class Enum_OnscreenLogDictionaryKeysCallFunc_FindLogTypeEnumByName_Enum                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// enum class Enum_OnscreenLogDictionaryKeysK2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_Select_Default_5                                          (ReferenceParm)
// TArray<float>                      K2Node_MakeArray_Array_3                                         (ReferenceParm)

void UCGFunctions_C::StandardXPReward(enum class Enum_QuestType QuestType, const struct FDataTableRowHandle& Quest_ID, struct FDataTableRowHandle& Event_Object, bool IsMainQuest, bool IsCustomExp, class FName CustomExpTag, const struct FDataTableRowHandle& CustomExperienceHandle, class UObject* __WorldContext, float RecievedXp, bool Temp_bool_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class Enum_OnScreenExpType Temp_byte_Variable, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class Enum_OnScreenExpType Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class Enum_OnScreenExpType Temp_byte_Variable_2, bool Temp_bool_Variable_2, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable_3, enum class Enum_OnscreenLogDictionaryKeys Temp_byte_Variable_3, bool Temp_bool_Variable_4, enum class Enum_QuestType Temp_byte_Variable_4, const struct FDataTableRowHandle& Temp_struct_Variable, const struct FDataTableRowHandle& Temp_struct_Variable_1, const struct FDataTableRowHandle& Temp_struct_Variable_2, const struct FDataTableRowHandle& Temp_struct_Variable_3, const struct FDataTableRowHandle& Temp_struct_Variable_4, const struct FDataTableRowHandle& Temp_struct_Variable_5, const struct FDataTableRowHandle& Temp_struct_Variable_6, const struct FDataTableRowHandle& Temp_struct_Variable_7, const struct FDataTableRowHandle& Temp_struct_Variable_8, const struct FDataTableRowHandle& Temp_struct_Variable_9, const struct FDataTableRowHandle& Temp_struct_Variable_10, const struct FDataTableRowHandle& Temp_struct_Variable_11, const struct FDataTableRowHandle& Temp_struct_Variable_12, const struct FDataTableRowHandle& Temp_struct_Variable_13, const struct FDataTableRowHandle& Temp_struct_Variable_14, const struct FDataTableRowHandle& Temp_struct_Variable_15, const struct FDataTableRowHandle& Temp_struct_Variable_16, const struct FDataTableRowHandle& Temp_struct_Variable_17, const struct FDataTableRowHandle& Temp_struct_Variable_18, const struct FDataTableRowHandle& Temp_struct_Variable_19, const struct FDataTableRowHandle& Temp_struct_Variable_20, const struct FDataTableRowHandle& Temp_struct_Variable_21, const struct FDataTableRowHandle& Temp_struct_Variable_22, const struct FDataTableRowHandle& Temp_struct_Variable_23, const struct FDataTableRowHandle& Temp_struct_Variable_24, const struct FDataTableRowHandle& Temp_struct_Variable_25, const struct FDataTableRowHandle& Temp_struct_Variable_26, const struct FDataTableRowHandle& Temp_struct_Variable_27, const struct FDataTableRowHandle& Temp_struct_Variable_28, const struct FDataTableRowHandle& Temp_struct_Variable_29, const struct FDataTableRowHandle& Temp_struct_Variable_30, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCompanionEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FQuestInfoInput& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FDescriptionInfo& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_OnScreenFrameInformation_C* CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class FName K2Node_Select_Default, const struct FDataTableRowHandle& CallFunc_GetReportIdForQuest_OutputReport, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, float CallFunc_GetXpReward_Amount, bool CallFunc_GetXpReward_Display_log_message, enum class Enum_OnScreenExpType K2Node_Select_Default_1, enum class Enum_OnScreenExpType K2Node_Select_Default_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FDataTableRowHandle& K2Node_Select_Default_3, enum class Enum_OnscreenLogDictionaryKeys CallFunc_FindLogTypeEnumByName_Enum, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_2, enum class Enum_OnscreenLogDictionaryKeys K2Node_Select_Default_4, TArray<struct FDataTableRowHandle>& K2Node_Select_Default_5, TArray<float>& K2Node_MakeArray_Array_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "StandardXPReward");

	Params::UCGFunctions_C_StandardXPReward_Params Parms{};

	Parms.QuestType = QuestType;
	Parms.Quest_ID = Quest_ID;
	Parms.Event_Object = Event_Object;
	Parms.IsMainQuest = IsMainQuest;
	Parms.IsCustomExp = IsCustomExp;
	Parms.CustomExpTag = CustomExpTag;
	Parms.CustomExperienceHandle = CustomExperienceHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.RecievedXp = RecievedXp;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_struct_Variable_16 = Temp_struct_Variable_16;
	Parms.Temp_struct_Variable_17 = Temp_struct_Variable_17;
	Parms.Temp_struct_Variable_18 = Temp_struct_Variable_18;
	Parms.Temp_struct_Variable_19 = Temp_struct_Variable_19;
	Parms.Temp_struct_Variable_20 = Temp_struct_Variable_20;
	Parms.Temp_struct_Variable_21 = Temp_struct_Variable_21;
	Parms.Temp_struct_Variable_22 = Temp_struct_Variable_22;
	Parms.Temp_struct_Variable_23 = Temp_struct_Variable_23;
	Parms.Temp_struct_Variable_24 = Temp_struct_Variable_24;
	Parms.Temp_struct_Variable_25 = Temp_struct_Variable_25;
	Parms.Temp_struct_Variable_26 = Temp_struct_Variable_26;
	Parms.Temp_struct_Variable_27 = Temp_struct_Variable_27;
	Parms.Temp_struct_Variable_28 = Temp_struct_Variable_28;
	Parms.Temp_struct_Variable_29 = Temp_struct_Variable_29;
	Parms.Temp_struct_Variable_30 = Temp_struct_Variable_30;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue = CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetReportIdForQuest_OutputReport = CallFunc_GetReportIdForQuest_OutputReport;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetXpReward_Amount = CallFunc_GetXpReward_Amount;
	Parms.CallFunc_GetXpReward_Display_log_message = CallFunc_GetXpReward_Display_log_message;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue = CallFunc_CullSpacesFromA_String_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_FindLogTypeEnumByName_Enum = CallFunc_FindLogTypeEnumByName_Enum;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.SetOnlyOneStartPointAsActive
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_CgStartPoint_C*          Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_CgStartPoint_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_CgStartPoint_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::SetOnlyOneStartPointAsActive(class Aba_CgStartPoint_C* Input, class UObject* __WorldContext, TArray<class Aba_CgStartPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class Aba_CgStartPoint_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "SetOnlyOneStartPointAsActive");

	Params::UCGFunctions_C_SetOnlyOneStartPointAsActive_Params Parms{};

	Parms.Input = Input;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.EEventMapEnum to quest table row
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEventMap               In                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, class UDataTable*>Map                                                              (Edit, BlueprintVisible)
// TMap<enum class EEventMap, class UDataTable*>K2Node_MakeVariable_MakeVariableOutput                           (None)
// class UDataTable*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::EEventMapEnum_to_quest_table_row(enum class EEventMap In, class UObject* __WorldContext, class UDataTable** Value, TMap<enum class EEventMap, class UDataTable*> Map, TMap<enum class EEventMap, class UDataTable*> K2Node_MakeVariable_MakeVariableOutput, class UDataTable* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "EEventMapEnum to quest table row");

	Params::UCGFunctions_C_EEventMapEnum_to_quest_table_row_Params Parms{};

	Parms.In = In;
	Parms.__WorldContext = __WorldContext;
	Parms.Map = Map;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function CGFunctions.CGFunctions_C.Select start point
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_CgStartPoint_C*          Random                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_CgStartPoint_C*>  Valid                                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// TMap<class FString, class Aba_CgStartPoint_C*>Map                                                              (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class Aba_CgStartPoint_C*>  All                                                              (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_CgStartPoint_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class Aba_CgStartPoint_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_CgStartPoint_C*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_CgStartPoint_C*          CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_CgStartPoint_C*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::Select_start_point(class FName Name, class UObject* __WorldContext, class Aba_CgStartPoint_C** Random, const TArray<class Aba_CgStartPoint_C*>& Valid, TMap<class FString, class Aba_CgStartPoint_C*> Map, const TArray<class Aba_CgStartPoint_C*>& All, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class Aba_CgStartPoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, TArray<class Aba_CgStartPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class Aba_CgStartPoint_C* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class Aba_CgStartPoint_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable, int32 K2Node_Select_Default, class Aba_CgStartPoint_C* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "Select start point");

	Params::UCGFunctions_C_Select_start_point_Params Parms{};

	Parms.Name = Name;
	Parms.__WorldContext = __WorldContext;
	Parms.Valid = Valid;
	Parms.Map = Map;
	Parms.All = All;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue = CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Random != nullptr)
		*Random = Parms.Random;

}


// Function CGFunctions.CGFunctions_C.OnScreenTooltip
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseCustomTxt                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CustomText1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CustomText2                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  CustomTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CheckRowNameWhenHiding                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::OnScreenTooltip(float Duration, class FName RowName, bool Hide, bool UseCustomTxt, class FText CustomText1, class FText CustomText2, class UTexture2D* CustomTexture, const struct FVector2D& Offset, bool CheckRowNameWhenHiding, class UObject* __WorldContext, const class FString& CallFunc_Conv_NameToString_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "OnScreenTooltip");

	Params::UCGFunctions_C_OnScreenTooltip_Params Parms{};

	Parms.Duration = Duration;
	Parms.RowName = RowName;
	Parms.Hide = Hide;
	Parms.UseCustomTxt = UseCustomTxt;
	Parms.CustomText1 = CustomText1;
	Parms.CustomText2 = CustomText2;
	Parms.CustomTexture = CustomTexture;
	Parms.Offset = Offset;
	Parms.CheckRowNameWhenHiding = CheckRowNameWhenHiding;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetMorale
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Current_Morale                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCompanionData_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionDefinition        CallFunc_GetCompanionData_StartingData                           (None)
// bool                               CallFunc_GetCompanionData_Found_in_current_data                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCompanionData_CurrentData                            (None)

void UCGFunctions_C::GetMorale(class FName Name, class UObject* __WorldContext, float* Current_Morale, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetMorale");

	Params::UCGFunctions_C_GetMorale_Params Parms{};

	Parms.Name = Name;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCompanionData_Found = CallFunc_GetCompanionData_Found;
	Parms.CallFunc_GetCompanionData_StartingData = CallFunc_GetCompanionData_StartingData;
	Parms.CallFunc_GetCompanionData_Found_in_current_data = CallFunc_GetCompanionData_Found_in_current_data;
	Parms.CallFunc_GetCompanionData_CurrentData = CallFunc_GetCompanionData_CurrentData;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Morale != nullptr)
		*Current_Morale = Parms.Current_Morale;

}


// Function CGFunctions.CGFunctions_C.MapEnumItemNamesToEResourceType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ItemNames          Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class Enum_ItemNames, enum class EResourceType>TypesMap                                                         (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<enum class Enum_ItemNames, enum class EResourceType>K2Node_MakeVariable_MakeVariableOutput                           (None)
// class FName                        CallFunc_ItemEnumToNameID_Name                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EResourceType           CallFunc_NameIDToResourceEnum_Output                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NameIDToResourceEnum_Found                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::MapEnumItemNamesToEResourceType(enum class Enum_ItemNames Key, class FName Name, class UObject* __WorldContext, enum class EResourceType* Value, bool* Found, TMap<enum class Enum_ItemNames, enum class EResourceType> TypesMap, bool Temp_bool_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, TMap<enum class Enum_ItemNames, enum class EResourceType> K2Node_MakeVariable_MakeVariableOutput, class FName CallFunc_ItemEnumToNameID_Name, class FName K2Node_Select_Default, enum class EResourceType CallFunc_NameIDToResourceEnum_Output, bool CallFunc_NameIDToResourceEnum_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "MapEnumItemNamesToEResourceType");

	Params::UCGFunctions_C_MapEnumItemNamesToEResourceType_Params Parms{};

	Parms.Key = Key;
	Parms.Name = Name;
	Parms.__WorldContext = __WorldContext;
	Parms.TypesMap = TypesMap;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_ItemEnumToNameID_Name = CallFunc_ItemEnumToNameID_Name;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NameIDToResourceEnum_Output = CallFunc_NameIDToResourceEnum_Output;
	Parms.CallFunc_NameIDToResourceEnum_Found = CallFunc_NameIDToResourceEnum_Found;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function CGFunctions.CGFunctions_C.StandardisedTimeSpentWithCompanion
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Special                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::StandardisedTimeSpentWithCompanion(class FName CompanionName, bool Is_Special, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "StandardisedTimeSpentWithCompanion");

	Params::UCGFunctions_C_StandardisedTimeSpentWithCompanion_Params Parms{};

	Parms.CompanionName = CompanionName;
	Parms.Is_Special = Is_Special;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.DoesThePlayerHaveItems
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSt_ItemByEnumAndCount>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Has_enough_items                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasItems                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ItemByEnumAndCount      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EResourceType           CallFunc_MapEnumItemNamesToEResourceType_Value                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MapEnumItemNamesToEResourceType_Found                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_ItemEnumToNameID_Name                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::DoesThePlayerHaveItems(TArray<struct FSt_ItemByEnumAndCount>& Array, class UObject* __WorldContext, bool* Has_enough_items, bool HasItems, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FSt_ItemByEnumAndCount& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, enum class EResourceType CallFunc_MapEnumItemNamesToEResourceType_Value, bool CallFunc_MapEnumItemNamesToEResourceType_Found, class FName CallFunc_ItemEnumToNameID_Name, float CallFunc_Count_ReturnValue, float CallFunc_Count_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "DoesThePlayerHaveItems");

	Params::UCGFunctions_C_DoesThePlayerHaveItems_Params Parms{};

	Parms.Array = Array;
	Parms.__WorldContext = __WorldContext;
	Parms.HasItems = HasItems;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MapEnumItemNamesToEResourceType_Value = CallFunc_MapEnumItemNamesToEResourceType_Value;
	Parms.CallFunc_MapEnumItemNamesToEResourceType_Found = CallFunc_MapEnumItemNamesToEResourceType_Found;
	Parms.CallFunc_ItemEnumToNameID_Name = CallFunc_ItemEnumToNameID_Name;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_Count_ReturnValue_1 = CallFunc_Count_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_enough_items != nullptr)
		*Has_enough_items = Parms.Has_enough_items;

}


// Function CGFunctions.CGFunctions_C.StandardOnscreenLog
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_OnscreenLogDictionaryKeysLog_type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      Float_parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FDataTableRowHandle> Dynamic_Variable_handles                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTexture2D*                  Texture_2d_overrride                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_OnScreenLog_Panel  Panel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OverrrideColumnName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasExpValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseBig                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Image_to_use                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_Dictionary              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Impart_standard_expressions_Result                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UCGFunctions_C::StandardOnscreenLog(enum class Enum_OnscreenLogDictionaryKeys Log_type, TArray<float>& Float_parameters, TArray<struct FDataTableRowHandle>& Dynamic_Variable_handles, class UTexture2D* Texture_2d_overrride, enum class Enum_OnScreenLog_Panel Panel, class FName OverrrideColumnName, bool HasExpValue, class UObject* __WorldContext, bool UseBig, class UTexture2D* Image_to_use, float Temp_float_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float Temp_float_Variable_1, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default_1, const class FString& CallFunc_Impart_standard_expressions_Result, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "StandardOnscreenLog");

	Params::UCGFunctions_C_StandardOnscreenLog_Params Parms{};

	Parms.Log_type = Log_type;
	Parms.Float_parameters = Float_parameters;
	Parms.Dynamic_Variable_handles = Dynamic_Variable_handles;
	Parms.Texture_2d_overrride = Texture_2d_overrride;
	Parms.Panel = Panel;
	Parms.OverrrideColumnName = OverrrideColumnName;
	Parms.HasExpValue = HasExpValue;
	Parms.__WorldContext = __WorldContext;
	Parms.UseBig = UseBig;
	Parms.Image_to_use = Image_to_use;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue = CallFunc_CullSpacesFromA_String_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Impart_standard_expressions_Result = CallFunc_Impart_standard_expressions_Result;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.Impart standard expressions
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InputString                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<float>                      Floats                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FDataTableRowHandle> DynamicVariableHandles                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        Override_column_name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ProcessedString                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_Dictionary              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTextFromDataTableByColumnName_OutputPin              (None)
// class FString                      CallFunc_Replace_ReturnValue_3                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_4                                   (ZeroConstructor, HasGetValueTypeHash)

void UCGFunctions_C::Impart_standard_expressions(const class FString& InputString, TArray<float>& Floats, TArray<struct FDataTableRowHandle>& DynamicVariableHandles, class FName Override_column_name, class UObject* __WorldContext, class FString* Result, const class FString& ProcessedString, class FName Temp_name_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName Temp_name_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_Select_Default, float CallFunc_Array_Get_Item_1, const class FString& CallFunc_Replace_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const class FString& CallFunc_Replace_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, bool Temp_bool_Variable_1, const class FString& CallFunc_Replace_ReturnValue_2, class FName K2Node_Select_Default_1, class FText CallFunc_GetTextFromDataTableByColumnName_OutputPin, const class FString& CallFunc_Replace_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "Impart standard expressions");

	Params::UCGFunctions_C_Impart_standard_expressions_Params Parms{};

	Parms.InputString = InputString;
	Parms.Floats = Floats;
	Parms.DynamicVariableHandles = DynamicVariableHandles;
	Parms.Override_column_name = Override_column_name;
	Parms.__WorldContext = __WorldContext;
	Parms.ProcessedString = ProcessedString;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Replace_ReturnValue_2 = CallFunc_Replace_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetTextFromDataTableByColumnName_OutputPin = CallFunc_GetTextFromDataTableByColumnName_OutputPin;
	Parms.CallFunc_Replace_ReturnValue_3 = CallFunc_Replace_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue_4 = CallFunc_Replace_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function CGFunctions.CGFunctions_C.GetLevelNamesFromEvents
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Map_enum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class FName>                  Level_Names                                                      (Parm, OutParm)
// TSet<class FName>                  Events_to_stream                                                 (Edit, BlueprintVisible)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInnerEvent>         CallFunc_GetActiveEvents_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetLevelNamesFromEvents(class UObject* WorldContextObject, enum class EEventMap Map_enum, class UObject* __WorldContext, TSet<class FName>* Level_Names, TSet<class FName> Events_to_stream, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool Temp_bool_True_if_break_was_hit_Variable, TArray<struct FInnerEvent>& CallFunc_GetActiveEvents_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInnerEvent& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetLevelNamesFromEvents");

	Params::UCGFunctions_C_GetLevelNamesFromEvents_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Map_enum = Map_enum;
	Parms.__WorldContext = __WorldContext;
	Parms.Events_to_stream = Events_to_stream;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetActiveEvents_ReturnValue = CallFunc_GetActiveEvents_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Level_Names != nullptr)
		*Level_Names = Parms.Level_Names;

}


// Function CGFunctions.CGFunctions_C.TraceForGravitySnapPoint
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Rotation_Source                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Location_source                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InterpolationSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SnapPointFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotationFromAxes_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FRotator UCGFunctions_C::TraceForGravitySnapPoint(class USceneComponent* Rotation_Source, class USceneComponent* Location_source, float InterpolationSpeed, const struct FVector& Direction, class UObject* __WorldContext, bool* SnapPointFound, struct FVector* Offset, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "TraceForGravitySnapPoint");

	Params::UCGFunctions_C_TraceForGravitySnapPoint_Params Parms{};

	Parms.Rotation_Source = Rotation_Source;
	Parms.Location_source = Location_source;
	Parms.InterpolationSpeed = InterpolationSpeed;
	Parms.Direction = Direction;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue_1 = CallFunc_Cross_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeRotationFromAxes_ReturnValue = CallFunc_MakeRotationFromAxes_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapPointFound != nullptr)
		*SnapPointFound = Parms.SnapPointFound;

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);

	return Parms.ReturnValue;

}


// Function CGFunctions.CGFunctions_C.SnapToCustomGravityPoint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             LocationSource                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Rotation_Source                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InterpolationSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HeightOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_TransformDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TraceForGravitySnapPoint_SnapPointFound                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_TraceForGravitySnapPoint_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_TraceForGravitySnapPoint_Offset                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::SnapToCustomGravityPoint(class USceneComponent* LocationSource, class USceneComponent* Rotation_Source, float InterpolationSpeed, float HeightOffset, class UObject* __WorldContext, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_TransformDirection_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_TraceForGravitySnapPoint_SnapPointFound, const struct FRotator& CallFunc_TraceForGravitySnapPoint_ReturnValue, const struct FVector& CallFunc_TraceForGravitySnapPoint_Offset, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "SnapToCustomGravityPoint");

	Params::UCGFunctions_C_SnapToCustomGravityPoint_Params Parms{};

	Parms.LocationSource = LocationSource;
	Parms.Rotation_Source = Rotation_Source;
	Parms.InterpolationSpeed = InterpolationSpeed;
	Parms.HeightOffset = HeightOffset;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_TransformDirection_ReturnValue = CallFunc_TransformDirection_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_TraceForGravitySnapPoint_SnapPointFound = CallFunc_TraceForGravitySnapPoint_SnapPointFound;
	Parms.CallFunc_TraceForGravitySnapPoint_ReturnValue = CallFunc_TraceForGravitySnapPoint_ReturnValue;
	Parms.CallFunc_TraceForGravitySnapPoint_Offset = CallFunc_TraceForGravitySnapPoint_Offset;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGFunctions.CGFunctions_C.GetTextFromDictionary
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        Text_to_display                                                  (Edit, BlueprintVisible)
// struct FSt_Dictionary              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UCGFunctions_C::GetTextFromDictionary(class UDataTable* DataTable, class FName Key, class UObject* __WorldContext, class FText* Text, class FText Text_to_display, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetTextFromDictionary");

	Params::UCGFunctions_C_GetTextFromDictionary_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.Key = Key;
	Parms.__WorldContext = __WorldContext;
	Parms.Text_to_display = Text_to_display;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function CGFunctions.CGFunctions_C.CullSpacesFromA String
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SourceString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      Space_character                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

class FString UCGFunctions_C::CullSpacesFromA_String(const class FString& SourceString, class UObject* __WorldContext, const class FString& Space_character, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "CullSpacesFromA String");

	Params::UCGFunctions_C_CullSpacesFromA_String_Params Parms{};

	Parms.SourceString = SourceString;
	Parms.__WorldContext = __WorldContext;
	Parms.Space_character = Space_character;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGFunctions.CGFunctions_C.GetLogTextFromDictionary
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_OnscreenLogDictionaryKeysLog_dictionary_key                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FString                      Space_character                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_Dictionary              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UCGFunctions_C::GetLogTextFromDictionary(enum class Enum_OnscreenLogDictionaryKeys Log_dictionary_key, class UObject* __WorldContext, class FText* Text, const class FString& Space_character, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetLogTextFromDictionary");

	Params::UCGFunctions_C_GetLogTextFromDictionary_Params Parms{};

	Parms.Log_dictionary_key = Log_dictionary_key;
	Parms.__WorldContext = __WorldContext;
	Parms.Space_character = Space_character;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue = CallFunc_CullSpacesFromA_String_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function CGFunctions.CGFunctions_C.GetCompanionData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionDefinition        StartingData                                                     (Parm, OutParm)
// bool                               Found_in_current_data                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CurrentData                                                      (Parm, OutParm)
// struct FCompanionDefinition        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetCompanionData(class FName CompanionID, class UObject* __WorldContext, bool* Found, struct FCompanionDefinition* StartingData, bool* Found_in_current_data, struct FCompanionEntry* CurrentData, const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCompanionData");

	Params::UCGFunctions_C_GetCompanionData_Params Parms{};

	Parms.CompanionID = CompanionID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (StartingData != nullptr)
		*StartingData = std::move(Parms.StartingData);

	if (Found_in_current_data != nullptr)
		*Found_in_current_data = Parms.Found_in_current_data;

	if (CurrentData != nullptr)
		*CurrentData = std::move(Parms.CurrentData);

}


// Function CGFunctions.CGFunctions_C.GenerateBriefReportFromEvent
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInnerEvent                 InnerEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Brief                                                            (Parm, OutParm)
// struct FReportInfo                 CallFunc_GenerateReportInfo_OutInfo                              (None)
// bool                               CallFunc_GenerateReportInfo_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReportsTextsDataTableRow   CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ParseReport_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UCGFunctions_C::GenerateBriefReportFromEvent(struct FInnerEvent& InnerEvent, class UObject* __WorldContext, class FText* Brief, const struct FReportInfo& CallFunc_GenerateReportInfo_OutInfo, bool CallFunc_GenerateReportInfo_ReturnValue, const struct FReportsTextsDataTableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ParseReport_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GenerateBriefReportFromEvent");

	Params::UCGFunctions_C_GenerateBriefReportFromEvent_Params Parms{};

	Parms.InnerEvent = InnerEvent;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GenerateReportInfo_OutInfo = CallFunc_GenerateReportInfo_OutInfo;
	Parms.CallFunc_GenerateReportInfo_ReturnValue = CallFunc_GenerateReportInfo_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ParseReport_ReturnValue = CallFunc_ParseReport_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Brief != nullptr)
		*Brief = Parms.Brief;

}


// Function CGFunctions.CGFunctions_C.GetInnerEventData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 Event                                                            (Parm, OutParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInnerEvent>         CallFunc_GetActiveEvents_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInnerEvent                 CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetInnerEventData(class FName EventID, class UObject* __WorldContext, struct FInnerEvent* Event, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FInnerEvent>& CallFunc_GetActiveEvents_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInnerEvent& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetInnerEventData");

	Params::UCGFunctions_C_GetInnerEventData_Params Parms{};

	Parms.EventID = EventID;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetActiveEvents_ReturnValue = CallFunc_GetActiveEvents_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Event != nullptr)
		*Event = std::move(Parms.Event);

}


// Function CGFunctions.CGFunctions_C.GetOuterEventData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOuterEvent                 Out_Row                                                          (Parm, OutParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOuterEvent                 CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetOuterEventData(class FName EventID, class UObject* __WorldContext, struct FOuterEvent* Out_Row, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FOuterEvent& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetOuterEventData");

	Params::UCGFunctions_C_GetOuterEventData_Params Parms{};

	Parms.EventID = EventID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);

}


// Function CGFunctions.CGFunctions_C.GetCGGameMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGGameModeBase*             AsFirst_Person_Game_Mode                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGGameModeBase*             K2Node_DynamicCast_AsCGGame_Mode_Base                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetCGGameMode(class UObject* __WorldContext, class ACGGameModeBase** AsFirst_Person_Game_Mode, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACGGameModeBase* K2Node_DynamicCast_AsCGGame_Mode_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCGGameMode");

	Params::UCGFunctions_C_GetCGGameMode_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGGame_Mode_Base = K2Node_DynamicCast_AsCGGame_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFirst_Person_Game_Mode != nullptr)
		*AsFirst_Person_Game_Mode = Parms.AsFirst_Person_Game_Mode;

}


// Function CGFunctions.CGFunctions_C.LastInputWasFromGamepad
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Gamepad                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::LastInputWasFromGamepad(class UObject* __WorldContext, bool* Gamepad, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "LastInputWasFromGamepad");

	Params::UCGFunctions_C_LastInputWasFromGamepad_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue = CallFunc_GetLastInputFromGamepadCPP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Gamepad != nullptr)
		*Gamepad = Parms.Gamepad;

}


// Function CGFunctions.CGFunctions_C.GenerateReportFromEvent
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInnerEvent                 InnerEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FReportInfo                 CallFunc_GenerateReportInfo_OutInfo                              (None)
// bool                               CallFunc_GenerateReportInfo_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReportsTextsDataTableRow   CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ParseReport_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UCGFunctions_C::GenerateReportFromEvent(struct FInnerEvent& InnerEvent, class UObject* __WorldContext, const struct FReportInfo& CallFunc_GenerateReportInfo_OutInfo, bool CallFunc_GenerateReportInfo_ReturnValue, const struct FReportsTextsDataTableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ParseReport_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GenerateReportFromEvent");

	Params::UCGFunctions_C_GenerateReportFromEvent_Params Parms{};

	Parms.InnerEvent = InnerEvent;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GenerateReportInfo_OutInfo = CallFunc_GenerateReportInfo_OutInfo;
	Parms.CallFunc_GenerateReportInfo_ReturnValue = CallFunc_GenerateReportInfo_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ParseReport_ReturnValue = CallFunc_ParseReport_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CGFunctions.CGFunctions_C.GetCraftingRecipe
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RecipeID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             Recipe                                                           (Parm, OutParm)
// struct FCraftingRecipe             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetCraftingRecipe(class FName RecipeID, class UObject* __WorldContext, struct FCraftingRecipe* Recipe, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCraftingRecipe");

	Params::UCGFunctions_C_GetCraftingRecipe_Params Parms{};

	Parms.RecipeID = RecipeID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Recipe != nullptr)
		*Recipe = std::move(Parms.Recipe);

}


// Function CGFunctions.CGFunctions_C.GetItemData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NameID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  Data                                                             (Parm, OutParm)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetItemData(class FName NameID, class UObject* __WorldContext, struct FItemEntry* Data, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetItemData");

	Params::UCGFunctions_C_GetItemData_Params Parms{};

	Parms.NameID = NameID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function CGFunctions.CGFunctions_C.ItemEnumToNameID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class Enum_ItemNames          Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::ItemEnumToNameID(enum class Enum_ItemNames Enum, class UObject* __WorldContext, class FName* Name, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "ItemEnumToNameID");

	Params::UCGFunctions_C_ItemEnumToNameID_Params Parms{};

	Parms.Enum = Enum;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function CGFunctions.CGFunctions_C.GetCGGameInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           AsCGGame_Instance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetCGGameInstance(class UObject* __WorldContext, class UCGGameInstance_C** AsCGGame_Instance, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCGGameInstance");

	Params::UCGFunctions_C_GetCGGameInstance_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGGame_Instance = K2Node_DynamicCast_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsCGGame_Instance != nullptr)
		*AsCGGame_Instance = Parms.AsCGGame_Instance;

}


// Function CGFunctions.CGFunctions_C.GetCGHud
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGHUD_C*                    AsCGHUD                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGHUD_C*                    K2Node_DynamicCast_AsCGHUD                                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetCGHud(class UObject* __WorldContext, class ACGHUD_C** AsCGHUD, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class ACGHUD_C* K2Node_DynamicCast_AsCGHUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCGHud");

	Params::UCGFunctions_C_GetCGHud_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGHUD = K2Node_DynamicCast_AsCGHUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsCGHUD != nullptr)
		*AsCGHUD = Parms.AsCGHUD;

}


// Function CGFunctions.CGFunctions_C.GetCGPlayerInventory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        InventoryComponentNew                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCGFunctions_C::GetCGPlayerInventory(class UObject* __WorldContext, class UInventoryComponent2** InventoryComponentNew, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCGPlayerInventory");

	Params::UCGFunctions_C_GetCGPlayerInventory_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryComponentNew != nullptr)
		*InventoryComponentNew = Parms.InventoryComponentNew;

}


// Function CGFunctions.CGFunctions_C.GetCGPlayerCharacter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CGPlayerCharacter                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCGFunctions_C::GetCGPlayerCharacter(class UObject* __WorldContext, class ACh_Hero_00_C** CGPlayerCharacter, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGFunctions_C", "GetCGPlayerCharacter");

	Params::UCGFunctions_C_GetCGPlayerCharacter_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CGPlayerCharacter != nullptr)
		*CGPlayerCharacter = Parms.CGPlayerCharacter;

}

}


