#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AudioSettings.WBP_AudioSettings_C
// (None)

class UClass* UWBP_AudioSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AudioSettings_C");

	return Clss;
}


// WBP_AudioSettings_C WBP_AudioSettings.Default__WBP_AudioSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AudioSettings_C* UWBP_AudioSettings_C::GetDefaultObj()
{
	static class UWBP_AudioSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AudioSettings_C*>(UWBP_AudioSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AudioSettings.WBP_AudioSettings_C.SetBossSoundtrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AudioSettings_C::SetBossSoundtrack(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "SetBossSoundtrack");

	Params::UWBP_AudioSettings_C_SetBossSoundtrack_Params Parms{};

	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack = CallFunc_GetBossSoundtrackType_Soundtrack;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.SetBossSoundtrack_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_AudioSettings_C::SetBossSoundtrack_Text(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "SetBossSoundtrack_Text");

	Params::UWBP_AudioSettings_C_SetBossSoundtrack_Text_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack = CallFunc_GetBossSoundtrackType_Soundtrack;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.SetBossSoundtrackAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMusicDLCAvailable_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMusicDLCEnabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AudioSettings_C::SetBossSoundtrackAvailability(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_IsMusicDLCAvailable_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetMusicDLCEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "SetBossSoundtrackAvailability");

	Params::UWBP_AudioSettings_C_SetBossSoundtrackAvailability_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_IsMusicDLCAvailable_ReturnValue = CallFunc_IsMusicDLCAvailable_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMusicDLCEnabled_ReturnValue = CallFunc_GetMusicDLCEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.GetTexts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTextBlock*>          Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_AudioSettings_C::GetTexts(TArray<class UTextBlock*>* Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "GetTexts");

	Params::UWBP_AudioSettings_C_GetTexts_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.ResetSpinBoxes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AudioSettings_C::ResetSpinBoxes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, int32 CallFunc_Array_Length_ReturnValue, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "ResetSpinBoxes");

	Params::UWBP_AudioSettings_C_ResetSpinBoxes_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSpinBoxes_Array = CallFunc_GetSpinBoxes_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.GetSpinBoxes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USpinBox*>            Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USpinBox*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_AudioSettings_C::GetSpinBoxes(TArray<class USpinBox*>* Array, TArray<class USpinBox*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "GetSpinBoxes");

	Params::UWBP_AudioSettings_C_GetSpinBoxes_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.ApplySpinBoxValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              SpinBoxValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              UseNavigation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseSpinBox                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWBP_AudioSettings_C::ApplySpinBoxValue(float SpinBoxValue, float UseNavigation, bool UseSpinBox, bool Temp_bool_Variable, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "ApplySpinBoxValue");

	Params::UWBP_AudioSettings_C_ApplySpinBoxValue_Params Parms{};

	Parms.SpinBoxValue = SpinBoxValue;
	Parms.UseNavigation = UseNavigation;
	Parms.UseSpinBox = UseSpinBox;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.CanChangeVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_AudioVolumes       Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWBP_AudioSettings_C::CanChangeVolume(enum class Enum_AudioVolumes Volume, int32 Index, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "CanChangeVolume");

	Params::UWBP_AudioSettings_C_CanChangeVolume_Params Parms{};

	Parms.Volume = Volume;
	Parms.Index = Index;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.AddVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWBP_AudioSettings_C::AddVolume(float Target, float Delta, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "AddVolume");

	Params::UWBP_AudioSettings_C_AddVolume_Params Parms{};

	Parms.Target = Target;
	Parms.Delta = Delta;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.SetSliderTextValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  TextValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWBP_AudioSettings_C::SetSliderTextValue(class UTextBlock* TextValue, float Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "SetSliderTextValue");

	Params::UWBP_AudioSettings_C_SetSliderTextValue_Params Parms{};

	Parms.TextValue = TextValue;
	Parms.Value = Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.SetSliderVolumeDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpinBox*                    SpinBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  TextValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWBP_AudioSettings_C::SetSliderVolumeDetails(class USpinBox* SpinBox, class UTextBlock* TextValue, float Value, float CallFunc_MapRangeClamped_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "SetSliderVolumeDetails");

	Params::UWBP_AudioSettings_C_SetSliderVolumeDetails_Params Parms{};

	Parms.SpinBox = SpinBox;
	Parms.TextValue = TextValue;
	Parms.Value = Value;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.SetGameInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::SetGameInstance(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "SetGameInstance");

	Params::UWBP_AudioSettings_C_SetGameInstance_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.GetCurrentSlider
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_AudioVolumes       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_AudioVolumes UWBP_AudioSettings_C::GetCurrentSlider(int32 Temp_int_Variable, enum class Enum_AudioVolumes Temp_byte_Variable, enum class Enum_AudioVolumes Temp_byte_Variable_1, enum class Enum_AudioVolumes Temp_byte_Variable_2, enum class Enum_AudioVolumes Temp_byte_Variable_3, enum class Enum_AudioVolumes Temp_byte_Variable_4, enum class Enum_AudioVolumes Temp_byte_Variable_5, enum class Enum_AudioVolumes K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "GetCurrentSlider");

	Params::UWBP_AudioSettings_C_GetCurrentSlider_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.SetArrays
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_AudioSettings_C::SetArrays(TArray<class UButton*>& K2Node_MakeArray_Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array_1, TArray<class UTextBlock*>& K2Node_MakeArray_Array_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "SetArrays");

	Params::UWBP_AudioSettings_C_SetArrays_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.VolumeAdjust
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_AudioVolumes       Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseSpinBox                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseSpinBox                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Volumes             Local_AudioVolumes                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       Local_Select                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanChangeVolume_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanChangeVolume_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddVolume_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplySpinBoxValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanChangeVolume_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddVolume_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplySpinBoxValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanChangeVolume_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddVolume_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplySpinBoxValue_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanChangeVolume_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddVolume_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplySpinBoxValue_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanChangeVolume_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AddVolume_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplySpinBoxValue_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddVolume_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplySpinBoxValue_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::VolumeAdjust(enum class Enum_AudioVolumes Select, float Delta, bool UseSpinBox, bool Local_UseSpinBox, float Local_Delta, const struct FStruct_Volumes& Local_AudioVolumes, enum class Enum_AudioVolumes Local_Select, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_CanChangeVolume_ReturnValue, bool CallFunc_CanChangeVolume_ReturnValue_1, float CallFunc_AddVolume_ReturnValue, float CallFunc_ApplySpinBoxValue_ReturnValue, bool CallFunc_CanChangeVolume_ReturnValue_2, float CallFunc_AddVolume_ReturnValue_1, float CallFunc_ApplySpinBoxValue_ReturnValue_1, bool CallFunc_CanChangeVolume_ReturnValue_3, float CallFunc_AddVolume_ReturnValue_2, float CallFunc_ApplySpinBoxValue_ReturnValue_2, float K2Node_Select_Default, bool CallFunc_CanChangeVolume_ReturnValue_4, float CallFunc_AddVolume_ReturnValue_3, float CallFunc_ApplySpinBoxValue_ReturnValue_3, float K2Node_Select_Default_1, bool CallFunc_CanChangeVolume_ReturnValue_5, float CallFunc_AddVolume_ReturnValue_4, float CallFunc_ApplySpinBoxValue_ReturnValue_4, float K2Node_Select_Default_2, bool Temp_bool_Variable_4, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default_3, bool Temp_bool_Variable_5, float K2Node_Select_Default_4, float CallFunc_AddVolume_ReturnValue_5, float CallFunc_ApplySpinBoxValue_ReturnValue_5, float K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "VolumeAdjust");

	Params::UWBP_AudioSettings_C_VolumeAdjust_Params Parms{};

	Parms.Select = Select;
	Parms.Delta = Delta;
	Parms.UseSpinBox = UseSpinBox;
	Parms.Local_UseSpinBox = Local_UseSpinBox;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_AudioVolumes = Local_AudioVolumes;
	Parms.Local_Select = Local_Select;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_CanChangeVolume_ReturnValue = CallFunc_CanChangeVolume_ReturnValue;
	Parms.CallFunc_CanChangeVolume_ReturnValue_1 = CallFunc_CanChangeVolume_ReturnValue_1;
	Parms.CallFunc_AddVolume_ReturnValue = CallFunc_AddVolume_ReturnValue;
	Parms.CallFunc_ApplySpinBoxValue_ReturnValue = CallFunc_ApplySpinBoxValue_ReturnValue;
	Parms.CallFunc_CanChangeVolume_ReturnValue_2 = CallFunc_CanChangeVolume_ReturnValue_2;
	Parms.CallFunc_AddVolume_ReturnValue_1 = CallFunc_AddVolume_ReturnValue_1;
	Parms.CallFunc_ApplySpinBoxValue_ReturnValue_1 = CallFunc_ApplySpinBoxValue_ReturnValue_1;
	Parms.CallFunc_CanChangeVolume_ReturnValue_3 = CallFunc_CanChangeVolume_ReturnValue_3;
	Parms.CallFunc_AddVolume_ReturnValue_2 = CallFunc_AddVolume_ReturnValue_2;
	Parms.CallFunc_ApplySpinBoxValue_ReturnValue_2 = CallFunc_ApplySpinBoxValue_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CanChangeVolume_ReturnValue_4 = CallFunc_CanChangeVolume_ReturnValue_4;
	Parms.CallFunc_AddVolume_ReturnValue_3 = CallFunc_AddVolume_ReturnValue_3;
	Parms.CallFunc_ApplySpinBoxValue_ReturnValue_3 = CallFunc_ApplySpinBoxValue_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_CanChangeVolume_ReturnValue_5 = CallFunc_CanChangeVolume_ReturnValue_5;
	Parms.CallFunc_AddVolume_ReturnValue_4 = CallFunc_AddVolume_ReturnValue_4;
	Parms.CallFunc_ApplySpinBoxValue_ReturnValue_4 = CallFunc_ApplySpinBoxValue_ReturnValue_4;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_AddVolume_ReturnValue_5 = CallFunc_AddVolume_ReturnValue_5;
	Parms.CallFunc_ApplySpinBoxValue_ReturnValue_5 = CallFunc_ApplySpinBoxValue_ReturnValue_5;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.SetVolumes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpinBox*                    Local_SpinBox                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTextBlock*>          CallFunc_GetTexts_Array                                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::SetVolumes(int32 Local_Index, class USpinBox* Local_SpinBox, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UTextBlock*>& CallFunc_GetTexts_Array, class UTextBlock* CallFunc_Array_Get_Item, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, class USpinBox* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "SetVolumes");

	Params::UWBP_AudioSettings_C_SetVolumes_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.Local_SpinBox = Local_SpinBox;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTexts_Array = CallFunc_GetTexts_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSpinBoxes_Array = CallFunc_GetSpinBoxes_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.SetAudioQuality
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioQualityLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_AudioSettings_C::SetAudioQuality(int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "SetAudioQuality");

	Params::UWBP_AudioSettings_C_SetAudioQuality_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioQualityLevel_ReturnValue = CallFunc_GetAudioQualityLevel_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.UI_Sound_Navigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::UI_Sound_Navigate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "UI_Sound_Navigate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.ResetButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UTextBlock*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AudioSettings_C::ResetButtons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UTextBlock* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UTextBlock* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, class UButton* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "ResetButtons");

	Params::UWBP_AudioSettings_C_ResetButtons_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.GetTextColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

struct FSlateColor UWBP_AudioSettings_C::GetTextColor(int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "GetTextColor");

	Params::UWBP_AudioSettings_C_GetTextColor_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.AudioQuality_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioQualityLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::AudioQuality_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "AudioQuality_Right");

	Params::UWBP_AudioSettings_C_AudioQuality_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioQualityLevel_ReturnValue = CallFunc_GetAudioQualityLevel_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.AudioQuality_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAudioQualityLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::AudioQuality_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "AudioQuality_Left");

	Params::UWBP_AudioSettings_C_AudioQuality_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAudioQualityLevel_ReturnValue = CallFunc_GetAudioQualityLevel_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_AudioSettings_C::GetIndex(int32 Delta, int32 SelectedIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "GetIndex");

	Params::UWBP_AudioSettings_C_GetIndex_Params Parms{};

	Parms.Delta = Delta;
	Parms.SelectedIndex = SelectedIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.Set Navigation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_SelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Hovering                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndex_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array_1                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetTextColor_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AudioSettings_C::Set_Navigation(bool Hovering, bool CustomIndex, int32 Index, int32 Delta, int32 Local_Delta, int32 Local_SelectedIndex, bool Local_CustomIndex, bool Local_Hovering, int32 Local_Index, class UButton* Local_Button, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, int32 CallFunc_Subtract_IntInt_ReturnValue, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array_1, class USpinBox* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& CallFunc_GetTextColor_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, class UButton* CallFunc_Array_Get_Item_2, class UTextBlock* CallFunc_Array_Get_Item_3, class UTextBlock* CallFunc_Array_Get_Item_4, class UButton* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "Set Navigation");

	Params::UWBP_AudioSettings_C_Set_Navigation_Params Parms{};

	Parms.Hovering = Hovering;
	Parms.CustomIndex = CustomIndex;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SelectedIndex = Local_SelectedIndex;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_Hovering = Local_Hovering;
	Parms.Local_Index = Local_Index;
	Parms.Local_Button = Local_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetIndex_ReturnValue = CallFunc_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSpinBoxes_Array = CallFunc_GetSpinBoxes_Array;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetSpinBoxes_Array_1 = CallFunc_GetSpinBoxes_Array_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTextColor_ReturnValue = CallFunc_GetTextColor_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.LoadValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::LoadValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "LoadValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_AudioSettings_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "PreConstruct");

	Params::UWBP_AudioSettings_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.ChangeValueLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::ChangeValueLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "ChangeValueLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.ChangeValueRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::ChangeValueRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "ChangeValueRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.Navigate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::Navigate(bool CustomIndex, int32 Index, int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "Navigate");

	Params::UWBP_AudioSettings_C_Navigate_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.Index = Index;
	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__SpinBox_MasterVolume_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::BndEvt__SpinBox_MasterVolume_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__SpinBox_MasterVolume_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_AudioSettings_C_BndEvt__SpinBox_MasterVolume_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__SpinBox_EffectsVolume_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::BndEvt__SpinBox_EffectsVolume_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__SpinBox_EffectsVolume_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_AudioSettings_C_BndEvt__SpinBox_EffectsVolume_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__SpinBox_MusicVolume_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::BndEvt__SpinBox_MusicVolume_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__SpinBox_MusicVolume_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_AudioSettings_C_BndEvt__SpinBox_MusicVolume_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__SpinBox_DialogueVolume_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::BndEvt__SpinBox_DialogueVolume_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__SpinBox_DialogueVolume_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_AudioSettings_C_BndEvt__SpinBox_DialogueVolume_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__SpinBox_AmbientVolume_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::BndEvt__SpinBox_AmbientVolume_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__SpinBox_AmbientVolume_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_AudioSettings_C_BndEvt__SpinBox_AmbientVolume_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__SpinBox_UIVolume_K2Node_ComponentBoundEvent_9_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::BndEvt__SpinBox_UIVolume_K2Node_ComponentBoundEvent_9_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__SpinBox_UIVolume_K2Node_ComponentBoundEvent_9_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_AudioSettings_C_BndEvt__SpinBox_UIVolume_K2Node_ComponentBoundEvent_9_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.OnOpen_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::OnOpen_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "OnOpen_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Right_BossSoundtrack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Right_BossSoundtrack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Right_BossSoundtrack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Left_BossSoundtrack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Left_BossSoundtrack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Left_BossSoundtrack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Right_DialogueVolume_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Right_DialogueVolume_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Right_DialogueVolume_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Left_DialogueVolume_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Left_DialogueVolume_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Left_DialogueVolume_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__HandleRight_Audio_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__HandleRight_Audio_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__HandleRight_Audio_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__HandleLeft_Audio_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__HandleLeft_Audio_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__HandleLeft_Audio_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Right_MusicVolume_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Right_MusicVolume_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Right_MusicVolume_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Left_MusicVolume_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Left_MusicVolume_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Left_MusicVolume_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Right_EffectsVolume_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Right_EffectsVolume_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Right_EffectsVolume_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Left_EffectsVolume_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Left_EffectsVolume_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Left_EffectsVolume_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_5_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Right_MasterVolume_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Right_MasterVolume_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Right_MasterVolume_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Left_MasterVolume_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Left_MasterVolume_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Left_MasterVolume_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_BossSoundtrack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_BossSoundtrack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_BossSoundtrack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_DialogueVolume_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_DialogueVolume_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_DialogueVolume_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_UIVolume_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_UIVolume_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_UIVolume_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_AmbientVolume_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_AmbientVolume_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_AmbientVolume_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_MusicVolume_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_MusicVolume_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_MusicVolume_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_EffectsVolume_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_EffectsVolume_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_EffectsVolume_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_MasterVolume_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_MasterVolume_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_MasterVolume_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Audio_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Audio_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_BossSoundtrack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_BossSoundtrack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_BossSoundtrack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_DialogueVolume_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_DialogueVolume_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_DialogueVolume_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_UIVolume_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_UIVolume_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_UIVolume_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_AmbientVolume_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_AmbientVolume_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_AmbientVolume_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_MusicVolume_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_MusicVolume_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_MusicVolume_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_EffectsVolume_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_EffectsVolume_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_EffectsVolume_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_MasterVolume_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_MasterVolume_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_MasterVolume_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.BndEvt__Button_Audio_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_AudioSettings_C::BndEvt__Button_Audio_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "BndEvt__Button_Audio_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AudioSettings.WBP_AudioSettings_C.ExecuteUbergraph_WBP_AudioSettings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       CallFunc_GetCurrentSlider_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AudioVolumes       CallFunc_GetCurrentSlider_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_CustomIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Delta                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioSettings_C::ExecuteUbergraph_WBP_AudioSettings(int32 EntryPoint, float K2Node_ComponentBoundEvent_InValue_5, enum class Enum_AudioVolumes CallFunc_GetCurrentSlider_ReturnValue, float K2Node_ComponentBoundEvent_InValue_4, enum class Enum_AudioVolumes CallFunc_GetCurrentSlider_ReturnValue_1, float K2Node_ComponentBoundEvent_InValue_3, float K2Node_ComponentBoundEvent_InValue_2, float K2Node_ComponentBoundEvent_InValue_1, float K2Node_ComponentBoundEvent_InValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_2, bool CallFunc_HasAnyUserFocus_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_HasAnyUserFocus_ReturnValue_4, bool K2Node_Event_IsDesignTime, bool CallFunc_HasAnyUserFocus_ReturnValue_5, bool K2Node_CustomEvent_CustomIndex, int32 K2Node_CustomEvent_Index, int32 K2Node_CustomEvent_Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AudioSettings_C", "ExecuteUbergraph_WBP_AudioSettings");

	Params::UWBP_AudioSettings_C_ExecuteUbergraph_WBP_AudioSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_InValue_5 = K2Node_ComponentBoundEvent_InValue_5;
	Parms.CallFunc_GetCurrentSlider_ReturnValue = CallFunc_GetCurrentSlider_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_InValue_4 = K2Node_ComponentBoundEvent_InValue_4;
	Parms.CallFunc_GetCurrentSlider_ReturnValue_1 = CallFunc_GetCurrentSlider_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_InValue_3 = K2Node_ComponentBoundEvent_InValue_3;
	Parms.K2Node_ComponentBoundEvent_InValue_2 = K2Node_ComponentBoundEvent_InValue_2;
	Parms.K2Node_ComponentBoundEvent_InValue_1 = K2Node_ComponentBoundEvent_InValue_1;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_1 = CallFunc_HasAnyUserFocus_ReturnValue_1;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_2 = CallFunc_HasAnyUserFocus_ReturnValue_2;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_3 = CallFunc_HasAnyUserFocus_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_4 = CallFunc_HasAnyUserFocus_ReturnValue_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_5 = CallFunc_HasAnyUserFocus_ReturnValue_5;
	Parms.K2Node_CustomEvent_CustomIndex = K2Node_CustomEvent_CustomIndex;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;

	UObject::ProcessEvent(Func, &Parms);

}

}


