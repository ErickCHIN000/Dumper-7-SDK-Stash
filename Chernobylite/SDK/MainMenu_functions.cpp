#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenu.MainMenu_C
// (Actor)

class UClass* AMainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenu_C");

	return Clss;
}


// MainMenu_C MainMenu.Default__MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenu_C* AMainMenu_C::GetDefaultObj()
{
	static class AMainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenu_C*>(AMainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenu.MainMenu_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> AMainMenu_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "GetObjectsToSave");

	Params::AMainMenu_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenu.MainMenu_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMainMenu_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "HasObjectsToSave");

	Params::AMainMenu_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenu.MainMenu_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMainMenu_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ShouldUpdateOverlapsOnLoad");

	Params::AMainMenu_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenu.MainMenu_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetState_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGame_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RequestControl_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::NewFunction_0(bool CallFunc_SetState_ReturnValue, bool CallFunc_SetGame_ReturnValue, bool CallFunc_RequestControl_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "NewFunction_0");

	Params::AMainMenu_C_NewFunction_0_Params Parms{};

	Parms.CallFunc_SetState_ReturnValue = CallFunc_SetState_ReturnValue;
	Parms.CallFunc_SetGame_ReturnValue = CallFunc_SetGame_ReturnValue;
	Parms.CallFunc_RequestControl_ReturnValue = CallFunc_RequestControl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.LoadCustomSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_UseCustomSaves_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::LoadCustomSave(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_UseCustomSaves_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "LoadCustomSave");

	Params::AMainMenu_C_LoadCustomSave_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_UseCustomSaves_ReturnValue = CallFunc_UseCustomSaves_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.CacheFinishedLevelSelector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Slots                                                            (Edit, BlueprintVisible)
// TArray<class FName>                AnyLevel                                                         (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomSaveGame*             K2Node_DynamicCast_AsCustom_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomSaveGamePersistentLevelCallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShippingBuild_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCustomSaves_ReturnValue                              (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetCustomSaveNames_ReturnValue                          (ReferenceParm)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenu_C::CacheFinishedLevelSelector(const TArray<class FString>& Slots, const TArray<class FName>& AnyLevel, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UCustomSaveGame* K2Node_DynamicCast_AsCustom_Save_Game, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_2, const struct FCustomSaveGamePersistentLevel& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsShippingBuild_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FString>& CallFunc_GetCustomSaves_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, TArray<class FString>& CallFunc_GetCustomSaveNames_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "CacheFinishedLevelSelector");

	Params::AMainMenu_C_CacheFinishedLevelSelector_Params Parms{};

	Parms.Slots = Slots;
	Parms.AnyLevel = AnyLevel;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustom_Save_Game = K2Node_DynamicCast_AsCustom_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_IsShippingBuild_ReturnValue = CallFunc_IsShippingBuild_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCustomSaves_ReturnValue = CallFunc_GetCustomSaves_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetCustomSaveNames_ReturnValue = CallFunc_GetCustomSaveNames_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.LoadQuickSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCustomSaveNames_ReturnValue                          (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_UseCustomSaves_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::LoadQuickSave(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FString>& CallFunc_GetCustomSaveNames_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_UseCustomSaves_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "LoadQuickSave");

	Params::AMainMenu_C_LoadQuickSave_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCustomSaveNames_ReturnValue = CallFunc_GetCustomSaveNames_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_UseCustomSaves_ReturnValue = CallFunc_UseCustomSaves_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.LoadLastCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenu_C::LoadLastCheckpoint(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "LoadLastCheckpoint");

	Params::AMainMenu_C_LoadLastCheckpoint_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.SetInputEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InputEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenu_C::SetInputEnabled(bool InputEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "SetInputEnabled");

	Params::AMainMenu_C_SetInputEnabled_Params Parms{};

	Parms.InputEnabled = InputEnabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_716313BF4FCB653B1ED82F8CDA19D68A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::Completed_716313BF4FCB653B1ED82F8CDA19D68A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_716313BF4FCB653B1ED82F8CDA19D68A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.Completed_716313BF4FCB653B1ED82F8C6E94E63D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::Completed_716313BF4FCB653B1ED82F8C6E94E63D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_716313BF4FCB653B1ED82F8C6E94E63D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.Completed_D74D6033408DDED6BA1159B4D044FEE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_D74D6033408DDED6BA1159B4D044FEE6(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_D74D6033408DDED6BA1159B4D044FEE6");

	Params::AMainMenu_C_Completed_D74D6033408DDED6BA1159B4D044FEE6_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_10E6DD3C440313B5A53534BA00B92B05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveScreenshotData         ScreenshotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void AMainMenu_C::Completed_10E6DD3C440313B5A53534BA00B92B05(const struct FSaveScreenshotData& ScreenshotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_10E6DD3C440313B5A53534BA00B92B05");

	Params::AMainMenu_C_Completed_10E6DD3C440313B5A53534BA00B92B05_Params Parms{};

	Parms.ScreenshotData = ScreenshotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_D74D6033408DDED6BA1159B464C9CE51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_D74D6033408DDED6BA1159B464C9CE51(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_D74D6033408DDED6BA1159B464C9CE51");

	Params::AMainMenu_C_Completed_D74D6033408DDED6BA1159B464C9CE51_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_10E6DD3C440313B5A53534BAB4341BB2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveScreenshotData         ScreenshotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void AMainMenu_C::Completed_10E6DD3C440313B5A53534BAB4341BB2(const struct FSaveScreenshotData& ScreenshotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_10E6DD3C440313B5A53534BAB4341BB2");

	Params::AMainMenu_C_Completed_10E6DD3C440313B5A53534BAB4341BB2_Params Parms{};

	Parms.ScreenshotData = ScreenshotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.OnFailure_A103FD6847720CC9AF7E3398403BA786
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::OnFailure_A103FD6847720CC9AF7E3398403BA786()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "OnFailure_A103FD6847720CC9AF7E3398403BA786");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.OnSuccess_A103FD6847720CC9AF7E3398403BA786
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::OnSuccess_A103FD6847720CC9AF7E3398403BA786()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "OnSuccess_A103FD6847720CC9AF7E3398403BA786");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.OnFailure_A103FD6847720CC9AF7E33988CBD8B6F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::OnFailure_A103FD6847720CC9AF7E33988CBD8B6F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "OnFailure_A103FD6847720CC9AF7E33988CBD8B6F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.OnSuccess_A103FD6847720CC9AF7E33988CBD8B6F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::OnSuccess_A103FD6847720CC9AF7E33988CBD8B6F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "OnSuccess_A103FD6847720CC9AF7E33988CBD8B6F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.Completed_83A9D72844A2E46730AD2C80B8595536
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::Completed_83A9D72844A2E46730AD2C80B8595536()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_83A9D72844A2E46730AD2C80B8595536");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.Completed_EBDAC3CE477FECE3DCD5D5AD3DFAA9B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_EBDAC3CE477FECE3DCD5D5AD3DFAA9B9(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_EBDAC3CE477FECE3DCD5D5AD3DFAA9B9");

	Params::AMainMenu_C_Completed_EBDAC3CE477FECE3DCD5D5AD3DFAA9B9_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_C97BA4ED45953AADED369AB3E0DC7DA3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_C97BA4ED45953AADED369AB3E0DC7DA3(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_C97BA4ED45953AADED369AB3E0DC7DA3");

	Params::AMainMenu_C_Completed_C97BA4ED45953AADED369AB3E0DC7DA3_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_40E19BC54EB4B7D5D18CE384F0A4AAFB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_40E19BC54EB4B7D5D18CE384F0A4AAFB(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_40E19BC54EB4B7D5D18CE384F0A4AAFB");

	Params::AMainMenu_C_Completed_40E19BC54EB4B7D5D18CE384F0A4AAFB_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_5B67EE74419CD827B6C17292CD672141
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::Completed_5B67EE74419CD827B6C17292CD672141()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_5B67EE74419CD827B6C17292CD672141");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.Completed_40E19BC54EB4B7D5D18CE384C7C929BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_40E19BC54EB4B7D5D18CE384C7C929BB(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_40E19BC54EB4B7D5D18CE384C7C929BB");

	Params::AMainMenu_C_Completed_40E19BC54EB4B7D5D18CE384C7C929BB_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_C97BA4ED45953AADED369AB34AAD6EAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_C97BA4ED45953AADED369AB34AAD6EAA(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_C97BA4ED45953AADED369AB34AAD6EAA");

	Params::AMainMenu_C_Completed_C97BA4ED45953AADED369AB34AAD6EAA_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_EBDAC3CE477FECE3DCD5D5ADC931DA84
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_EBDAC3CE477FECE3DCD5D5ADC931DA84(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_EBDAC3CE477FECE3DCD5D5ADC931DA84");

	Params::AMainMenu_C_Completed_EBDAC3CE477FECE3DCD5D5ADC931DA84_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_83A9D72844A2E46730AD2C80993BF75C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::Completed_83A9D72844A2E46730AD2C80993BF75C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_83A9D72844A2E46730AD2C80993BF75C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.Completed_83A9D72844A2E46730AD2C800CD46581
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::Completed_83A9D72844A2E46730AD2C800CD46581()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_83A9D72844A2E46730AD2C800CD46581");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.Completed_EBDAC3CE477FECE3DCD5D5AD8977990E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_EBDAC3CE477FECE3DCD5D5AD8977990E(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_EBDAC3CE477FECE3DCD5D5AD8977990E");

	Params::AMainMenu_C_Completed_EBDAC3CE477FECE3DCD5D5AD8977990E_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_C97BA4ED45953AADED369AB354514D14
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_C97BA4ED45953AADED369AB354514D14(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_C97BA4ED45953AADED369AB354514D14");

	Params::AMainMenu_C_Completed_C97BA4ED45953AADED369AB354514D14_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_40E19BC54EB4B7D5D18CE38444299A4C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_40E19BC54EB4B7D5D18CE38444299A4C(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_40E19BC54EB4B7D5D18CE38444299A4C");

	Params::AMainMenu_C_Completed_40E19BC54EB4B7D5D18CE38444299A4C_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Enter_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Enter_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Enter_K2Node_InputKeyEvent_6");

	Params::AMainMenu_C_InpActEvt_Enter_K2Node_InputKeyEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Enter_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Enter_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Enter_K2Node_InputKeyEvent_5");

	Params::AMainMenu_C_InpActEvt_Enter_K2Node_InputKeyEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Alt_NumPadFive_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Alt_NumPadFive_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Alt_NumPadFive_K2Node_InputKeyEvent_4");

	Params::AMainMenu_C_InpActEvt_Alt_NumPadFive_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_PC_Interaction_Flashlight_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_PC_Interaction_Flashlight_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_PC_Interaction_Flashlight_K2Node_InputActionEvent_21");

	Params::AMainMenu_C_InpActEvt_PC_Interaction_Flashlight_K2Node_InputActionEvent_21_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_PC_Interaction_Flashlight_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_PC_Interaction_Flashlight_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_PC_Interaction_Flashlight_K2Node_InputActionEvent_20");

	Params::AMainMenu_C_InpActEvt_PC_Interaction_Flashlight_K2Node_InputActionEvent_20_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_19");

	Params::AMainMenu_C_InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_19_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_18");

	Params::AMainMenu_C_InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_18_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_17");

	Params::AMainMenu_C_InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_17_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_16");

	Params::AMainMenu_C_InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_15");

	Params::AMainMenu_C_InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_10E6DD3C440313B5A53534BA97E273AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaveScreenshotData         ScreenshotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void AMainMenu_C::Completed_10E6DD3C440313B5A53534BA97E273AE(const struct FSaveScreenshotData& ScreenshotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_10E6DD3C440313B5A53534BA97E273AE");

	Params::AMainMenu_C_Completed_10E6DD3C440313B5A53534BA97E273AE_Params Parms{};

	Parms.ScreenshotData = ScreenshotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_D74D6033408DDED6BA1159B45F0933B7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainMenu_C::Completed_D74D6033408DDED6BA1159B45F0933B7(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_D74D6033408DDED6BA1159B45F0933B7");

	Params::AMainMenu_C_Completed_D74D6033408DDED6BA1159B45F0933B7_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_14");

	Params::AMainMenu_C_InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Shortcuts_Pause_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Shortcuts_Pause_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Shortcuts_Pause_K2Node_InputActionEvent_13");

	Params::AMainMenu_C_InpActEvt_Console_Shortcuts_Pause_K2Node_InputActionEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_PC_Shortcuts_Default_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_PC_Shortcuts_Default_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_PC_Shortcuts_Default_K2Node_InputActionEvent_12");

	Params::AMainMenu_C_InpActEvt_PC_Shortcuts_Default_K2Node_InputActionEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Alt_NumPadEight_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Alt_NumPadEight_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Alt_NumPadEight_K2Node_InputKeyEvent_3");

	Params::AMainMenu_C_InpActEvt_Alt_NumPadEight_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_11");

	Params::AMainMenu_C_InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_10");

	Params::AMainMenu_C_InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_9");

	Params::AMainMenu_C_InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_8");

	Params::AMainMenu_C_InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_7");

	Params::AMainMenu_C_InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_6");

	Params::AMainMenu_C_InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_5");

	Params::AMainMenu_C_InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_4");

	Params::AMainMenu_C_InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Ctrl+Alt_NumPadEight_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_CtrlPlusAlt_NumPadEight_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Ctrl+Alt_NumPadEight_K2Node_InputKeyEvent_2");

	Params::AMainMenu_C_InpActEvt_CtrlPlusAlt_NumPadEight_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_3");

	Params::AMainMenu_C_InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Alt_NumPadSeven_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Alt_NumPadSeven_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Alt_NumPadSeven_K2Node_InputKeyEvent_1");

	Params::AMainMenu_C_InpActEvt_Alt_NumPadSeven_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.Completed_716313BF4FCB653B1ED82F8CE3108EA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::Completed_716313BF4FCB653B1ED82F8CE3108EA5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Completed_716313BF4FCB653B1ED82F8CE3108EA5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_2");

	Params::AMainMenu_C_InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_1");

	Params::AMainMenu_C_InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_0");

	Params::AMainMenu_C_InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpActEvt_Ctrl+Alt_NumPadNine_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMainMenu_C::InpActEvt_CtrlPlusAlt_NumPadNine_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpActEvt_Ctrl+Alt_NumPadNine_K2Node_InputKeyEvent_0");

	Params::AMainMenu_C_InpActEvt_CtrlPlusAlt_NumPadNine_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.PrepareDataForSave
// (Event, Public, BlueprintEvent)
// Parameters:

void AMainMenu_C::PrepareDataForSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "PrepareDataForSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.Continue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::Continue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Continue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.New
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::New()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "New");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "Exit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.PlayerInitialized_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::PlayerInitialized_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "PlayerInitialized_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenu_C::InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_1");

	Params::AMainMenu_C_InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenu_C::InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_2(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_2");

	Params::AMainMenu_C_InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_2_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenu.MainMenu_C.LoadDayContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::LoadDayContinue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "LoadDayContinue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.TitleLogoFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::TitleLogoFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "TitleLogoFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.PropertyLinkStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::PropertyLinkStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "PropertyLinkStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ForceAchivementCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::ForceAchivementCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ForceAchivementCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.UpdateWasGameFInishedAtLeastOnce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::UpdateWasGameFInishedAtLeastOnce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "UpdateWasGameFInishedAtLeastOnce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__bp_CustomSplash2_K2Node_ActorBoundEvent_0_FPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AMainMenu_C::BndEvt__bp_CustomSplash2_K2Node_ActorBoundEvent_0_FPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__bp_CustomSplash2_K2Node_ActorBoundEvent_0_FPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.SkipIntroDialogueSubtitle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::SkipIntroDialogueSubtitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "SkipIntroDialogueSubtitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.IntroDialogStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::IntroDialogStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "IntroDialogStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.BndEvt__bp_CustomSplash_2_K2Node_ActorBoundEvent_0_FPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AMainMenu_C::BndEvt__bp_CustomSplash_2_K2Node_ActorBoundEvent_0_FPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "BndEvt__bp_CustomSplash_2_K2Node_ActorBoundEvent_0_FPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.IntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenu_C::IntroFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "IntroFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentSaveGameFileName_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_19                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_18                                   (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_17                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_16                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_15                                   (HasGetValueTypeHash)
// struct FSaveScreenshotData         K2Node_CustomEvent_ScreenshotData                                (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FSaveScreenshotData         Temp_struct_Variable_1                                           (None)
// class UChernobylGameAsyncScreenshot*CallFunc_AsyncMakeScreenshotData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameAsyncScreenshotSave*CallFunc_ChernobylGameAsyncScreenshot_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_14                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_13                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_12                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_11                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_10                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_9                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_8                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_7                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_6                                    (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_4                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_5                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// class UWid_MainMenu_TitleLogo_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_6                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class UWid_PropertyLinkDebug_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_SkipIntro_C*            CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LoadingScreen_C*        CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_7                                           (HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_20                                   (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_21                                   (HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_4                                       (HasGetValueTypeHash)
// class UChernobylGameAsyncSave*     CallFunc_ChernobylGameAsyncSave_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_8                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_9                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_10                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_11                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAchievementQueryCallbackProxy*CallFunc_CacheAchievements_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAchievementQueryCallbackProxy*CallFunc_CacheAchievements_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_8                                           (HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAchievementInfo_K2_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAchievementInfo            CallFunc_GetAchievementInfo_K2_ReturnValue                       (None)
// struct FKey                        K2Node_InputKeyEvent_Key_5                                       (HasGetValueTypeHash)
// bool                               CallFunc_GetCachedAchievementProgress_bFoundID                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCachedAchievementProgress_Progress                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPostTransitionLevelName_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveAllSave_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentSaveGameFileName_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_6                                       (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// enum class EEventMap               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FPermanentLevelInfo         CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_16                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAccurateRealTime_Seconds                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccurateRealTime_PartialSeconds                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_17                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_18                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_19                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToFile_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGame_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_20                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_21                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_22                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGame_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_23                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_24                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_25                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_26                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_27                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_28                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_2       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_29                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_12                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_30                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadGameFromFile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadGame_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_31                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_32                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_3(ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameAsyncSave*     CallFunc_ChernobylGameAsyncSave_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_33                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_34                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_3       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_13                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_35                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_36                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGame_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_37                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_38                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_39                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToFile_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGame_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_14                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_5 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_40                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_6 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAccurateRealTime_Seconds_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccurateRealTime_PartialSeconds_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_41                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_7 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameAsyncScreenshot*CallFunc_AsyncMakeScreenshotData_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_42                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_8 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSaveScreenshotData         Temp_struct_Variable_9                                           (None)
// class UChernobylGameAsyncScreenshotSave*CallFunc_ChernobylGameAsyncScreenshot_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_43                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_15                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSaveScreenshotData         K2Node_CustomEvent_ScreenshotData_1                              (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_16                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_17                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_44                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_45                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EEventMap>       CallFunc_Map_Keys_Keys_2                                         (ReferenceParm)
// bool                               Temp_bool_IsClosed_Variable_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventMap               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FPermanentLevelInfo         CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_46                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAccurateRealTime_Seconds_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccurateRealTime_PartialSeconds_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_47                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_48                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_49                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToFile_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGame_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_50                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_10                                          (ConstParm, ReferenceParm)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_51                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGame_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_52                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_53                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_4       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_54                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_55                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_4(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsGateOfMadnessMode_ReturnValue_5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_56                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChernobylGameAsyncSave*     CallFunc_ChernobylGameAsyncSave_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_5       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_57                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_58                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_5(ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class UWid_MainMenu_02_C*          CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_59                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Pause_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_60                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_61                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_62                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_63                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSaveVersion_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadGame_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGame_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameAsyncScreenshot*CallFunc_AsyncMakeScreenshotData_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSaveScreenshotData         Temp_struct_Variable_11                                          (None)
// class UChernobylGameAsyncScreenshotSave*CallFunc_ChernobylGameAsyncScreenshot_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSaveScreenshotData         K2Node_CustomEvent_ScreenshotData_2                              (None)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_18                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_64                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_65                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSaveVersion_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDataFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadDataFromSlot_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_66                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_67                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_68                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_69                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_70                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_71                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_72                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_32                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_73                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestControl_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGame_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShippingBuild_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShippingBuild_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShippingBuild_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_74                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_75                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_76                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFinishedGameAtLeastOnceMetadataOnly_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_77                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_78                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_79                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_80                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_81                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_82                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_83                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_84                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsContinueSaveGameGOM_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_85                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_86                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_MainMenu_Gamma_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_87                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_MainMenu_Gamma_C*       CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_88                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_GetPostTransitionLevelName_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_19                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_89                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_33                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChernobylGameAsyncCustomSave*CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_34                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// struct FPermanentLevelInfo         CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Success_6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMediaPlayerTrackOptions    K2Node_MakeStruct_MediaPlayerTrackOptions                        (NoDestructor, UObjectWrapper)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMediaPlayerOptions         K2Node_MakeStruct_MediaPlayerOptions                             (NoDestructor, UObjectWrapper)
// bool                               Temp_bool_IsClosed_Variable_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenSourceWithOptions_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// class UChernobylGameWaitForSave*   CallFunc_WaitForAsyncSaveGame_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_35                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_36                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_90                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_91                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_92                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_93                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_94                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_95                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_96                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_97                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_98                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_MainMenu_Gamma_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UWid_MainMenu_Gamma_C*       CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_IntroViedo_C*           CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)

void AMainMenu_C::ExecuteUbergraph_MainMenu(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetCurrentSaveGameFileName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_19, const struct FKey& K2Node_InputActionEvent_Key_18, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_17, const struct FKey& K2Node_InputActionEvent_Key_16, const struct FKey& K2Node_InputActionEvent_Key_15, const struct FSaveScreenshotData& K2Node_CustomEvent_ScreenshotData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSaveScreenshotData& Temp_struct_Variable_1, class UChernobylGameAsyncScreenshot* CallFunc_AsyncMakeScreenshotData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UChernobylGameAsyncScreenshotSave* CallFunc_ChernobylGameAsyncScreenshot_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_Success, bool Temp_bool_Variable, const struct FKey& K2Node_InputActionEvent_Key_14, const struct FKey& K2Node_InputActionEvent_Key_13, const struct FKey& K2Node_InputActionEvent_Key_12, const struct FKey& K2Node_InputKeyEvent_Key_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_11, const struct FKey& K2Node_InputActionEvent_Key_10, const struct FKey& K2Node_InputActionEvent_Key_9, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FKey& K2Node_InputActionEvent_Key_7, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& Temp_struct_Variable_4, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& Temp_struct_Variable_5, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_1, class UWid_MainMenu_TitleLogo_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_2, bool CallFunc_IsValid_ReturnValue_2, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable_6, const struct FKey& K2Node_InputKeyEvent_Key, class UWid_PropertyLinkDebug_C* CallFunc_Create_ReturnValue_1, class UWid_SkipIntro_C* CallFunc_Create_ReturnValue_2, class UWid_LoadingScreen_C* CallFunc_Create_ReturnValue_3, bool Temp_bool_Variable_1, class FName Temp_name_Variable, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_IsClosed_Variable, const struct FKey& Temp_struct_Variable_7, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputActionEvent_Key_20, bool K2Node_CustomEvent_Success_7, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_21, float CallFunc_FMax_ReturnValue, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_IsClosed_Variable_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool Temp_bool_Variable_3, float CallFunc_FMax_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool K2Node_CustomEvent_Success_8, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Has_Been_Initd_Variable_5, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_IsClosed_Variable_6, bool Temp_bool_Has_Been_Initd_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool Temp_bool_IsClosed_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_7, const struct FKey& K2Node_InputKeyEvent_Key_4, class UChernobylGameAsyncSave* CallFunc_ChernobylGameAsyncSave_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Array_Index_Variable_3, bool Temp_bool_Variable_4, bool K2Node_CustomEvent_Success_9, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool Temp_bool_IsClosed_Variable_8, bool Temp_bool_Has_Been_Initd_Variable_9, bool Temp_bool_IsClosed_Variable_9, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue_1, bool Temp_bool_IsClosed_Variable_10, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable_10, bool Temp_bool_IsClosed_Variable_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool Temp_bool_Has_Been_Initd_Variable_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue, class UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, bool CallFunc_IsValid_ReturnValue_8, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, const struct FKey& Temp_struct_Variable_8, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_GetAchievementInfo_K2_OutResult, const struct FAchievementInfo& CallFunc_GetAchievementInfo_K2_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_5, bool CallFunc_GetCachedAchievementProgress_bFoundID, float CallFunc_GetCachedAchievementProgress_Progress, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_7, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_8, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_9, class FName CallFunc_GetPostTransitionLevelName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_PermanentDataGetValue_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_10, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_11, bool CallFunc_RemoveAllSave_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_12, class FName CallFunc_GetCurrentSaveGameFileName_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_6, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_DeleteGameInSlot_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_13, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_14, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_15, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, enum class EEventMap CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const class FString& CallFunc_Conv_ByteToString_ReturnValue, const struct FPermanentLevelInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_16, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_17, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_18, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_19, bool CallFunc_SaveGameToFile_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SaveGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_20, bool CallFunc_BooleanAND_ReturnValue_1, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_21, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, bool Temp_bool_Variable_5, bool K2Node_CustomEvent_Success_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_22, bool CallFunc_SaveGame_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_23, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_24, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1, bool Temp_bool_Variable_6, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_25, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_26, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_27, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_28, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_29, bool K2Node_CustomEvent_Success_2, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, bool Temp_bool_Has_Been_Initd_Variable_12, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_30, bool CallFunc_LoadGameFromFile_ReturnValue, bool CallFunc_LoadGame_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_31, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_32, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_3, class UChernobylGameAsyncSave* CallFunc_ChernobylGameAsyncSave_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_IsValid_ReturnValue_11, bool Temp_bool_IsClosed_Variable_12, bool Temp_bool_Variable_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_33, bool Temp_bool_IsClosed_Variable_13, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_34, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_13, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_35, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue_3, bool K2Node_CustomEvent_Success_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_36, bool CallFunc_SaveGame_ReturnValue_2, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_12, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_37, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_38, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_39, bool CallFunc_SaveGameToFile_ReturnValue_1, bool CallFunc_SaveGame_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_14, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_40, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_6, int32 CallFunc_GetAccurateRealTime_Seconds_1, float CallFunc_GetAccurateRealTime_PartialSeconds_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_41, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, bool Temp_bool_IsClosed_Variable_14, class UChernobylGameAsyncScreenshot* CallFunc_AsyncMakeScreenshotData_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_42, bool CallFunc_IsValid_ReturnValue_13, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys_1, int32 CallFunc_Array_Length_ReturnValue_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, const struct FSaveScreenshotData& Temp_struct_Variable_9, class UChernobylGameAsyncScreenshotSave* CallFunc_ChernobylGameAsyncScreenshot_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_14, bool Temp_bool_IsClosed_Variable_15, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_43, bool Temp_bool_Has_Been_Initd_Variable_15, const struct FSaveScreenshotData& K2Node_CustomEvent_ScreenshotData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, bool Temp_bool_Has_Been_Initd_Variable_16, bool Temp_bool_Has_Been_Initd_Variable_17, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_5, bool Temp_bool_IsClosed_Variable_16, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_44, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_45, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys_2, bool Temp_bool_IsClosed_Variable_17, enum class EEventMap CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_ByteToString_ReturnValue_1, const struct FPermanentLevelInfo& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_46, int32 CallFunc_GetAccurateRealTime_Seconds_2, float CallFunc_GetAccurateRealTime_PartialSeconds_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_47, bool Temp_bool_Variable_8, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_48, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_49, bool CallFunc_SaveGameToFile_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_SaveGame_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_50, bool CallFunc_BooleanAND_ReturnValue_5, FDelegateProperty_ Temp_delegate_Variable_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue_4, bool K2Node_CustomEvent_Success_10, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_10, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_51, bool CallFunc_SaveGame_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_15, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_52, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_53, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_54, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_55, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_4, bool CallFunc_GetIsGateOfMadnessMode_ReturnValue_5, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_56, class UChernobylGameAsyncSave* CallFunc_ChernobylGameAsyncSave_ReturnValue_2, bool CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_16, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_57, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_58, bool Temp_bool_Variable_9, bool CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class UWid_MainMenu_02_C* CallFunc_Create_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_59, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Pause_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, bool CallFunc_IsValid_ReturnValue_17, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_60, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_61, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_62, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_63, int32 CallFunc_GetSaveVersion_ReturnValue, bool CallFunc_LoadGame_ReturnValue_1, bool CallFunc_SaveGame_ReturnValue_6, class UChernobylGameAsyncScreenshot* CallFunc_AsyncMakeScreenshotData_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_18, const struct FSaveScreenshotData& Temp_struct_Variable_11, class UChernobylGameAsyncScreenshotSave* CallFunc_ChernobylGameAsyncScreenshot_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_19, float K2Node_InputAxisEvent_AxisValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, const struct FSaveScreenshotData& K2Node_CustomEvent_ScreenshotData_2, float K2Node_InputAxisEvent_AxisValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, bool K2Node_CustomEvent_Success_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool Temp_bool_Has_Been_Initd_Variable_18, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_64, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_65, int32 CallFunc_GetSaveVersion_ReturnValue_1, bool CallFunc_LoadDataFromSlot_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_LoadDataFromSlot_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_66, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_67, bool CallFunc_IsValid_ReturnValue_20, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, bool CallFunc_BooleanAND_ReturnValue_10, bool Temp_bool_Variable_10, bool K2Node_CustomEvent_Success_11, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_BooleanAND_ReturnValue_11, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, bool Temp_bool_Variable_11, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_68, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_69, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_70, bool K2Node_SwitchEnum_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue, bool CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_23, bool CallFunc_IsValid_ReturnValue_24, float CallFunc_GetWorldDeltaSeconds_ReturnValue_5, float CallFunc_FMax_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_IsValid_ReturnValue_26, bool Temp_bool_IsClosed_Variable_18, bool CallFunc_IsValid_ReturnValue_27, bool CallFunc_IsValid_ReturnValue_28, bool CallFunc_IsValid_ReturnValue_29, bool CallFunc_IsValid_ReturnValue_30, bool CallFunc_IsValid_ReturnValue_31, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_71, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_72, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool K2Node_CustomEvent_Success_5, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_32, int32 Temp_int_Array_Index_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_73, bool CallFunc_RequestControl_ReturnValue, bool CallFunc_SetGame_ReturnValue, bool CallFunc_IsShippingBuild_ReturnValue, bool CallFunc_IsShippingBuild_ReturnValue_1, bool CallFunc_IsShippingBuild_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_74, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_75, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_76, bool CallFunc_GetFinishedGameAtLeastOnceMetadataOnly_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_77, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_78, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_79, bool CallFunc_BooleanOR_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_80, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_81, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_82, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_83, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_84, bool CallFunc_IsContinueSaveGameGOM_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_85, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_86, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, TArray<class UWid_MainMenu_Gamma_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_87, class UWid_MainMenu_Gamma_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_88, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class FName CallFunc_GetPostTransitionLevelName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_19, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_89, bool CallFunc_SetGamePaused_ReturnValue, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_33, class UChernobylGameAsyncCustomSave* CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_34, int32 Temp_int_Array_Index_Variable_7, enum class EEventMap CallFunc_Array_Get_Item_5, const class FString& CallFunc_Conv_ByteToString_ReturnValue_2, const struct FPermanentLevelInfo& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool Temp_bool_Variable_12, class FName CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, const class FString& CallFunc_Conv_NameToString_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_5, bool K2Node_CustomEvent_Success_6, const struct FMediaPlayerTrackOptions& K2Node_MakeStruct_MediaPlayerTrackOptions, bool CallFunc_SetGamePaused_ReturnValue_1, const struct FMediaPlayerOptions& K2Node_MakeStruct_MediaPlayerOptions, bool Temp_bool_IsClosed_Variable_19, bool CallFunc_OpenSourceWithOptions_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class UChernobylGameWaitForSave* CallFunc_WaitForAsyncSaveGame_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_35, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, bool CallFunc_IsValid_ReturnValue_36, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_90, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_91, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, int32 CallFunc_PostEvent_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_92, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_93, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_94, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_95, class FName K2Node_Select_Default, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_96, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_97, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_98, TArray<class UWid_MainMenu_Gamma_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UWid_MainMenu_Gamma_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UWid_IntroViedo_C* CallFunc_Create_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_C", "ExecuteUbergraph_MainMenu");

	Params::AMainMenu_C_ExecuteUbergraph_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentSaveGameFileName_ReturnValue = CallFunc_GetCurrentSaveGameFileName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_19 = K2Node_InputActionEvent_Key_19;
	Parms.K2Node_InputActionEvent_Key_18 = K2Node_InputActionEvent_Key_18;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputActionEvent_Key_17 = K2Node_InputActionEvent_Key_17;
	Parms.K2Node_InputActionEvent_Key_16 = K2Node_InputActionEvent_Key_16;
	Parms.K2Node_InputActionEvent_Key_15 = K2Node_InputActionEvent_Key_15;
	Parms.K2Node_CustomEvent_ScreenshotData = K2Node_CustomEvent_ScreenshotData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AsyncMakeScreenshotData_ReturnValue = CallFunc_AsyncMakeScreenshotData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ChernobylGameAsyncScreenshot_ReturnValue = CallFunc_ChernobylGameAsyncScreenshot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_InputActionEvent_Key_14 = K2Node_InputActionEvent_Key_14;
	Parms.K2Node_InputActionEvent_Key_13 = K2Node_InputActionEvent_Key_13;
	Parms.K2Node_InputActionEvent_Key_12 = K2Node_InputActionEvent_Key_12;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.K2Node_InputActionEvent_Key_11 = K2Node_InputActionEvent_Key_11;
	Parms.K2Node_InputActionEvent_Key_10 = K2Node_InputActionEvent_Key_10;
	Parms.K2Node_InputActionEvent_Key_9 = K2Node_InputActionEvent_Key_9;
	Parms.K2Node_InputActionEvent_Key_8 = K2Node_InputActionEvent_Key_8;
	Parms.K2Node_InputActionEvent_Key_7 = K2Node_InputActionEvent_Key_7;
	Parms.K2Node_InputActionEvent_Key_6 = K2Node_InputActionEvent_Key_6;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue = CallFunc_WaitForAsyncSaveGame_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_InputActionEvent_Key_20 = K2Node_InputActionEvent_Key_20;
	Parms.K2Node_CustomEvent_Success_7 = K2Node_CustomEvent_Success_7;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_21 = K2Node_InputActionEvent_Key_21;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1 = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.K2Node_CustomEvent_Success_8 = K2Node_CustomEvent_Success_8;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_6 = Temp_bool_IsClosed_Variable_6;
	Parms.Temp_bool_Has_Been_Initd_Variable_6 = Temp_bool_Has_Been_Initd_Variable_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_bool_IsClosed_Variable_7 = Temp_bool_IsClosed_Variable_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_7 = Temp_bool_Has_Been_Initd_Variable_7;
	Parms.K2Node_InputKeyEvent_Key_4 = K2Node_InputKeyEvent_Key_4;
	Parms.CallFunc_ChernobylGameAsyncSave_ReturnValue = CallFunc_ChernobylGameAsyncSave_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_CustomEvent_Success_9 = K2Node_CustomEvent_Success_9;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_8 = Temp_bool_Has_Been_Initd_Variable_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_bool_IsClosed_Variable_8 = Temp_bool_IsClosed_Variable_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_9 = Temp_bool_Has_Been_Initd_Variable_9;
	Parms.Temp_bool_IsClosed_Variable_9 = Temp_bool_IsClosed_Variable_9;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue_1 = CallFunc_WaitForAsyncSaveGame_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_10 = Temp_bool_IsClosed_Variable_10;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_bool_Has_Been_Initd_Variable_10 = Temp_bool_Has_Been_Initd_Variable_10;
	Parms.Temp_bool_IsClosed_Variable_11 = Temp_bool_IsClosed_Variable_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_bool_Has_Been_Initd_Variable_11 = Temp_bool_Has_Been_Initd_Variable_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue;
	Parms.CallFunc_CacheAchievements_ReturnValue = CallFunc_CacheAchievements_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_CacheAchievements_ReturnValue_1 = CallFunc_CacheAchievements_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_5 = CallFunc_GetCGGameInstance_AsCGGame_Instance_5;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_6 = CallFunc_GetCGGameInstance_AsCGGame_Instance_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetAchievementInfo_K2_OutResult = CallFunc_GetAchievementInfo_K2_OutResult;
	Parms.CallFunc_GetAchievementInfo_K2_ReturnValue = CallFunc_GetAchievementInfo_K2_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_5 = K2Node_InputKeyEvent_Key_5;
	Parms.CallFunc_GetCachedAchievementProgress_bFoundID = CallFunc_GetCachedAchievementProgress_bFoundID;
	Parms.CallFunc_GetCachedAchievementProgress_Progress = CallFunc_GetCachedAchievementProgress_Progress;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_7 = CallFunc_GetCGGameInstance_AsCGGame_Instance_7;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_8 = CallFunc_GetCGGameInstance_AsCGGame_Instance_8;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_9 = CallFunc_GetCGGameInstance_AsCGGame_Instance_9;
	Parms.CallFunc_GetPostTransitionLevelName_ReturnValue = CallFunc_GetPostTransitionLevelName_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue = CallFunc_PermanentDataGetValue_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_10 = CallFunc_GetCGGameInstance_AsCGGame_Instance_10;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_11 = CallFunc_GetCGGameInstance_AsCGGame_Instance_11;
	Parms.CallFunc_RemoveAllSave_ReturnValue = CallFunc_RemoveAllSave_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_12 = CallFunc_GetCGGameInstance_AsCGGame_Instance_12;
	Parms.CallFunc_GetCurrentSaveGameFileName_ReturnValue_1 = CallFunc_GetCurrentSaveGameFileName_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key_6 = K2Node_InputKeyEvent_Key_6;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue_1 = CallFunc_DeleteGameInSlot_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_13 = CallFunc_GetCGGameInstance_AsCGGame_Instance_13;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_14 = CallFunc_GetCGGameInstance_AsCGGame_Instance_14;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_15 = CallFunc_GetCGGameInstance_AsCGGame_Instance_15;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_Conv_ByteToString_ReturnValue = CallFunc_Conv_ByteToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_16 = CallFunc_GetCGGameInstance_AsCGGame_Instance_16;
	Parms.CallFunc_GetAccurateRealTime_Seconds = CallFunc_GetAccurateRealTime_Seconds;
	Parms.CallFunc_GetAccurateRealTime_PartialSeconds = CallFunc_GetAccurateRealTime_PartialSeconds;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_17 = CallFunc_GetCGGameInstance_AsCGGame_Instance_17;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_18 = CallFunc_GetCGGameInstance_AsCGGame_Instance_18;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_19 = CallFunc_GetCGGameInstance_AsCGGame_Instance_19;
	Parms.CallFunc_SaveGameToFile_ReturnValue = CallFunc_SaveGameToFile_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SaveGame_ReturnValue = CallFunc_SaveGame_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_20 = CallFunc_GetCGGameInstance_AsCGGame_Instance_20;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_2 = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_21 = CallFunc_GetCGGameInstance_AsCGGame_Instance_21;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue = CallFunc_GetIsGateOfMadnessMode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_CustomEvent_Success_1 = K2Node_CustomEvent_Success_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_22 = CallFunc_GetCGGameInstance_AsCGGame_Instance_22;
	Parms.CallFunc_SaveGame_ReturnValue_1 = CallFunc_SaveGame_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_3 = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_23 = CallFunc_GetCGGameInstance_AsCGGame_Instance_23;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue_1 = CallFunc_GetIsGateOfMadnessMode_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_24 = CallFunc_GetCGGameInstance_AsCGGame_Instance_24;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1 = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_1;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_25 = CallFunc_GetCGGameInstance_AsCGGame_Instance_25;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_26 = CallFunc_GetCGGameInstance_AsCGGame_Instance_26;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1 = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_1;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue_2 = CallFunc_GetIsGateOfMadnessMode_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_27 = CallFunc_GetCGGameInstance_AsCGGame_Instance_27;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_28 = CallFunc_GetCGGameInstance_AsCGGame_Instance_28;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_2 = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_29 = CallFunc_GetCGGameInstance_AsCGGame_Instance_29;
	Parms.K2Node_CustomEvent_Success_2 = K2Node_CustomEvent_Success_2;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_2 = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.Temp_bool_Has_Been_Initd_Variable_12 = Temp_bool_Has_Been_Initd_Variable_12;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_30 = CallFunc_GetCGGameInstance_AsCGGame_Instance_30;
	Parms.CallFunc_LoadGameFromFile_ReturnValue = CallFunc_LoadGameFromFile_ReturnValue;
	Parms.CallFunc_LoadGame_ReturnValue = CallFunc_LoadGame_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_31 = CallFunc_GetCGGameInstance_AsCGGame_Instance_31;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_32 = CallFunc_GetCGGameInstance_AsCGGame_Instance_32;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_3 = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_3;
	Parms.CallFunc_ChernobylGameAsyncSave_ReturnValue_1 = CallFunc_ChernobylGameAsyncSave_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.Temp_bool_IsClosed_Variable_12 = Temp_bool_IsClosed_Variable_12;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_33 = CallFunc_GetCGGameInstance_AsCGGame_Instance_33;
	Parms.Temp_bool_IsClosed_Variable_13 = Temp_bool_IsClosed_Variable_13;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_34 = CallFunc_GetCGGameInstance_AsCGGame_Instance_34;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_3 = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_13 = Temp_bool_Has_Been_Initd_Variable_13;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_35 = CallFunc_GetCGGameInstance_AsCGGame_Instance_35;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue_3 = CallFunc_GetIsGateOfMadnessMode_ReturnValue_3;
	Parms.K2Node_CustomEvent_Success_3 = K2Node_CustomEvent_Success_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_36 = CallFunc_GetCGGameInstance_AsCGGame_Instance_36;
	Parms.CallFunc_SaveGame_ReturnValue_2 = CallFunc_SaveGame_ReturnValue_2;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue_2 = CallFunc_WaitForAsyncSaveGame_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_3 = CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_37 = CallFunc_GetCGGameInstance_AsCGGame_Instance_37;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_38 = CallFunc_GetCGGameInstance_AsCGGame_Instance_38;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_39 = CallFunc_GetCGGameInstance_AsCGGame_Instance_39;
	Parms.CallFunc_SaveGameToFile_ReturnValue_1 = CallFunc_SaveGameToFile_ReturnValue_1;
	Parms.CallFunc_SaveGame_ReturnValue_3 = CallFunc_SaveGame_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_14 = Temp_bool_Has_Been_Initd_Variable_14;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_5 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_40 = CallFunc_GetCGGameInstance_AsCGGame_Instance_40;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_6 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_6;
	Parms.CallFunc_GetAccurateRealTime_Seconds_1 = CallFunc_GetAccurateRealTime_Seconds_1;
	Parms.CallFunc_GetAccurateRealTime_PartialSeconds_1 = CallFunc_GetAccurateRealTime_PartialSeconds_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_41 = CallFunc_GetCGGameInstance_AsCGGame_Instance_41;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_7 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.Temp_bool_IsClosed_Variable_14 = Temp_bool_IsClosed_Variable_14;
	Parms.CallFunc_AsyncMakeScreenshotData_ReturnValue_1 = CallFunc_AsyncMakeScreenshotData_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_42 = CallFunc_GetCGGameInstance_AsCGGame_Instance_42;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_8 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_8;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.CallFunc_ChernobylGameAsyncScreenshot_ReturnValue_1 = CallFunc_ChernobylGameAsyncScreenshot_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.Temp_bool_IsClosed_Variable_15 = Temp_bool_IsClosed_Variable_15;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_43 = CallFunc_GetCGGameInstance_AsCGGame_Instance_43;
	Parms.Temp_bool_Has_Been_Initd_Variable_15 = Temp_bool_Has_Been_Initd_Variable_15;
	Parms.K2Node_CustomEvent_ScreenshotData_1 = K2Node_CustomEvent_ScreenshotData_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.Temp_bool_Has_Been_Initd_Variable_16 = Temp_bool_Has_Been_Initd_Variable_16;
	Parms.Temp_bool_Has_Been_Initd_Variable_17 = Temp_bool_Has_Been_Initd_Variable_17;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_16 = Temp_bool_IsClosed_Variable_16;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_44 = CallFunc_GetCGGameInstance_AsCGGame_Instance_44;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_45 = CallFunc_GetCGGameInstance_AsCGGame_Instance_45;
	Parms.CallFunc_Map_Keys_Keys_2 = CallFunc_Map_Keys_Keys_2;
	Parms.Temp_bool_IsClosed_Variable_17 = Temp_bool_IsClosed_Variable_17;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_ByteToString_ReturnValue_1 = CallFunc_Conv_ByteToString_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue_3 = CallFunc_Conv_NameToString_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_46 = CallFunc_GetCGGameInstance_AsCGGame_Instance_46;
	Parms.CallFunc_GetAccurateRealTime_Seconds_2 = CallFunc_GetAccurateRealTime_Seconds_2;
	Parms.CallFunc_GetAccurateRealTime_PartialSeconds_2 = CallFunc_GetAccurateRealTime_PartialSeconds_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_47 = CallFunc_GetCGGameInstance_AsCGGame_Instance_47;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_48 = CallFunc_GetCGGameInstance_AsCGGame_Instance_48;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_49 = CallFunc_GetCGGameInstance_AsCGGame_Instance_49;
	Parms.CallFunc_SaveGameToFile_ReturnValue_2 = CallFunc_SaveGameToFile_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_SaveGame_ReturnValue_4 = CallFunc_SaveGame_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_50 = CallFunc_GetCGGameInstance_AsCGGame_Instance_50;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_4 = CallFunc_GetWorldDeltaSeconds_ReturnValue_4;
	Parms.K2Node_CustomEvent_Success_10 = K2Node_CustomEvent_Success_10;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue_3 = CallFunc_WaitForAsyncSaveGame_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_51 = CallFunc_GetCGGameInstance_AsCGGame_Instance_51;
	Parms.CallFunc_SaveGame_ReturnValue_5 = CallFunc_SaveGame_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_52 = CallFunc_GetCGGameInstance_AsCGGame_Instance_52;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue_4 = CallFunc_GetIsGateOfMadnessMode_ReturnValue_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_53 = CallFunc_GetCGGameInstance_AsCGGame_Instance_53;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_4 = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_54 = CallFunc_GetCGGameInstance_AsCGGame_Instance_54;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_55 = CallFunc_GetCGGameInstance_AsCGGame_Instance_55;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_4 = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_4;
	Parms.CallFunc_GetIsGateOfMadnessMode_ReturnValue_5 = CallFunc_GetIsGateOfMadnessMode_ReturnValue_5;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_56 = CallFunc_GetCGGameInstance_AsCGGame_Instance_56;
	Parms.CallFunc_ChernobylGameAsyncSave_ReturnValue_2 = CallFunc_ChernobylGameAsyncSave_ReturnValue_2;
	Parms.CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_5 = CallFunc_GetShouldPerformGateOfMadnessBackup_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_57 = CallFunc_GetCGGameInstance_AsCGGame_Instance_57;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_58 = CallFunc_GetCGGameInstance_AsCGGame_Instance_58;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_5 = CallFunc_GetShouldUseDefaultSaveSystemForGateOfMadness_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_59 = CallFunc_GetCGGameInstance_AsCGGame_Instance_59;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Pause_ReturnValue = CallFunc_Pause_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_60 = CallFunc_GetCGGameInstance_AsCGGame_Instance_60;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_61 = CallFunc_GetCGGameInstance_AsCGGame_Instance_61;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_62 = CallFunc_GetCGGameInstance_AsCGGame_Instance_62;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_63 = CallFunc_GetCGGameInstance_AsCGGame_Instance_63;
	Parms.CallFunc_GetSaveVersion_ReturnValue = CallFunc_GetSaveVersion_ReturnValue;
	Parms.CallFunc_LoadGame_ReturnValue_1 = CallFunc_LoadGame_ReturnValue_1;
	Parms.CallFunc_SaveGame_ReturnValue_6 = CallFunc_SaveGame_ReturnValue_6;
	Parms.CallFunc_AsyncMakeScreenshotData_ReturnValue_2 = CallFunc_AsyncMakeScreenshotData_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.CallFunc_ChernobylGameAsyncScreenshot_ReturnValue_2 = CallFunc_ChernobylGameAsyncScreenshot_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.K2Node_CustomEvent_ScreenshotData_2 = K2Node_CustomEvent_ScreenshotData_2;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.K2Node_CustomEvent_Success_4 = K2Node_CustomEvent_Success_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.Temp_bool_Has_Been_Initd_Variable_18 = Temp_bool_Has_Been_Initd_Variable_18;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_64 = CallFunc_GetCGGameInstance_AsCGGame_Instance_64;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_65 = CallFunc_GetCGGameInstance_AsCGGame_Instance_65;
	Parms.CallFunc_GetSaveVersion_ReturnValue_1 = CallFunc_GetSaveVersion_ReturnValue_1;
	Parms.CallFunc_LoadDataFromSlot_ReturnValue = CallFunc_LoadDataFromSlot_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_LoadDataFromSlot_ReturnValue_1 = CallFunc_LoadDataFromSlot_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_66 = CallFunc_GetCGGameInstance_AsCGGame_Instance_66;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_67 = CallFunc_GetCGGameInstance_AsCGGame_Instance_67;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.K2Node_CustomEvent_Success_11 = K2Node_CustomEvent_Success_11;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_4 = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_68 = CallFunc_GetCGGameInstance_AsCGGame_Instance_68;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_69 = CallFunc_GetCGGameInstance_AsCGGame_Instance_69;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_70 = CallFunc_GetCGGameInstance_AsCGGame_Instance_70;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SetCurrentCulture_ReturnValue = CallFunc_SetCurrentCulture_ReturnValue;
	Parms.CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue = CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue_4 = CallFunc_WaitForAsyncSaveGame_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_5 = CallFunc_GetWorldDeltaSeconds_ReturnValue_5;
	Parms.CallFunc_FMax_ReturnValue_2 = CallFunc_FMax_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.Temp_bool_IsClosed_Variable_18 = Temp_bool_IsClosed_Variable_18;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_71 = CallFunc_GetCGGameInstance_AsCGGame_Instance_71;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_72 = CallFunc_GetCGGameInstance_AsCGGame_Instance_72;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.K2Node_CustomEvent_Success_5 = K2Node_CustomEvent_Success_5;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_32 = CallFunc_IsValid_ReturnValue_32;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_73 = CallFunc_GetCGGameInstance_AsCGGame_Instance_73;
	Parms.CallFunc_RequestControl_ReturnValue = CallFunc_RequestControl_ReturnValue;
	Parms.CallFunc_SetGame_ReturnValue = CallFunc_SetGame_ReturnValue;
	Parms.CallFunc_IsShippingBuild_ReturnValue = CallFunc_IsShippingBuild_ReturnValue;
	Parms.CallFunc_IsShippingBuild_ReturnValue_1 = CallFunc_IsShippingBuild_ReturnValue_1;
	Parms.CallFunc_IsShippingBuild_ReturnValue_2 = CallFunc_IsShippingBuild_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_74 = CallFunc_GetCGGameInstance_AsCGGame_Instance_74;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_75 = CallFunc_GetCGGameInstance_AsCGGame_Instance_75;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_76 = CallFunc_GetCGGameInstance_AsCGGame_Instance_76;
	Parms.CallFunc_GetFinishedGameAtLeastOnceMetadataOnly_ReturnValue = CallFunc_GetFinishedGameAtLeastOnceMetadataOnly_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_77 = CallFunc_GetCGGameInstance_AsCGGame_Instance_77;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_78 = CallFunc_GetCGGameInstance_AsCGGame_Instance_78;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_79 = CallFunc_GetCGGameInstance_AsCGGame_Instance_79;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_80 = CallFunc_GetCGGameInstance_AsCGGame_Instance_80;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_81 = CallFunc_GetCGGameInstance_AsCGGame_Instance_81;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_82 = CallFunc_GetCGGameInstance_AsCGGame_Instance_82;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_83 = CallFunc_GetCGGameInstance_AsCGGame_Instance_83;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_84 = CallFunc_GetCGGameInstance_AsCGGame_Instance_84;
	Parms.CallFunc_IsContinueSaveGameGOM_ReturnValue = CallFunc_IsContinueSaveGameGOM_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_85 = CallFunc_GetCGGameInstance_AsCGGame_Instance_85;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_86 = CallFunc_GetCGGameInstance_AsCGGame_Instance_86;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_87 = CallFunc_GetCGGameInstance_AsCGGame_Instance_87;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_88 = CallFunc_GetCGGameInstance_AsCGGame_Instance_88;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.CallFunc_GetPostTransitionLevelName_ReturnValue_1 = CallFunc_GetPostTransitionLevelName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_19 = Temp_bool_Has_Been_Initd_Variable_19;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_89 = CallFunc_GetCGGameInstance_AsCGGame_Instance_89;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue_5 = CallFunc_WaitForAsyncSaveGame_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_33 = CallFunc_IsValid_ReturnValue_33;
	Parms.CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_5 = CallFunc_ChernobylGameAsyncCustomSave_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_34 = CallFunc_IsValid_ReturnValue_34;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Conv_ByteToString_ReturnValue_2 = CallFunc_Conv_ByteToString_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Conv_NameToString_ReturnValue_4 = CallFunc_Conv_NameToString_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.K2Node_CustomEvent_Success_6 = K2Node_CustomEvent_Success_6;
	Parms.K2Node_MakeStruct_MediaPlayerTrackOptions = K2Node_MakeStruct_MediaPlayerTrackOptions;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.K2Node_MakeStruct_MediaPlayerOptions = K2Node_MakeStruct_MediaPlayerOptions;
	Parms.Temp_bool_IsClosed_Variable_19 = Temp_bool_IsClosed_Variable_19;
	Parms.CallFunc_OpenSourceWithOptions_ReturnValue = CallFunc_OpenSourceWithOptions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.CallFunc_WaitForAsyncSaveGame_ReturnValue_6 = CallFunc_WaitForAsyncSaveGame_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_35 = CallFunc_IsValid_ReturnValue_35;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.CallFunc_IsValid_ReturnValue_36 = CallFunc_IsValid_ReturnValue_36;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_90 = CallFunc_GetCGGameInstance_AsCGGame_Instance_90;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_91 = CallFunc_GetCGGameInstance_AsCGGame_Instance_91;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_92 = CallFunc_GetCGGameInstance_AsCGGame_Instance_92;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_93 = CallFunc_GetCGGameInstance_AsCGGame_Instance_93;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_94 = CallFunc_GetCGGameInstance_AsCGGame_Instance_94;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_95 = CallFunc_GetCGGameInstance_AsCGGame_Instance_95;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_96 = CallFunc_GetCGGameInstance_AsCGGame_Instance_96;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_97 = CallFunc_GetCGGameInstance_AsCGGame_Instance_97;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_98 = CallFunc_GetCGGameInstance_AsCGGame_Instance_98;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;

	UObject::ProcessEvent(Func, &Parms);

}

}


