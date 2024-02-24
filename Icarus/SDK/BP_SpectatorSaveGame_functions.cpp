#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpectatorSaveGame.BP_SpectatorSaveGame_C
// (None)

class UClass* UBP_SpectatorSaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpectatorSaveGame_C");

	return Clss;
}


// BP_SpectatorSaveGame_C BP_SpectatorSaveGame.Default__BP_SpectatorSaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SpectatorSaveGame_C* UBP_SpectatorSaveGame_C::GetDefaultObj()
{
	static class UBP_SpectatorSaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SpectatorSaveGame_C*>(UBP_SpectatorSaveGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.SetPresetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SpectatorSaveGame_C::SetPresetName(class FText PresetName, int32 Index, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpectatorSaveGame_C", "SetPresetName");

	Params::UBP_SpectatorSaveGame_C_SetPresetName_Params Parms{};

	Parms.PresetName = PresetName;
	Parms.Index = Index;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.GetPresetName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Array_Get_Item                                          (None)

class FText UBP_SpectatorSaveGame_C::GetPresetName(int32 Index, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpectatorSaveGame_C", "GetPresetName");

	Params::UBP_SpectatorSaveGame_C_GetPresetName_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.SetPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData>Preset                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SpectatorSaveGame_C::SetPreset(int32 Index, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> Preset, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpectatorSaveGame_C", "SetPreset");

	Params::UBP_SpectatorSaveGame_C_SetPreset_Params Parms{};

	Parms.Index = Index;
	Parms.Preset = Preset;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.GetPreset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData>K2Node_Select_Default                                            (None)

TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> UBP_SpectatorSaveGame_C::GetPreset(int32 Index, int32 Temp_int_Variable, TMap<TSoftClassPtr<class UWidget>, struct FFPostProcessSaveData> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpectatorSaveGame_C", "GetPreset");

	Params::UBP_SpectatorSaveGame_C_GetPreset_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


