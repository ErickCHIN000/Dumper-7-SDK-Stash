#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainMenu.BP_MainMenu_C
// (Actor)

class UClass* ABP_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainMenu_C");

	return Clss;
}


// BP_MainMenu_C BP_MainMenu.Default__BP_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainMenu_C* ABP_MainMenu_C::GetDefaultObj()
{
	static class ABP_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainMenu_C*>(ABP_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MainMenu.BP_MainMenu_C.StormMode_GetRainBP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class ABP_Rain_StormMode_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class ABP_Rain_StormMode_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::StormMode_GetRainBP(const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class ABP_Rain_StormMode_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Rain_StormMode_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "StormMode_GetRainBP");

	Params::ABP_MainMenu_C_StormMode_GetRainBP_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.SeasonalContentMenuVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldBeVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::SeasonalContentMenuVisibility(bool bShouldBeVisible, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "SeasonalContentMenuVisibility");

	Params::ABP_MainMenu_C_SeasonalContentMenuVisibility_Params Parms{};

	Parms.bShouldBeVisible = bShouldBeVisible;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.SeasonalContentMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHalloweenSeasonalContentEnabled_Return                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::SeasonalContentMenu(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsHalloweenSeasonalContentEnabled_Return, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "SeasonalContentMenu");

	Params::ABP_MainMenu_C_SeasonalContentMenu_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsHalloweenSeasonalContentEnabled_Return = CallFunc_IsHalloweenSeasonalContentEnabled_Return;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess = CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue = CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.DebugSaveSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_MainMenu_C::DebugSaveSlot(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "DebugSaveSlot");

	Params::ABP_MainMenu_C_DebugSaveSlot_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.IsLevelRefLoaded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Loaded                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWorldAssetPackageFName_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::IsLevelRefLoaded(const class FString& LevelName, bool* Loaded, class FName CallFunc_GetWorldAssetPackageFName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "IsLevelRefLoaded");

	Params::ABP_MainMenu_C_IsLevelRefLoaded_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.CallFunc_GetWorldAssetPackageFName_ReturnValue = CallFunc_GetWorldAssetPackageFName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Loaded != nullptr)
		*Loaded = Parms.Loaded;

}


// Function BP_MainMenu.BP_MainMenu_C.RequiresTitleScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WelcomeScreenEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::RequiresTitleScreen(bool* NewParam, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WelcomeScreenEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "RequiresTitleScreen");

	Params::ABP_MainMenu_C_RequiresTitleScreen_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_WelcomeScreenEnabled_ReturnValue = CallFunc_WelcomeScreenEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_MainMenu.BP_MainMenu_C.EnableMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::EnableMouseInput(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "EnableMouseInput");

	Params::ABP_MainMenu_C_EnableMouseInput_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.SetGameInfoInstanceRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::SetGameInfoInstanceRef(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "SetGameInfoInstanceRef");

	Params::ABP_MainMenu_C_SetGameInfoInstanceRef_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.GetSaveSlotName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_MainMenu_C::GetSaveSlotName(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "GetSaveSlotName");

	Params::ABP_MainMenu_C_GetSaveSlotName_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MainMenu.BP_MainMenu_C.SaveSlotFailSafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   Local_Date                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::SaveSlotFailSafe(const struct FDateTime& Local_Date)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "SaveSlotFailSafe");

	Params::ABP_MainMenu_C_SaveSlotFailSafe_Params Parms{};

	Parms.Local_Date = Local_Date;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.SetViewTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CameraFound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CameraFound                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ACameraActor*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)

void ABP_MainMenu_C::SetViewTarget(bool* CameraFound, bool Local_CameraFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClass_OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "SetViewTarget");

	Params::ABP_MainMenu_C_SetViewTarget_Params Parms{};

	Parms.Local_CameraFound = Local_CameraFound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;

	UObject::ProcessEvent(Func, &Parms);

	if (CameraFound != nullptr)
		*CameraFound = Parms.CameraFound;

}


// Function BP_MainMenu.BP_MainMenu_C.CheckAllSaves
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SaveExist                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   Local_SlotSaveTime                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Local_NewestSaveSlot                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   Local_SaveTime                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Local_PrimaryUserIndex                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SaveExist                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_DateTimeDateTime_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_DateTimeDateTime_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DateTimeDateTime_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::CheckAllSaves(bool* SaveExist, const struct FDateTime& Local_SlotSaveTime, int32 Local_NewestSaveSlot, const struct FDateTime& Local_SaveTime, int32 Local_PrimaryUserIndex, bool Local_SaveExist, bool CallFunc_Greater_DateTimeDateTime_ReturnValue, bool CallFunc_Greater_DateTimeDateTime_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_DateTimeDateTime_ReturnValue_2, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue_1, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesSaveGameExist_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue_2, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_GetPrimaryUserIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "CheckAllSaves");

	Params::ABP_MainMenu_C_CheckAllSaves_Params Parms{};

	Parms.Local_SlotSaveTime = Local_SlotSaveTime;
	Parms.Local_NewestSaveSlot = Local_NewestSaveSlot;
	Parms.Local_SaveTime = Local_SaveTime;
	Parms.Local_PrimaryUserIndex = Local_PrimaryUserIndex;
	Parms.Local_SaveExist = Local_SaveExist;
	Parms.CallFunc_Greater_DateTimeDateTime_ReturnValue = CallFunc_Greater_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_Greater_DateTimeDateTime_ReturnValue_1 = CallFunc_Greater_DateTimeDateTime_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Greater_DateTimeDateTime_ReturnValue_2 = CallFunc_Greater_DateTimeDateTime_ReturnValue_2;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue_1 = CallFunc_DHLoadGameFromSlot_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsServer_Save_Game_1 = K2Node_DynamicCast_AsServer_Save_Game_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue_2 = CallFunc_DHLoadGameFromSlot_ReturnValue_2;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_2 = CallFunc_DoesSaveGameExist_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsServer_Save_Game_2 = K2Node_DynamicCast_AsServer_Save_Game_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveExist != nullptr)
		*SaveExist = Parms.SaveExist;

}


// Function BP_MainMenu.BP_MainMenu_C.SaveGameCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LoadTitleScreen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LevelAlreadyLoaded                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelRefLoaded_loaded                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLevelRefLoaded_loaded_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelRefLoaded_loaded_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelRefLoaded_loaded_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryControllerIndex_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_1          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_2          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_3          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSaveSlotName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckAllSaves_SaveExist                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::SaveGameCheck(bool LoadTitleScreen, bool LevelAlreadyLoaded, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_IsLevelRefLoaded_loaded, bool CallFunc_IsLevelRefLoaded_loaded_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool CallFunc_IsLevelRefLoaded_loaded_2, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, bool CallFunc_IsLevelRefLoaded_loaded_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue, int32 CallFunc_GetPrimaryControllerIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_1, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_1, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_2, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_2, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_3, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_3, const class FString& CallFunc_GetSaveSlotName_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_CheckAllSaves_SaveExist, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "SaveGameCheck");

	Params::ABP_MainMenu_C_SaveGameCheck_Params Parms{};

	Parms.LoadTitleScreen = LoadTitleScreen;
	Parms.LevelAlreadyLoaded = LevelAlreadyLoaded;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_IsLevelRefLoaded_loaded = CallFunc_IsLevelRefLoaded_loaded;
	Parms.CallFunc_IsLevelRefLoaded_loaded_1 = CallFunc_IsLevelRefLoaded_loaded_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_IsLevelRefLoaded_loaded_2 = CallFunc_IsLevelRefLoaded_loaded_2;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_1 = K2Node_DynamicCast_AsDHGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_IsLevelRefLoaded_loaded_3 = CallFunc_IsLevelRefLoaded_loaded_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_2 = K2Node_DynamicCast_AsDHGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess = CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue = CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue;
	Parms.CallFunc_GetPrimaryControllerIndex_ReturnValue = CallFunc_GetPrimaryControllerIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_1 = CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_1;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_1 = CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_1;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_2 = CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_2;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_2 = CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_2;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_3 = CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_3;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_3 = CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_3;
	Parms.CallFunc_GetSaveSlotName_ReturnValue = CallFunc_GetSaveSlotName_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_CheckAllSaves_SaveExist = CallFunc_CheckAllSaves_SaveExist;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_Input_GameOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::MM_Input_GameOnly(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_Input_GameOnly");

	Params::ABP_MainMenu_C_MM_Input_GameOnly_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_Menu_FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::MM_Menu_FadeIn(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_Menu_FadeIn");

	Params::ABP_MainMenu_C_MM_Menu_FadeIn_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_Input_Game&UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::MM_Input_Game_UI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_Input_Game&UI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_CreateWidget_Storyteller
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_StorytellerTester_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::MM_CreateWidget_Storyteller(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_StorytellerTester_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_CreateWidget_Storyteller");

	Params::ABP_MainMenu_C_MM_CreateWidget_Storyteller_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_SpawnAmbientSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbientSound*               CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::MM_SpawnAmbientSound(const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAmbientSound* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_SpawnAmbientSound");

	Params::ABP_MainMenu_C_MM_SpawnAmbientSound_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_CreateWidget_Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::MM_CreateWidget_Menu(bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_MainMenu_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_CreateWidget_Menu");

	Params::ABP_MainMenu_C_MM_CreateWidget_Menu_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.MainMenu_CloseCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::MainMenu_CloseCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MainMenu_CloseCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.MainMenu_SetMenuState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_MainMenu_State     Menu_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::MainMenu_SetMenuState(enum class Enum_MainMenu_State Menu_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MainMenu_SetMenuState");

	Params::ABP_MainMenu_C_MainMenu_SetMenuState_Params Parms{};

	Parms.Menu_State = Menu_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.EscapeMenu_OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::EscapeMenu_OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "EscapeMenu_OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.EscapeMenu_OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::EscapeMenu_OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "EscapeMenu_OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_FadeIn_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::MM_FadeIn_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_FadeIn_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_FadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::MM_FadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_FadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_StartingSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::MM_StartingSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_StartingSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_FadeIn_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::MM_FadeIn_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_FadeIn_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.MM_Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::MM_Begin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MM_Begin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.Menu_FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::Menu_FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "Menu_FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.OnBrightnessConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::OnBrightnessConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "OnBrightnessConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.MainMenu_OnBrightnessConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::MainMenu_OnBrightnessConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "MainMenu_OnBrightnessConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.ShowTitleScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::ShowTitleScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "ShowTitleScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.ShowMainMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::ShowMainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "ShowMainMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.CreateControllerDisconnectDialog
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::CreateControllerDisconnectDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "CreateControllerDisconnectDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "ReceiveTick");

	Params::ABP_MainMenu_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.OnTitleScreenLoaded_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::OnTitleScreenLoaded_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "OnTitleScreenLoaded_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.OnMenuLevelLoaded_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LevelLoaded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::OnMenuLevelLoaded_Bind(bool LevelLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "OnMenuLevelLoaded_Bind");

	Params::ABP_MainMenu_C_OnMenuLevelLoaded_Bind_Params Parms{};

	Parms.LevelLoaded = LevelLoaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.OnMenuLevelLoaded_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::OnMenuLevelLoaded_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "OnMenuLevelLoaded_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.OnTitleScreenLevelLoaded_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LevelLoaded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::OnTitleScreenLevelLoaded_Bind(bool LevelLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "OnTitleScreenLevelLoaded_Bind");

	Params::ABP_MainMenu_C_OnTitleScreenLevelLoaded_Bind_Params Parms{};

	Parms.LevelLoaded = LevelLoaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.OnSeasonalContentChange_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MainMenu_C::OnSeasonalContentChange_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "OnSeasonalContentChange_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu.BP_MainMenu_C.OnSeasonalContentChange_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::OnSeasonalContentChange_Set(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "OnSeasonalContentChange_Set");

	Params::ABP_MainMenu_C_OnSeasonalContentChange_Set_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class Enum_MainMenu_State     K2Node_Event_Menu_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RequiresTitleScreen_NewParam                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCertDialog_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWorldAssetPackageFName_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetViewTarget_CameraFound                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTitleScreen_C*              CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_LevelLoaded_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetViewTarget_CameraFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_LevelLoaded                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainMenuLoadingScreen_C*    CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHalloweenTime_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MainMenu_C::ExecuteUbergraph_BP_MainMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class Enum_MainMenu_State K2Node_Event_Menu_State, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_RequiresTitleScreen_NewParam, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCertDialog_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class FName CallFunc_GetWorldAssetPackageFName_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_IsValid_ReturnValue_5, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_6, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, bool CallFunc_SetViewTarget_CameraFound, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UTitleScreen_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool K2Node_CustomEvent_LevelLoaded_1, bool CallFunc_SetViewTarget_CameraFound_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_DoesSaveGameExist_ReturnValue_1, bool K2Node_CustomEvent_LevelLoaded, class UMainMenuLoadingScreen_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_CustomEvent_Enabled, bool CallFunc_IsHalloweenTime_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_2, bool K2Node_DynamicCast_bSuccess_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_C", "ExecuteUbergraph_BP_MainMenu");

	Params::ABP_MainMenu_C_ExecuteUbergraph_BP_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Menu_State = K2Node_Event_Menu_State;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_RequiresTitleScreen_NewParam = CallFunc_RequiresTitleScreen_NewParam;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetWorldAssetPackageFName_ReturnValue = CallFunc_GetWorldAssetPackageFName_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.CallFunc_SetViewTarget_CameraFound = CallFunc_SetViewTarget_CameraFound;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_CustomEvent_LevelLoaded_1 = K2Node_CustomEvent_LevelLoaded_1;
	Parms.CallFunc_SetViewTarget_CameraFound_1 = CallFunc_SetViewTarget_CameraFound_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_1 = K2Node_DynamicCast_AsDHGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.K2Node_CustomEvent_LevelLoaded = K2Node_CustomEvent_LevelLoaded;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.CallFunc_IsHalloweenTime_ReturnValue = CallFunc_IsHalloweenTime_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess = CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue = CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_2 = K2Node_DynamicCast_AsDHGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_2 = CallFunc_GetPrimaryUserIndex_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_3 = K2Node_DynamicCast_AsDHGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


