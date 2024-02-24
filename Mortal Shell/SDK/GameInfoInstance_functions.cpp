#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameInfoInstance.GameInfoInstance_C
// (None)

class UClass* UGameInfoInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameInfoInstance_C");

	return Clss;
}


// GameInfoInstance_C GameInfoInstance.Default__GameInfoInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameInfoInstance_C* UGameInfoInstance_C::GetDefaultObj()
{
	static class UGameInfoInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameInfoInstance_C*>(UGameInfoInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_GetGiveFullHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::StormMode_GetGiveFullHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_GetGiveFullHealth");

	Params::UGameInfoInstance_C_StormMode_GetGiveFullHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_GetLastSaveSlotIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_GetLastSaveSlotIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_GetLastSaveSlotIndex");

	Params::UGameInfoInstance_C_StormMode_GetLastSaveSlotIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GameInfoInstance.GameInfoInstance_C.TwitchDrop_HasAnySkin
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SkinIDToDropID_DropID                                   (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDHTwitchDrop               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::TwitchDrop_HasAnySkin(int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_SkinIDToDropID_DropID, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "TwitchDrop_HasAnySkin");

	Params::UGameInfoInstance_C_TwitchDrop_HasAnySkin_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_SkinIDToDropID_DropID = CallFunc_SkinIDToDropID_DropID;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.TwitchDrop_CheckIfAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Skins              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TwitchDrop_HasClaimedForSlot_HasClaimed_                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::TwitchDrop_CheckIfAvailable(enum class Enum_Skins ID, bool CallFunc_TwitchDrop_HasClaimedForSlot_HasClaimed_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "TwitchDrop_CheckIfAvailable");

	Params::UGameInfoInstance_C_TwitchDrop_CheckIfAvailable_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_TwitchDrop_HasClaimedForSlot_HasClaimed_ = CallFunc_TwitchDrop_HasClaimedForSlot_HasClaimed_;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Notify_RunicFam_GetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_VisibilityVisibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_Notify_RunicFam_GetVisibility(enum class Enum_Notify_StormMode_Visibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Notify_RunicFam_GetVisibility");

	Params::UGameInfoInstance_C_StormMode_Notify_RunicFam_GetVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Notify_RunicFam_GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_DurationDuration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_Notify_RunicFam_GetDuration(enum class Enum_Notify_StormMode_Duration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Notify_RunicFam_GetDuration");

	Params::UGameInfoInstance_C_StormMode_Notify_RunicFam_GetDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Notify_Instinct_GetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_VisibilityVisibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_Notify_Instinct_GetVisibility(enum class Enum_Notify_StormMode_Visibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Notify_Instinct_GetVisibility");

	Params::UGameInfoInstance_C_StormMode_Notify_Instinct_GetVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Notify_Instinct_GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_DurationDuration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_Notify_Instinct_GetDuration(enum class Enum_Notify_StormMode_Duration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Notify_Instinct_GetDuration");

	Params::UGameInfoInstance_C_StormMode_Notify_Instinct_GetDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInfoInstance.GameInfoInstance_C.GetNewGamePlusLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UGameInfoInstance_C::GetNewGamePlusLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetNewGamePlusLevel");

	Params::UGameInfoInstance_C_GetNewGamePlusLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_GetDifficulty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UGameInfoInstance_C::StormMode_GetDifficulty(int32 Temp_int_Variable, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_GetDifficulty");

	Params::UGameInfoInstance_C_StormMode_GetDifficulty_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_IsUnlockedForSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unlocked_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::StormMode_IsUnlockedForSlot(bool* Unlocked_, int32 Temp_int_Variable, bool Temp_bool_Variable, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_IsUnlockedForSlot");

	Params::UGameInfoInstance_C_StormMode_IsUnlockedForSlot_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Unlocked_ != nullptr)
		*Unlocked_ = Parms.Unlocked_;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_GetIsTesting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Testing_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TestEnemies_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::StormMode_GetIsTesting(bool* Testing_, bool* TestEnemies_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_GetIsTesting");

	Params::UGameInfoInstance_C_StormMode_GetIsTesting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Testing_ != nullptr)
		*Testing_ = Parms.Testing_;

	if (TestEnemies_ != nullptr)
		*TestEnemies_ = Parms.TestEnemies_;

}


// Function GameInfoInstance.GameInfoInstance_C.GetCurrentSaveSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetCurrentSaveSlot(int32* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetCurrentSaveSlot");

	Params::UGameInfoInstance_C_GetCurrentSaveSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_GetHasJustStartedRun?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::StormMode_GetHasJustStartedRun_(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_GetHasJustStartedRun?");

	Params::UGameInfoInstance_C_StormMode_GetHasJustStartedRun__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_GetEnteredState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Slot_1                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Slot_2                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Slot_3                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::StormMode_GetEnteredState(bool* Slot_1, bool* Slot_2, bool* Slot_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_GetEnteredState");

	Params::UGameInfoInstance_C_StormMode_GetEnteredState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Slot_1 != nullptr)
		*Slot_1 = Parms.Slot_1;

	if (Slot_2 != nullptr)
		*Slot_2 = Parms.Slot_2;

	if (Slot_3 != nullptr)
		*Slot_3 = Parms.Slot_3;

}


// Function GameInfoInstance.GameInfoInstance_C.GetDebugXboxSerieSOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Debug                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetDebugXboxSerieSOption(bool* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetDebugXboxSerieSOption");

	Params::UGameInfoInstance_C_GetDebugXboxSerieSOption_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

}


// Function GameInfoInstance.GameInfoInstance_C.GetXboxSType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_XboxS_Type         Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetXboxSType(enum class Enum_XboxS_Type* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetXboxSType");

	Params::UGameInfoInstance_C_GetXboxSType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_GetHasEnteredOnce
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasEnteredOnce                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_IsStormMode         SlotsData                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::StormMode_GetHasEnteredOnce(bool* HasEnteredOnce, struct FStruct_IsStormMode* SlotsData, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_GetHasEnteredOnce");

	Params::UGameInfoInstance_C_StormMode_GetHasEnteredOnce_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (HasEnteredOnce != nullptr)
		*HasEnteredOnce = Parms.HasEnteredOnce;

	if (SlotsData != nullptr)
		*SlotsData = std::move(Parms.SlotsData);

}


// Function GameInfoInstance.GameInfoInstance_C.GetHapticFeedback_Intensity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetHapticFeedback_Intensity(float* Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetHapticFeedback_Intensity");

	Params::UGameInfoInstance_C_GetHapticFeedback_Intensity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Intensity != nullptr)
		*Intensity = Parms.Intensity;

}


// Function GameInfoInstance.GameInfoInstance_C.GetDualSenseAudio_Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetDualSenseAudio_Enabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetDualSenseAudio_Enabled");

	Params::UGameInfoInstance_C_GetDualSenseAudio_Enabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function GameInfoInstance.GameInfoInstance_C.GetAdaptiveTriggersEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_AdaptiveTriggers_EnabledEnableType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetAdaptiveTriggersEnabled(enum class Enum_AdaptiveTriggers_Enabled* EnableType, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetAdaptiveTriggersEnabled");

	Params::UGameInfoInstance_C_GetAdaptiveTriggersEnabled_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EnableType != nullptr)
		*EnableType = Parms.EnableType;

}


// Function GameInfoInstance.GameInfoInstance_C.GetDebugDualSenseAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::GetDebugDualSenseAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetDebugDualSenseAudio");

	Params::UGameInfoInstance_C_GetDebugDualSenseAudio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.StormModeContentIsEnabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormModeContentIsEnabled(bool* Enabled_, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormModeContentIsEnabled");

	Params::UGameInfoInstance_C_StormModeContentIsEnabled_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue_1 = CallFunc_Conv_BoolToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled_ != nullptr)
		*Enabled_ = Parms.Enabled_;

}


// Function GameInfoInstance.GameInfoInstance_C.StormModeIsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::StormModeIsActive(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormModeIsActive");

	Params::UGameInfoInstance_C_StormModeIsActive_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetHideSacredGland
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetHideSacredGland(bool* Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetHideSacredGland");

	Params::UGameInfoInstance_C_GetHideSacredGland_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Hidden_ != nullptr)
		*Hidden_ = Parms.Hidden_;

}


// Function GameInfoInstance.GameInfoInstance_C.GetHideTarnishedSeal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetHideTarnishedSeal(bool* Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetHideTarnishedSeal");

	Params::UGameInfoInstance_C_GetHideTarnishedSeal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Hidden_ != nullptr)
		*Hidden_ = Parms.Hidden_;

}


// Function GameInfoInstance.GameInfoInstance_C.GetUIScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_HUD_Size UGameInfoInstance_C::GetUIScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetUIScale");

	Params::UGameInfoInstance_C_GetUIScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetRadialBlur
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::GetRadialBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetRadialBlur");

	Params::UGameInfoInstance_C_GetRadialBlur_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetCutsceneAspectRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::GetCutsceneAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetCutsceneAspectRatio");

	Params::UGameInfoInstance_C_GetCutsceneAspectRatio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetSaveRestoreEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::GetSaveRestoreEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetSaveRestoreEnabled");

	Params::UGameInfoInstance_C_GetSaveRestoreEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetPhotoModeEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetPhotoModeEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetPhotoModeEnabled");

	Params::UGameInfoInstance_C_GetPhotoModeEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function GameInfoInstance.GameInfoInstance_C.GetFoundlingMenuEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetFoundlingMenuEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetFoundlingMenuEnabled");

	Params::UGameInfoInstance_C_GetFoundlingMenuEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function GameInfoInstance.GameInfoInstance_C.GetSeasonalContentButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::GetSeasonalContentButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetSeasonalContentButton");

	Params::UGameInfoInstance_C_GetSeasonalContentButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetSeasonalContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::GetSeasonalContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetSeasonalContent");

	Params::UGameInfoInstance_C_GetSeasonalContent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetMusicDLCEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::GetMusicDLCEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetMusicDLCEnabled");

	Params::UGameInfoInstance_C_GetMusicDLCEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetBossSoundtrackType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BossSoundtrackType Soundtrack                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetBossSoundtrackType(enum class Enum_BossSoundtrackType* Soundtrack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetBossSoundtrackType");

	Params::UGameInfoInstance_C_GetBossSoundtrackType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Soundtrack != nullptr)
		*Soundtrack = Parms.Soundtrack;

}


// Function GameInfoInstance.GameInfoInstance_C.IsLoadingScreenActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::IsLoadingScreenActive(bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "IsLoadingScreenActive");

	Params::UGameInfoInstance_C_IsLoadingScreenActive_Params Parms{};

	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetGorfGiftsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::GetGorfGiftsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetGorfGiftsEnabled");

	Params::UGameInfoInstance_C_GetGorfGiftsEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.GetBallistazookaOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetBallistazookaOpacity(float* Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetBallistazookaOpacity");

	Params::UGameInfoInstance_C_GetBallistazookaOpacity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Opacity != nullptr)
		*Opacity = Parms.Opacity;

}


// Function GameInfoInstance.GameInfoInstance_C.GetWeaponNotify_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetWeaponNotify_Visibility(enum class Enum_NotifyVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetWeaponNotify_Visibility");

	Params::UGameInfoInstance_C_GetWeaponNotify_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInfoInstance.GameInfoInstance_C.GetWeaponNotify_Duration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetWeaponNotify_Duration(enum class Enum_NotifyDuration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetWeaponNotify_Duration");

	Params::UGameInfoInstance_C_GetWeaponNotify_Duration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInfoInstance.GameInfoInstance_C.GetShellNotify_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetShellNotify_Visibility(enum class Enum_NotifyVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetShellNotify_Visibility");

	Params::UGameInfoInstance_C_GetShellNotify_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInfoInstance.GameInfoInstance_C.GetShellNotify_Duration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetShellNotify_Duration(enum class Enum_NotifyDuration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetShellNotify_Duration");

	Params::UGameInfoInstance_C_GetShellNotify_Duration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInfoInstance.GameInfoInstance_C.GetItemNotify_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetItemNotify_Visibility(enum class Enum_NotifyVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetItemNotify_Visibility");

	Params::UGameInfoInstance_C_GetItemNotify_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInfoInstance.GameInfoInstance_C.GetItemNotify_Duration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetItemNotify_Duration(enum class Enum_NotifyDuration* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetItemNotify_Duration");

	Params::UGameInfoInstance_C_GetItemNotify_Duration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function GameInfoInstance.GameInfoInstance_C.GetAspectRatioConstraint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetAspectRatioConstraint(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetAspectRatioConstraint");

	Params::UGameInfoInstance_C_GetAspectRatioConstraint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function GameInfoInstance.GameInfoInstance_C.GetForceFeedbackScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetForceFeedbackScale(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetForceFeedbackScale");

	Params::UGameInfoInstance_C_GetForceFeedbackScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function GameInfoInstance.GameInfoInstance_C.GetCameraShakeScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetCameraShakeScale(float* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetCameraShakeScale");

	Params::UGameInfoInstance_C_GetCameraShakeScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function GameInfoInstance.GameInfoInstance_C.GetHoldToDismiss
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetHoldToDismiss(bool* Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetHoldToDismiss");

	Params::UGameInfoInstance_C_GetHoldToDismiss_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Hold != nullptr)
		*Hold = Parms.Hold;

}


// Function GameInfoInstance.GameInfoInstance_C.GetDamageNumbers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetDamageNumbers(bool* Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetDamageNumbers");

	Params::UGameInfoInstance_C_GetDamageNumbers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function GameInfoInstance.GameInfoInstance_C.GetHUDScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetHUDScale(enum class Enum_HUD_Size* Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetHUDScale");

	Params::UGameInfoInstance_C_GetHUDScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = Parms.Size;

}


// Function GameInfoInstance.GameInfoInstance_C.GetEnemyHPOpa
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPOpacity     Opacity                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetEnemyHPOpa(enum class Enum_EnemyHPOpacity* Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetEnemyHPOpa");

	Params::UGameInfoInstance_C_GetEnemyHPOpa_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Opacity != nullptr)
		*Opacity = Parms.Opacity;

}


// Function GameInfoInstance.GameInfoInstance_C.GetEnemyHPVis
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPVisibility  Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetEnemyHPVis(enum class Enum_EnemyHPVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetEnemyHPVis");

	Params::UGameInfoInstance_C_GetEnemyHPVis_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function GameInfoInstance.GameInfoInstance_C.GetCurrentFloor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentFloor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetCurrentFloor(int32* CurrentFloor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetCurrentFloor");

	Params::UGameInfoInstance_C_GetCurrentFloor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentFloor != nullptr)
		*CurrentFloor = Parms.CurrentFloor;

}


// Function GameInfoInstance.GameInfoInstance_C.TwitchDrop_HasClaimedForSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Skins              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasClaimed_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IDFound                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDHTwitchDrop               Local_Drop                                                       (Edit, BlueprintVisible)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SkinIDToDropID_DropID                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHTwitchDrop               CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::TwitchDrop_HasClaimedForSlot(enum class Enum_Skins ID, bool* HasClaimed_, bool Local_IDFound, const struct FDHTwitchDrop& Local_Drop, bool Temp_bool_True_if_break_was_hit_Variable, const class FString& CallFunc_SkinIDToDropID_DropID, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "TwitchDrop_HasClaimedForSlot");

	Params::UGameInfoInstance_C_TwitchDrop_HasClaimedForSlot_Params Parms{};

	Parms.ID = ID;
	Parms.Local_IDFound = Local_IDFound;
	Parms.Local_Drop = Local_Drop;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_SkinIDToDropID_DropID = CallFunc_SkinIDToDropID_DropID;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (HasClaimed_ != nullptr)
		*HasClaimed_ = Parms.HasClaimed_;

}


// Function GameInfoInstance.GameInfoInstance_C.TwitchDrop_HasUnclaimed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bYes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHTwitchDrop               CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::TwitchDrop_HasUnclaimed(bool* bYes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "TwitchDrop_HasUnclaimed");

	Params::UGameInfoInstance_C_TwitchDrop_HasUnclaimed_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bYes != nullptr)
		*bYes = Parms.bYes;

}


// Function GameInfoInstance.GameInfoInstance_C.TwitchDrop_Claim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      BenefitID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHTwitchDrop               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::TwitchDrop_Claim(const class FString& BenefitID, int32 SlotIndex, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "TwitchDrop_Claim");

	Params::UGameInfoInstance_C_TwitchDrop_Claim_Params Parms{};

	Parms.BenefitID = BenefitID;
	Parms.SlotIndex = SlotIndex;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.UpdateStormModeDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Difficulty                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::UpdateStormModeDifficulty(int32 Difficulty, int32 Local_Difficulty, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "UpdateStormModeDifficulty");

	Params::UGameInfoInstance_C_UpdateStormModeDifficulty_Params Parms{};

	Parms.Difficulty = Difficulty;
	Parms.Local_Difficulty = Local_Difficulty;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_TestStormModeEnemies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_TestStormModeEnemies(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_TestStormModeEnemies");

	Params::UGameInfoInstance_C_DH_TestStormModeEnemies_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Init_SaveCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Local_Debug_3                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Local_Debug_2                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Local_Debug_1                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::StormMode_Init_SaveCheck(const class FString& Local_Debug_3, const class FString& Local_Debug_2, const class FString& Local_Debug_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Init_SaveCheck");

	Params::UGameInfoInstance_C_StormMode_Init_SaveCheck_Params Parms{};

	Parms.Local_Debug_3 = Local_Debug_3;
	Parms.Local_Debug_2 = Local_Debug_2;
	Parms.Local_Debug_1 = Local_Debug_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_2 = CallFunc_GetPrimaryUserIndex_ReturnValue_2;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_2 = CallFunc_DoesSaveGameExist_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.UpdateXboxSType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_XboxS_Type         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsXboxOneSeriesS_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::UpdateXboxSType(enum class Enum_XboxS_Type Type, bool CallFunc_IsXboxOneSeriesS_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "UpdateXboxSType");

	Params::UGameInfoInstance_C_UpdateXboxSType_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_IsXboxOneSeriesS_ReturnValue = CallFunc_IsXboxOneSeriesS_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_DebugXboxSeriesSOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_DebugXboxSeriesSOption(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_DebugXboxSeriesSOption");

	Params::UGameInfoInstance_C_DH_DebugXboxSeriesSOption_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_PlayStormModeLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_PlayStormModeLevel(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_PlayStormModeLevel");

	Params::UGameInfoInstance_C_DH_PlayStormModeLevel_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DualSenseHaptictFeedbackVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::DualSenseHaptictFeedbackVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DualSenseHaptictFeedbackVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.DualSenseAudioSetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DualSenseAudioSetVolume(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DualSenseAudioSetVolume");

	Params::UGameInfoInstance_C_DualSenseAudioSetVolume_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_DebugDualSenseSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_DebugDualSenseSettings(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_DebugDualSenseSettings");

	Params::UGameInfoInstance_C_DH_DebugDualSenseSettings_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_DebugAdaptiveTriggers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_DebugAdaptiveTriggers(const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_DebugAdaptiveTriggers");

	Params::UGameInfoInstance_C_DH_DebugAdaptiveTriggers_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_DebugDualSenseAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_DebugDualSenseAudio(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_DebugDualSenseAudio");

	Params::UGameInfoInstance_C_DH_DebugDualSenseAudio_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_ControllerBoth2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::DH_ControllerBoth2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_ControllerBoth2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_ControllerBoth1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::DH_ControllerBoth1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_ControllerBoth1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_ControllerVibration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::DH_ControllerVibration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_ControllerVibration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_ControllerSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::DH_ControllerSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_ControllerSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_EnableStormModeContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_EnableStormModeContent(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_EnableStormModeContent");

	Params::UGameInfoInstance_C_DH_EnableStormModeContent_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_DebugStormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_DebugStormMode(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_DebugStormMode");

	Params::UGameInfoInstance_C_DH_DebugStormMode_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.HadernContentEnabled?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Local_HadernAssetValid                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

bool UGameInfoInstance_C::HadernContentEnabled_(bool Local_HadernAssetValid, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "HadernContentEnabled?");

	Params::UGameInfoInstance_C_HadernContentEnabled__Params Parms{};

	Parms.Local_HadernAssetValid = Local_HadernAssetValid;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.DH_EnableHadernContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_EnableHadernContent(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_EnableHadernContent");

	Params::UGameInfoInstance_C_DH_EnableHadernContent_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_EnableSaveRestore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_EnableSaveRestore(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_EnableSaveRestore");

	Params::UGameInfoInstance_C_DH_EnableSaveRestore_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_PhotoModeEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_PhotoModeEnabled(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_PhotoModeEnabled");

	Params::UGameInfoInstance_C_DH_PhotoModeEnabled_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_FoundlingMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_FoundlingMenu(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_FoundlingMenu");

	Params::UGameInfoInstance_C_DH_FoundlingMenu_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SeasonalButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_SeasonalButton(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SeasonalButton");

	Params::UGameInfoInstance_C_DH_SeasonalButton_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_TestSeasonalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TestSeasonalContentMonth                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_TestSeasonalContent(int32 TestSeasonalContentMonth, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_TestSeasonalContent");

	Params::UGameInfoInstance_C_DH_TestSeasonalContent_Params Parms{};

	Parms.TestSeasonalContentMonth = TestSeasonalContentMonth;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH Music DLC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_Music_DLC(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH Music DLC");

	Params::UGameInfoInstance_C_DH_Music_DLC_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetBossSoundtrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_SetBossSoundtrack(int32 Value, uint8 CallFunc_Conv_IntToByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetBossSoundtrack");

	Params::UGameInfoInstance_C_DH_SetBossSoundtrack_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_GorfGifts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_GorfGifts(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_GorfGifts");

	Params::UGameInfoInstance_C_DH_GorfGifts_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_Ultrawide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::DH_Ultrawide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_Ultrawide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_PressPreviewLoadFallgrim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_PressPreviewLoadFallgrim(TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_PressPreviewLoadFallgrim");

	Params::UGameInfoInstance_C_DH_PressPreviewLoadFallgrim_Params Parms{};

	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetNewGamePlusLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewGamePlusLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_SetNewGamePlusLevel(int32 NewGamePlusLevel, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetNewGamePlusLevel");

	Params::UGameInfoInstance_C_DH_SetNewGamePlusLevel_Params Parms{};

	Parms.NewGamePlusLevel = NewGamePlusLevel;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_PrintPressPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_PrintPressPreview(const class FString& CallFunc_Conv_BoolToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_PrintPressPreview");

	Params::UGameInfoInstance_C_DH_PrintPressPreview_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.CreateLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Local_ObjectClass                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::CreateLoadingScreen(bool Condition, class UClass* Local_ObjectClass, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "CreateLoadingScreen");

	Params::UGameInfoInstance_C_CreateLoadingScreen_Params Parms{};

	Parms.Condition = Condition;
	Parms.Local_ObjectClass = Local_ObjectClass;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.GetLastSupportedResolutionScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullscreenResolutions_Resolutions           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_GetSupportedFullscreenResolutions_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::GetLastSupportedResolutionScreen(TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetLastSupportedResolutionScreen");

	Params::UGameInfoInstance_C_GetLastSupportedResolutionScreen_Params Parms{};

	Parms.CallFunc_GetSupportedFullscreenResolutions_Resolutions = CallFunc_GetSupportedFullscreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedFullscreenResolutions_ReturnValue = CallFunc_GetSupportedFullscreenResolutions_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.FirstLaunchSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_ResolutionY                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::FirstLaunchSettings(int32 Local_ResolutionY, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "FirstLaunchSettings");

	Params::UGameInfoInstance_C_FirstLaunchSettings_Params Parms{};

	Parms.Local_ResolutionY = Local_ResolutionY;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.ApplyLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_ForceCurrentLocale                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLocale_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentCulture_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::ApplyLanguage(bool Local_ForceCurrentLocale, const class FString& CallFunc_GetCurrentLocale_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "ApplyLanguage");

	Params::UGameInfoInstance_C_ApplyLanguage_Params Parms{};

	Parms.Local_ForceCurrentLocale = Local_ForceCurrentLocale;
	Parms.CallFunc_GetCurrentLocale_ReturnValue = CallFunc_GetCurrentLocale_ReturnValue;
	Parms.CallFunc_SetCurrentCulture_ReturnValue = CallFunc_SetCurrentCulture_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_SetCurrentCulture_ReturnValue_1 = CallFunc_SetCurrentCulture_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.UpdateRespawningItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, float>           RespawningItems                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan                   RespawningItems_TimeSpan                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::UpdateRespawningItems(TMap<class FName, float> RespawningItems, const struct FTimespan& RespawningItems_TimeSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "UpdateRespawningItems");

	Params::UGameInfoInstance_C_UpdateRespawningItems_Params Parms{};

	Parms.RespawningItems = RespawningItems;
	Parms.RespawningItems_TimeSpan = RespawningItems_TimeSpan;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SaveGraphicsSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SaveGraphicsSettings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SaveGraphicsSettings");

	Params::UGameInfoInstance_C_SaveGraphicsSettings_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.LoadGraphicsSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::LoadGraphicsSettings(float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "LoadGraphicsSettings");

	Params::UGameInfoInstance_C_LoadGraphicsSettings_Params Parms{};

	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.AreConsoleCheatsEnabled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShippingBuild_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEditor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::AreConsoleCheatsEnabled(bool CallFunc_IsShippingBuild_ReturnValue, bool CallFunc_IsEditor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "AreConsoleCheatsEnabled");

	Params::UGameInfoInstance_C_AreConsoleCheatsEnabled_Params Parms{};

	Parms.CallFunc_IsShippingBuild_ReturnValue = CallFunc_IsShippingBuild_ReturnValue;
	Parms.CallFunc_IsEditor_ReturnValue = CallFunc_IsEditor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.DH_ShowInputDevice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_ShowInputDevice(const class FString& CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_ShowInputDevice");

	Params::UGameInfoInstance_C_DH_ShowInputDevice_Params Parms{};

	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetPressPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsPressPreview_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_SetPressPreview(bool bIsPressPreview_, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetPressPreview");

	Params::UGameInfoInstance_C_DH_SetPressPreview_Params Parms{};

	Parms.bIsPressPreview_ = bIsPressPreview_;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.GetDmgEffectFromClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DmgEffectClass                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPDmgEffect_C*              DmgEffect                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPDmgEffect_C*              CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPDmgEffect_C*              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::GetDmgEffectFromClass(class UClass*& DmgEffectClass, class UBPDmgEffect_C** DmgEffect, class UBPDmgEffect_C* CallFunc_SpawnObject_ReturnValue, class UBPDmgEffect_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "GetDmgEffectFromClass");

	Params::UGameInfoInstance_C_GetDmgEffectFromClass_Params Parms{};

	Parms.DmgEffectClass = DmgEffectClass;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DmgEffect != nullptr)
		*DmgEffect = Parms.DmgEffect;

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetPlayerBaseDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TempPlayerBaseDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_SetPlayerBaseDamage(float TempPlayerBaseDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetPlayerBaseDamage");

	Params::UGameInfoInstance_C_DH_SetPlayerBaseDamage_Params Parms{};

	Parms.TempPlayerBaseDamage = TempPlayerBaseDamage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_RagdollCameraToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_RagdollCameraToggle(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_RagdollCameraToggle");

	Params::UGameInfoInstance_C_DH_RagdollCameraToggle_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.UpdateVolumeValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FadeInTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::UpdateVolumeValues(float FadeInTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "UpdateVolumeValues");

	Params::UGameInfoInstance_C_UpdateVolumeValues_Params Parms{};

	Parms.FadeInTime = FadeInTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.LoadPlayerSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Local_LanguageList                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      Local_SaveSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyVisibility   CallFunc_GetNotifications_ItemNotify_Visibility                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     CallFunc_GetNotifications_ItemNotify_Duration                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   CallFunc_GetNotifications_ShellNotify_Visibility                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     CallFunc_GetNotifications_ShellNotify_Duration                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   CallFunc_GetNotifications_WeaponNotify_Visibility                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     CallFunc_GetNotifications_WeaponNotify_Duration                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerSaveGame_C*           K2Node_DynamicCast_AsPlayer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::LoadPlayerSettings(const TArray<class FString>& Local_LanguageList, const class FString& Local_SaveSlot, enum class EPlatform CallFunc_GetPlatform_ReturnValue, enum class EPlatform CallFunc_GetPlatform_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class Enum_NotifyVisibility CallFunc_GetNotifications_ItemNotify_Visibility, enum class Enum_NotifyDuration CallFunc_GetNotifications_ItemNotify_Duration, enum class Enum_NotifyVisibility CallFunc_GetNotifications_ShellNotify_Visibility, enum class Enum_NotifyDuration CallFunc_GetNotifications_ShellNotify_Duration, enum class Enum_NotifyVisibility CallFunc_GetNotifications_WeaponNotify_Visibility, enum class Enum_NotifyDuration CallFunc_GetNotifications_WeaponNotify_Duration, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UPlayerSaveGame_C* K2Node_DynamicCast_AsPlayer_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "LoadPlayerSettings");

	Params::UGameInfoInstance_C_LoadPlayerSettings_Params Parms{};

	Parms.Local_LanguageList = Local_LanguageList;
	Parms.Local_SaveSlot = Local_SaveSlot;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue_1 = CallFunc_GetPlatform_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetNotifications_ItemNotify_Visibility = CallFunc_GetNotifications_ItemNotify_Visibility;
	Parms.CallFunc_GetNotifications_ItemNotify_Duration = CallFunc_GetNotifications_ItemNotify_Duration;
	Parms.CallFunc_GetNotifications_ShellNotify_Visibility = CallFunc_GetNotifications_ShellNotify_Visibility;
	Parms.CallFunc_GetNotifications_ShellNotify_Duration = CallFunc_GetNotifications_ShellNotify_Duration;
	Parms.CallFunc_GetNotifications_WeaponNotify_Visibility = CallFunc_GetNotifications_WeaponNotify_Visibility;
	Parms.CallFunc_GetNotifications_WeaponNotify_Duration = CallFunc_GetNotifications_WeaponNotify_Duration;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Save_Game = K2Node_DynamicCast_AsPlayer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.UpdateCurrentSaveSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSaveSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::UpdateCurrentSaveSlot(int32 NewSaveSlot, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "UpdateCurrentSaveSlot");

	Params::UGameInfoInstance_C_UpdateCurrentSaveSlot_Params Parms{};

	Parms.NewSaveSlot = NewSaveSlot;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SavePlayerSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerSaveGame_C*           CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SavePlayerSettings(int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SavePlayerSettings");

	Params::UGameInfoInstance_C_SavePlayerSettings_Params Parms{};

	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_DeleteAllSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_DeleteAllSaveData(bool CallFunc_DeleteGameInSlot_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue_1, bool CallFunc_DeleteGameInSlot_ReturnValue_2, bool CallFunc_DeleteGameInSlot_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_DeleteAllSaveData");

	Params::UGameInfoInstance_C_DH_DeleteAllSaveData_Params Parms{};

	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue_1 = CallFunc_DeleteGameInSlot_ReturnValue_1;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue_2 = CallFunc_DeleteGameInSlot_ReturnValue_2;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue_3 = CallFunc_DeleteGameInSlot_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DidPlayerTravelBetweenMaps
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTravelled                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DidPlayerTravelBetweenMaps(bool* bTravelled, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DidPlayerTravelBetweenMaps");

	Params::UGameInfoInstance_C_DidPlayerTravelBetweenMaps_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bTravelled != nullptr)
		*bTravelled = Parms.bTravelled;

}


// Function GameInfoInstance.GameInfoInstance_C.ResetTravelInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::ResetTravelInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "ResetTravelInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.SetTravelDestination
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CheckpointName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPreMapTravel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SetTravelDestination(class FName CheckpointName, bool bPreMapTravel, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetTravelDestination");

	Params::UGameInfoInstance_C_SetTravelDestination_Params Parms{};

	Parms.CheckpointName = CheckpointName;
	Parms.bPreMapTravel = bPreMapTravel;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.IsInKeyboardMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayGameStateInterface_C>K2Node_DynamicCast_AsGame_Play_Game_State_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInKeyboardMode_InKeyboardMode                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGameInfoInstance_C::IsInKeyboardMode(class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInKeyboardMode_InKeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "IsInKeyboardMode");

	Params::UGameInfoInstance_C_IsInKeyboardMode_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_Interface = K2Node_DynamicCast_AsGame_Play_Game_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInKeyboardMode_InKeyboardMode = CallFunc_IsInKeyboardMode_InKeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameInfoInstance.GameInfoInstance_C.DH_TakeThatAssetLoader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     LoadedAsset                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoftObjectPath             Montage                                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_DynamicCast_AsAnim_Montage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ACharacter*>          CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue                (HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_TakeThatAssetLoader(class UObject* LoadedAsset, const struct FSoftObjectPath& Montage, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, TArray<class ACharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class ACharacter* CallFunc_Array_Get_Item, TSoftObjectPtr<class UObject> CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_TakeThatAssetLoader");

	Params::UGameInfoInstance_C_DH_TakeThatAssetLoader_Params Parms{};

	Parms.LoadedAsset = LoadedAsset;
	Parms.Montage = Montage;
	Parms.K2Node_DynamicCast_AsAnim_Montage = K2Node_DynamicCast_AsAnim_Montage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue = CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_DisablePhysics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACharacter*>          CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_DisablePhysics(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TArray<class ACharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class ACharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_DisablePhysics");

	Params::UGameInfoInstance_C_DH_DisablePhysics_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetPlayerClothSimState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_SetPlayerClothSimState(bool bEnable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetPlayerClothSimState");

	Params::UGameInfoInstance_C_DH_SetPlayerClothSimState_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetClothSimState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMeshComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_SetClothSimState(bool bEnable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetClothSimState");

	Params::UGameInfoInstance_C_DH_SetClothSimState_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_StartOpeningCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_StartOpeningCredits(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_StartOpeningCredits");

	Params::UGameInfoInstance_C_DH_StartOpeningCredits_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_PrintCurrentLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_PrintCurrentLevel(class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_PrintCurrentLevel");

	Params::UGameInfoInstance_C_DH_PrintCurrentLevel_Params Parms{};

	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_ToggleFog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_ToggleFog(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_ToggleFog");

	Params::UGameInfoInstance_C_DH_ToggleFog_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetShellDeterioration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GhostShellDeteriorationCounter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_SetShellDeterioration(int32 GhostShellDeteriorationCounter, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetShellDeterioration");

	Params::UGameInfoInstance_C_DH_SetShellDeterioration_Params Parms{};

	Parms.GhostShellDeteriorationCounter = GhostShellDeteriorationCounter;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_LockAllWeaponUpgrades
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_LockAllWeaponUpgrades(class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, int32 Temp_int_Variable, enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, enum class EComboTypes Temp_byte_Variable_1, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, class FName Temp_name_Variable_14, class FName Temp_name_Variable_15, class FName Temp_name_Variable_16, class FName Temp_name_Variable_17, class FName Temp_name_Variable_18, int32 Temp_int_Variable_1, enum class EComboTypes Temp_byte_Variable_2, class FName Temp_name_Variable_19, class FName Temp_name_Variable_20, class FName Temp_name_Variable_21, class FName Temp_name_Variable_22, class FName Temp_name_Variable_23, class FName Temp_name_Variable_24, class FName Temp_name_Variable_25, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable_26, class FName Temp_name_Variable_27, enum class EComboTypes Temp_byte_Variable_3, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, class FName K2Node_Select_Default_4, class FName K2Node_Select_Default_5, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_LockAllWeaponUpgrades");

	Params::UGameInfoInstance_C_DH_LockAllWeaponUpgrades_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.Temp_name_Variable_8 = Temp_name_Variable_8;
	Parms.Temp_name_Variable_9 = Temp_name_Variable_9;
	Parms.Temp_name_Variable_10 = Temp_name_Variable_10;
	Parms.Temp_name_Variable_11 = Temp_name_Variable_11;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_name_Variable_12 = Temp_name_Variable_12;
	Parms.Temp_name_Variable_13 = Temp_name_Variable_13;
	Parms.Temp_name_Variable_14 = Temp_name_Variable_14;
	Parms.Temp_name_Variable_15 = Temp_name_Variable_15;
	Parms.Temp_name_Variable_16 = Temp_name_Variable_16;
	Parms.Temp_name_Variable_17 = Temp_name_Variable_17;
	Parms.Temp_name_Variable_18 = Temp_name_Variable_18;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_name_Variable_19 = Temp_name_Variable_19;
	Parms.Temp_name_Variable_20 = Temp_name_Variable_20;
	Parms.Temp_name_Variable_21 = Temp_name_Variable_21;
	Parms.Temp_name_Variable_22 = Temp_name_Variable_22;
	Parms.Temp_name_Variable_23 = Temp_name_Variable_23;
	Parms.Temp_name_Variable_24 = Temp_name_Variable_24;
	Parms.Temp_name_Variable_25 = Temp_name_Variable_25;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_name_Variable_26 = Temp_name_Variable_26;
	Parms.Temp_name_Variable_27 = Temp_name_Variable_27;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_UnlockAllWeaponUpgrades
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_UnlockAllWeaponUpgrades(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_UnlockAllWeaponUpgrades");

	Params::UGameInfoInstance_C_DH_UnlockAllWeaponUpgrades_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_UnlockWeaponSuper
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              WeaponIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpecialIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_UnlockWeaponSuper(uint8 WeaponIndex, int32 SpecialIndex, class FName Temp_name_Variable, uint8 CallFunc_GetValidValue_ReturnValue, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, int32 Temp_int_Variable, enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, enum class EComboTypes Temp_byte_Variable_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_UnlockWeaponSuper");

	Params::UGameInfoInstance_C_DH_UnlockWeaponSuper_Params Parms{};

	Parms.WeaponIndex = WeaponIndex;
	Parms.SpecialIndex = SpecialIndex;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.Temp_name_Variable_8 = Temp_name_Variable_8;
	Parms.Temp_name_Variable_9 = Temp_name_Variable_9;
	Parms.Temp_name_Variable_10 = Temp_name_Variable_10;
	Parms.Temp_name_Variable_11 = Temp_name_Variable_11;
	Parms.Temp_name_Variable_12 = Temp_name_Variable_12;
	Parms.Temp_name_Variable_13 = Temp_name_Variable_13;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_UnlockWeaponDmgBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              WeaponIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UpgradeIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_UnlockWeaponDmgBoost(uint8 WeaponIndex, int32 UpgradeIndex, enum class EComboTypes Temp_byte_Variable, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, int32 Temp_int_Variable, class FName K2Node_Select_Default, enum class EComboTypes Temp_byte_Variable_1, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_UnlockWeaponDmgBoost");

	Params::UGameInfoInstance_C_DH_UnlockWeaponDmgBoost_Params Parms{};

	Parms.WeaponIndex = WeaponIndex;
	Parms.UpgradeIndex = UpgradeIndex;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.Temp_name_Variable_8 = Temp_name_Variable_8;
	Parms.Temp_name_Variable_9 = Temp_name_Variable_9;
	Parms.Temp_name_Variable_10 = Temp_name_Variable_10;
	Parms.Temp_name_Variable_11 = Temp_name_Variable_11;
	Parms.Temp_name_Variable_12 = Temp_name_Variable_12;
	Parms.Temp_name_Variable_13 = Temp_name_Variable_13;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_LockUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UpgradeName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_LockUpgrade(class FName UpgradeName, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_LockUpgrade");

	Params::UGameInfoInstance_C_DH_LockUpgrade_Params Parms{};

	Parms.UpgradeName = UpgradeName;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_UnlockUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UpgradeName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_UnlockUpgrade(class FName UpgradeName, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_UnlockUpgrade");

	Params::UGameInfoInstance_C_DH_UnlockUpgrade_Params Parms{};

	Parms.UpgradeName = UpgradeName;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetPlayerMaxHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_SetPlayerMaxHealth(int32 NewValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetPlayerMaxHealth");

	Params::UGameInfoInstance_C_DH_SetPlayerMaxHealth_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_CheckAbritraryNameIsInChangedSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NameToCheck                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInSet_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_CheckAbritraryNameIsInChangedSet(class FName& NameToCheck, bool* IsInSet_, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_CheckAbritraryNameIsInChangedSet");

	Params::UGameInfoInstance_C_DH_CheckAbritraryNameIsInChangedSet_Params Parms{};

	Parms.NameToCheck = NameToCheck;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet = CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInSet_ != nullptr)
		*IsInSet_ = Parms.IsInSet_;

}


// Function GameInfoInstance.GameInfoInstance_C.DH_RemoveAbritraryNameFromChangedSet
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NameToRemove                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemovedSuccessfully_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful(ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_RemoveAbritraryNameFromChangedSet(class FName& NameToRemove, bool* RemovedSuccessfully_, class FText CallFunc_Conv_NameToText_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_RemoveAbritraryNameFromChangedSet");

	Params::UGameInfoInstance_C_DH_RemoveAbritraryNameFromChangedSet_Params Parms{};

	Parms.NameToRemove = NameToRemove;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful = CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RemovedSuccessfully_ != nullptr)
		*RemovedSuccessfully_ = Parms.RemovedSuccessfully_;

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SaveMapState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_SaveMapState(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SaveMapState");

	Params::UGameInfoInstance_C_DH_SaveMapState_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_AddAbritraryNameToChangedSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NameToAdd                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_AddAbritraryNameToChangedSet(class FName& NameToAdd, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_AddAbritraryNameToChangedSet");

	Params::UGameInfoInstance_C_DH_AddAbritraryNameToChangedSet_Params Parms{};

	Parms.NameToAdd = NameToAdd;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetParamOnCharArmor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ParameterValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_SetParamOnCharArmor(float ParameterValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetParamOnCharArmor");

	Params::UGameInfoInstance_C_DH_SetParamOnCharArmor_Params Parms{};

	Parms.ParameterValue = ParameterValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SwitchArmor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArmorToSet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HadernContentEnabled__ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_SwitchArmor(int32 ArmorToSet, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HadernContentEnabled__ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SwitchArmor");

	Params::UGameInfoInstance_C_DH_SwitchArmor_Params Parms{};

	Parms.ArmorToSet = ArmorToSet;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_HadernContentEnabled__ReturnValue = CallFunc_HadernContentEnabled__ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_ClearMapChangedSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADHGameMode*                 CallFunc_GetDHGameMode_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_ClearMapChangedSet(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_1, class ADHGameMode* CallFunc_GetDHGameMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_ClearMapChangedSet");

	Params::UGameInfoInstance_C_DH_ClearMapChangedSet_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDHGameMode_ReturnValue = CallFunc_GetDHGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SetHadernPhase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PhaseIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_SetHadernPhase(int32 PhaseIndex, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SetHadernPhase");

	Params::UGameInfoInstance_C_DH_SetHadernPhase_Params Parms{};

	Parms.PhaseIndex = PhaseIndex;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_Save
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_Save(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_Save");

	Params::UGameInfoInstance_C_DH_Save_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_KickPlayerForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ImpulseStrength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_KickPlayerForward(float ImpulseStrength, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_KickPlayerForward");

	Params::UGameInfoInstance_C_DH_KickPlayerForward_Params Parms{};

	Parms.ImpulseStrength = ImpulseStrength;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_LockWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_LockWeapon(int32 ID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_LockWeapon");

	Params::UGameInfoInstance_C_DH_LockWeapon_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_UnlockWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_UnlockWeapon(int32 ID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_UnlockWeapon");

	Params::UGameInfoInstance_C_DH_UnlockWeapon_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_SwitchWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::DH_SwitchWeapon(int32 Param, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_SwitchWeapon");

	Params::UGameInfoInstance_C_DH_SwitchWeapon_Params Parms{};

	Parms.Param = Param;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_TestFunctionEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::DH_TestFunctionEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_TestFunctionEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.DH_TestFunction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DH_TestFunction(TArray<class FString>& Params, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DH_TestFunction");

	Params::UGameInfoInstance_C_DH_TestFunction_Params Parms{};

	Parms.Params = Params;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.TravelErrorToString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETravelFailure          FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      OutString                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::TravelErrorToString(enum class ETravelFailure FailureType, class FString* OutString, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "TravelErrorToString");

	Params::UGameInfoInstance_C_TravelErrorToString_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

}


// Function GameInfoInstance.GameInfoInstance_C.NetErrorToString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      OutString                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::NetErrorToString(enum class ENetworkFailure FailureType, class FString* OutString, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "NetErrorToString");

	Params::UGameInfoInstance_C_NetErrorToString_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

}


// Function GameInfoInstance.GameInfoInstance_C.OnLoaded_70CB9E9E451576C4C58B54B640D4FE8B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::OnLoaded_70CB9E9E451576C4C58B54B640D4FE8B(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnLoaded_70CB9E9E451576C4C58B54B640D4FE8B");

	Params::UGameInfoInstance_C_OnLoaded_70CB9E9E451576C4C58B54B640D4FE8B_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnFailure_149E5699488C7D88326F9C9B97473B4D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnFailure_149E5699488C7D88326F9C9B97473B4D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnFailure_149E5699488C7D88326F9C9B97473B4D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnSuccess_149E5699488C7D88326F9C9B97473B4D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnSuccess_149E5699488C7D88326F9C9B97473B4D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnSuccess_149E5699488C7D88326F9C9B97473B4D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnFailure_69C3B50546DC2170A2C9AEADC6D0CE39
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnFailure_69C3B50546DC2170A2C9AEADC6D0CE39()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnFailure_69C3B50546DC2170A2C9AEADC6D0CE39");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnSuccess_69C3B50546DC2170A2C9AEADC6D0CE39
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnSuccess_69C3B50546DC2170A2C9AEADC6D0CE39()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnSuccess_69C3B50546DC2170A2C9AEADC6D0CE39");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnFailure_8876D59F435047D05F4F2382AA769685
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnFailure_8876D59F435047D05F4F2382AA769685()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnFailure_8876D59F435047D05F4F2382AA769685");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnSuccess_8876D59F435047D05F4F2382AA769685
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnSuccess_8876D59F435047D05F4F2382AA769685()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnSuccess_8876D59F435047D05F4F2382AA769685");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::ReceiveShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "ReceiveShutdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.SaveGame
// (Event, Public, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::SaveGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SaveGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.SetEnemyHPVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPVisibility  Visiiblity                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetEnemyHPVis(enum class Enum_EnemyHPVisibility Visiiblity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetEnemyHPVis");

	Params::UGameInfoInstance_C_SetEnemyHPVis_Params Parms{};

	Parms.Visiiblity = Visiiblity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetEnemyHPOpa
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPOpacity     Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetEnemyHPOpa(enum class Enum_EnemyHPOpacity Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetEnemyHPOpa");

	Params::UGameInfoInstance_C_SetEnemyHPOpa_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetHUDScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetHUDScale(enum class Enum_HUD_Size Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetHUDScale");

	Params::UGameInfoInstance_C_SetHUDScale_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetDamageNumbers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SetDamageNumbers(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetDamageNumbers");

	Params::UGameInfoInstance_C_SetDamageNumbers_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetHoldToDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SetHoldToDismiss(bool Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetHoldToDismiss");

	Params::UGameInfoInstance_C_SetHoldToDismiss_Params Parms{};

	Parms.Hold = Hold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetCameraShakeScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetCameraShakeScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetCameraShakeScale");

	Params::UGameInfoInstance_C_SetCameraShakeScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetForceFeedbackScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetForceFeedbackScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetForceFeedbackScale");

	Params::UGameInfoInstance_C_SetForceFeedbackScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnApplicationWillEnterBackground
// (Event, Public, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnApplicationWillEnterBackground()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnApplicationWillEnterBackground");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.SetAspectRatioConstraint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetAspectRatioConstraint(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetAspectRatioConstraint");

	Params::UGameInfoInstance_C_SetAspectRatioConstraint_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetItemNotify_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetItemNotify_Visibility(enum class Enum_NotifyVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetItemNotify_Visibility");

	Params::UGameInfoInstance_C_SetItemNotify_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetItemNotify_Duration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetItemNotify_Duration(enum class Enum_NotifyDuration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetItemNotify_Duration");

	Params::UGameInfoInstance_C_SetItemNotify_Duration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetWeaponNotify_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetWeaponNotify_Visibility(enum class Enum_NotifyVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetWeaponNotify_Visibility");

	Params::UGameInfoInstance_C_SetWeaponNotify_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetWeaponNotify_Duration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetWeaponNotify_Duration(enum class Enum_NotifyDuration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetWeaponNotify_Duration");

	Params::UGameInfoInstance_C_SetWeaponNotify_Duration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetShellNotify_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyVisibility   Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetShellNotify_Visibility(enum class Enum_NotifyVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetShellNotify_Visibility");

	Params::UGameInfoInstance_C_SetShellNotify_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetShellNotify_Duration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NotifyDuration     Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetShellNotify_Duration(enum class Enum_NotifyDuration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetShellNotify_Duration");

	Params::UGameInfoInstance_C_SetShellNotify_Duration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetBallistazookaOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetBallistazookaOpacity(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetBallistazookaOpacity");

	Params::UGameInfoInstance_C_SetBallistazookaOpacity_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetBossSoundtrackType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BossSoundtrackType Soundtrack                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetBossSoundtrackType(enum class Enum_BossSoundtrackType Soundtrack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetBossSoundtrackType");

	Params::UGameInfoInstance_C_SetBossSoundtrackType_Params Parms{};

	Parms.Soundtrack = Soundtrack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetSeasonalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SetSeasonalContent(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetSeasonalContent");

	Params::UGameInfoInstance_C_SetSeasonalContent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetRadialBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SetRadialBlur(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetRadialBlur");

	Params::UGameInfoInstance_C_SetRadialBlur_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetCutsceneAspectRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Constrained                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SetCutsceneAspectRatio(bool Constrained)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetCutsceneAspectRatio");

	Params::UGameInfoInstance_C_SetCutsceneAspectRatio_Params Parms{};

	Parms.Constrained = Constrained;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetUIScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetUIScale(enum class Enum_HUD_Size Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetUIScale");

	Params::UGameInfoInstance_C_SetUIScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetHideTarnishedSeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SetHideTarnishedSeal(bool Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetHideTarnishedSeal");

	Params::UGameInfoInstance_C_SetHideTarnishedSeal_Params Parms{};

	Parms.Hidden_ = Hidden_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetHideSacredGland
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SetHideSacredGland(bool Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetHideSacredGland");

	Params::UGameInfoInstance_C_SetHideSacredGland_Params Parms{};

	Parms.Hidden_ = Hidden_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnIdealLanguageDetermined
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      CultureDetermined                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGameInfoInstance_C::OnIdealLanguageDetermined(const class FString& CultureDetermined)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnIdealLanguageDetermined");

	Params::UGameInfoInstance_C_OnIdealLanguageDetermined_Params Parms{};

	Parms.CultureDetermined = CultureDetermined;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::StormMode_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::StormMode_Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.DebugDualSense2DAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DebugDualSense2DAudio(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DebugDualSense2DAudio");

	Params::UGameInfoInstance_C_DebugDualSense2DAudio_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetAdaptiveTriggersEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_AdaptiveTriggers_EnabledEnableType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetAdaptiveTriggersEnabled(enum class Enum_AdaptiveTriggers_Enabled EnableType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetAdaptiveTriggersEnabled");

	Params::UGameInfoInstance_C_SetAdaptiveTriggersEnabled_Params Parms{};

	Parms.EnableType = EnableType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetHapticFeedback_Intensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetHapticFeedback_Intensity(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetHapticFeedback_Intensity");

	Params::UGameInfoInstance_C_SetHapticFeedback_Intensity_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetDualSenseAudio_Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::SetDualSenseAudio_Enabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetDualSenseAudio_Enabled");

	Params::UGameInfoInstance_C_SetDualSenseAudio_Enabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_SetHasEnteredOnce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasEntered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::StormMode_SetHasEnteredOnce(bool HasEntered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_SetHasEnteredOnce");

	Params::UGameInfoInstance_C_StormMode_SetHasEnteredOnce_Params Parms{};

	Parms.HasEntered = HasEntered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.SetXboxSType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_XboxS_Type         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::SetXboxSType(enum class Enum_XboxS_Type Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SetXboxSType");

	Params::UGameInfoInstance_C_SetXboxSType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_SaveState_Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::StormMode_SaveState_Check()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_SaveState_Check");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_SetHasJustStartedRun?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasStarted_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::StormMode_SetHasJustStartedRun_(bool HasStarted_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_SetHasJustStartedRun?");

	Params::UGameInfoInstance_C_StormMode_SetHasJustStartedRun__Params Parms{};

	Parms.HasStarted_ = HasStarted_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.UpdateStormModeDLCEntitlement
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::UpdateStormModeDLCEntitlement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "UpdateStormModeDLCEntitlement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_SetDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_SetDifficulty(int32 Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_SetDifficulty");

	Params::UGameInfoInstance_C_StormMode_SetDifficulty_Params Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.Util_SavePlayerSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::Util_SavePlayerSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "Util_SavePlayerSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnUnprocessedTwitchDropsUpdatedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnUnprocessedTwitchDropsUpdatedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnUnprocessedTwitchDropsUpdatedBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Notify_RunicFam_SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_VisibilityVisibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_Notify_RunicFam_SetVisibility(enum class Enum_Notify_StormMode_Visibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Notify_RunicFam_SetVisibility");

	Params::UGameInfoInstance_C_StormMode_Notify_RunicFam_SetVisibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Notify_RunicFam_SetDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_DurationDuration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_Notify_RunicFam_SetDuration(enum class Enum_Notify_StormMode_Duration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Notify_RunicFam_SetDuration");

	Params::UGameInfoInstance_C_StormMode_Notify_RunicFam_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Notify_Instinct_SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_VisibilityVisibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_Notify_Instinct_SetVisibility(enum class Enum_Notify_StormMode_Visibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Notify_Instinct_SetVisibility");

	Params::UGameInfoInstance_C_StormMode_Notify_Instinct_SetVisibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_Notify_Instinct_SetDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Notify_StormMode_DurationDuration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_Notify_Instinct_SetDuration(enum class Enum_Notify_StormMode_Duration Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_Notify_Instinct_SetDuration");

	Params::UGameInfoInstance_C_StormMode_Notify_Instinct_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnRefreshStormMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StormModeOwned                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::OnRefreshStormMode(bool StormModeOwned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnRefreshStormMode");

	Params::UGameInfoInstance_C_OnRefreshStormMode_Params Parms{};

	Parms.StormModeOwned = StormModeOwned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_UpdateLastSaveSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::StormMode_UpdateLastSaveSlotIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_UpdateLastSaveSlotIndex");

	Params::UGameInfoInstance_C_StormMode_UpdateLastSaveSlotIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.StormMode_SetGiveFullHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Give_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::StormMode_SetGiveFullHealth(bool Give_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "StormMode_SetGiveFullHealth");

	Params::UGameInfoInstance_C_StormMode_SetGiveFullHealth_Params Parms{};

	Parms.Give_ = Give_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.MainMenu_Create
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::MainMenu_Create()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "MainMenu_Create");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.ClearLoadingScreenReferenceAfterLevelLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::ClearLoadingScreenReferenceAfterLevelLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "ClearLoadingScreenReferenceAfterLevelLoad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.HideLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::HideLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "HideLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.SaveGameCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::SaveGameCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "SaveGameCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.DestroySessionCaller
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::DestroySessionCaller(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "DestroySessionCaller");

	Params::UGameInfoInstance_C_DestroySessionCaller_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ETravelFailure          FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::HandleTravelError(enum class ETravelFailure FailureType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "HandleTravelError");

	Params::UGameInfoInstance_C_HandleTravelError_Params Parms{};

	Parms.FailureType = FailureType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsServer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "HandleNetworkError");

	Params::UGameInfoInstance_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.JoinServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult     SessionToJoin                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameInfoInstance_C::JoinServer(const struct FBlueprintSessionResult& SessionToJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "JoinServer");

	Params::UGameInfoInstance_C_JoinServer_Params Parms{};

	Parms.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IntoTheDepths                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FadeIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::ShowLoadingScreen(bool IntoTheDepths, bool FadeIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "ShowLoadingScreen");

	Params::UGameInfoInstance_C_ShowLoadingScreen_Params Parms{};

	Parms.IntoTheDepths = IntoTheDepths;
	Parms.FadeIn = FadeIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.LaunchLobby
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumberOfPlayers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnableLan_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGameInfoInstance_C::LaunchLobby(int32 NumberOfPlayers, bool EnableLan_, class FText ServerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "LaunchLobby");

	Params::UGameInfoInstance_C_LaunchLobby_Params Parms{};

	Parms.NumberOfPlayers = NumberOfPlayers;
	Parms.EnableLan_ = EnableLan_;
	Parms.ServerName = ServerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.ShowHostMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::ShowHostMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "ShowHostMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.ShowMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::ShowMainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "ShowMainMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.ExecuteUbergraph_GameInfoInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_Debug2D_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UErrorDialog_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  K2Node_Event_Visiiblity                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPOpacity     K2Node_Event_Opacity_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_HUD_Size           K2Node_Event_Size                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Hold                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Scale_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Index_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_NotifyVisibility   K2Node_Event_Visibility_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     K2Node_Event_Duration_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   K2Node_Event_Visibility_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     K2Node_Event_Duration_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyVisibility   K2Node_Event_Visibility_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NotifyDuration     K2Node_Event_Duration_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Opacity                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BossSoundtrackType K2Node_Event_Soundtrack                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Enabled_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Constrained                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           K2Node_Event_Scale                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Hidden__1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Hidden_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_CultureDetermined                                   (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Event_Sound                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_AdaptiveTriggers_EnabledK2Node_Event_EnableType                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Intensity                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Enabled                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_HasEntered                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_XboxS_Type         K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_HasStarted_                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEditor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UserHasStormModeDLC_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Difficulty                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FDHTwitchDrop>       CallFunc_GetNewUnprocessedTwitchDrops_OutDrops                   (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Notify_StormMode_VisibilityK2Node_Event_Visibility_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Notify_StormMode_DurationK2Node_Event_Duration_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Notify_StormMode_VisibilityK2Node_Event_Visibility                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Notify_StormMode_DurationK2Node_Event_Duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_StormModeOwned                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Give_                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UErrorDialog_C*              CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETravelFailure          K2Node_Event_FailureType_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TravelErrorToString_OutString                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ENetworkFailure         K2Node_Event_FailureType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsServer                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_NetErrorToString_OutString                              (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UErrorDialog_C*              CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     K2Node_CustomEvent_SessionToJoin                                 (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHTwitchDrop               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UErrorDialog_C*              CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IntoTheDepths                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_FadeIn                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_NumberOfPlayers                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_EnableLan_                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_ServerName                                    (None)
// class UCreateSessionCallbackProxy* CallFunc_CreateSession_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHostMenu_C*                 CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::ExecuteUbergraph_GameInfoInstance(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_Debug2D_C* CallFunc_FinishSpawningActor_ReturnValue, class UErrorDialog_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue_1, class UObject* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsInViewport_ReturnValue_2, enum class Enum_EnemyHPVisibility K2Node_Event_Visiiblity, enum class Enum_EnemyHPOpacity K2Node_Event_Opacity_1, enum class Enum_HUD_Size K2Node_Event_Size, bool K2Node_Event_Show, bool K2Node_Event_Hold, float K2Node_Event_Scale_2, float K2Node_Event_Scale_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsConsole_ReturnValue, int32 K2Node_Event_Index_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_4, enum class Enum_NotifyVisibility K2Node_Event_Visibility_4, enum class Enum_NotifyDuration K2Node_Event_Duration_4, enum class Enum_NotifyVisibility K2Node_Event_Visibility_3, enum class Enum_NotifyDuration K2Node_Event_Duration_3, enum class Enum_NotifyVisibility K2Node_Event_Visibility_2, enum class Enum_NotifyDuration K2Node_Event_Duration_2, float K2Node_Event_Opacity, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, int32 Temp_int_Variable, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_5, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, enum class Enum_BossSoundtrackType K2Node_Event_Soundtrack, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_Event_ReturnValue, bool K2Node_Event_Enabled_1, bool K2Node_Event_Constrained, enum class Enum_HUD_Size K2Node_Event_Scale, bool K2Node_Event_Hidden__1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool K2Node_Event_Hidden_, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_6, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, const class FString& K2Node_Event_CultureDetermined, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, class USoundBase* K2Node_Event_Sound, enum class Enum_AdaptiveTriggers_Enabled K2Node_Event_EnableType, float K2Node_Event_Intensity, bool K2Node_Event_Enabled, bool K2Node_Event_HasEntered, bool K2Node_SwitchInteger_CmpSuccess_2, int32 Temp_int_Variable_1, enum class Enum_XboxS_Type K2Node_Event_Type, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsInViewport_ReturnValue_3, bool K2Node_Event_HasStarted_, bool CallFunc_IsEditor_ReturnValue, bool CallFunc_UserHasStormModeDLC_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, int32 K2Node_Event_Difficulty, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TArray<struct FDHTwitchDrop>& CallFunc_GetNewUnprocessedTwitchDrops_OutDrops, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class Enum_Notify_StormMode_Visibility K2Node_Event_Visibility_1, enum class Enum_Notify_StormMode_Duration K2Node_Event_Duration_1, enum class Enum_Notify_StormMode_Visibility K2Node_Event_Visibility, enum class Enum_Notify_StormMode_Duration K2Node_Event_Duration, bool K2Node_CustomEvent_StormModeOwned, int32 K2Node_Event_Index, bool K2Node_Event_Give_, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_8, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UErrorDialog_C* CallFunc_Create_ReturnValue_1, class APlayerController* K2Node_CustomEvent_PlayerController, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, enum class ETravelFailure K2Node_Event_FailureType_1, const class FString& CallFunc_TravelErrorToString_OutString, bool CallFunc_IsValid_ReturnValue_6, enum class ENetworkFailure K2Node_Event_FailureType, bool K2Node_Event_bIsServer, const class FString& CallFunc_NetErrorToString_OutString, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UErrorDialog_C* CallFunc_Create_ReturnValue_2, const struct FBlueprintSessionResult& K2Node_CustomEvent_SessionToJoin, int32 Temp_int_Array_Index_Variable, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class UErrorDialog_C* CallFunc_Create_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_CustomEvent_IntoTheDepths, bool K2Node_CustomEvent_FadeIn, int32 K2Node_CustomEvent_NumberOfPlayers, bool K2Node_CustomEvent_EnableLan_, class FText K2Node_CustomEvent_ServerName, class UCreateSessionCallbackProxy* CallFunc_CreateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class UHostMenu_C* CallFunc_Create_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class UUserWidget* CallFunc_Create_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "ExecuteUbergraph_GameInfoInstance");

	Params::UGameInfoInstance_C_ExecuteUbergraph_GameInfoInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsInViewport_ReturnValue_1 = CallFunc_IsInViewport_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsInViewport_ReturnValue_2 = CallFunc_IsInViewport_ReturnValue_2;
	Parms.K2Node_Event_Visiiblity = K2Node_Event_Visiiblity;
	Parms.K2Node_Event_Opacity_1 = K2Node_Event_Opacity_1;
	Parms.K2Node_Event_Size = K2Node_Event_Size;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.K2Node_Event_Hold = K2Node_Event_Hold;
	Parms.K2Node_Event_Scale_2 = K2Node_Event_Scale_2;
	Parms.K2Node_Event_Scale_1 = K2Node_Event_Scale_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;
	Parms.K2Node_Event_Index_1 = K2Node_Event_Index_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_Visibility_4 = K2Node_Event_Visibility_4;
	Parms.K2Node_Event_Duration_4 = K2Node_Event_Duration_4;
	Parms.K2Node_Event_Visibility_3 = K2Node_Event_Visibility_3;
	Parms.K2Node_Event_Duration_3 = K2Node_Event_Duration_3;
	Parms.K2Node_Event_Visibility_2 = K2Node_Event_Visibility_2;
	Parms.K2Node_Event_Duration_2 = K2Node_Event_Duration_2;
	Parms.K2Node_Event_Opacity = K2Node_Event_Opacity;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_5 = K2Node_DynamicCast_AsGame_Play_PCInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.K2Node_Event_Soundtrack = K2Node_Event_Soundtrack;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_Event_ReturnValue = K2Node_Event_ReturnValue;
	Parms.K2Node_Event_Enabled_1 = K2Node_Event_Enabled_1;
	Parms.K2Node_Event_Constrained = K2Node_Event_Constrained;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.K2Node_Event_Hidden__1 = K2Node_Event_Hidden__1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_Event_Hidden_ = K2Node_Event_Hidden_;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_Event_CultureDetermined = K2Node_Event_CultureDetermined;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_1 = K2Node_DynamicCast_AsCharacter_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_Event_Sound = K2Node_Event_Sound;
	Parms.K2Node_Event_EnableType = K2Node_Event_EnableType;
	Parms.K2Node_Event_Intensity = K2Node_Event_Intensity;
	Parms.K2Node_Event_Enabled = K2Node_Event_Enabled;
	Parms.K2Node_Event_HasEntered = K2Node_Event_HasEntered;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsInViewport_ReturnValue_3 = CallFunc_IsInViewport_ReturnValue_3;
	Parms.K2Node_Event_HasStarted_ = K2Node_Event_HasStarted_;
	Parms.CallFunc_IsEditor_ReturnValue = CallFunc_IsEditor_ReturnValue;
	Parms.CallFunc_UserHasStormModeDLC_ReturnValue = CallFunc_UserHasStormModeDLC_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.K2Node_Event_Difficulty = K2Node_Event_Difficulty;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_3 = CallFunc_Conv_BoolToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetNewUnprocessedTwitchDrops_OutDrops = CallFunc_GetNewUnprocessedTwitchDrops_OutDrops;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_Visibility_1 = K2Node_Event_Visibility_1;
	Parms.K2Node_Event_Duration_1 = K2Node_Event_Duration_1;
	Parms.K2Node_Event_Visibility = K2Node_Event_Visibility;
	Parms.K2Node_Event_Duration = K2Node_Event_Duration;
	Parms.K2Node_CustomEvent_StormModeOwned = K2Node_CustomEvent_StormModeOwned;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_Give_ = K2Node_Event_Give_;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.K2Node_Event_FailureType_1 = K2Node_Event_FailureType_1;
	Parms.CallFunc_TravelErrorToString_OutString = CallFunc_TravelErrorToString_OutString;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_Event_FailureType = K2Node_Event_FailureType;
	Parms.K2Node_Event_bIsServer = K2Node_Event_bIsServer;
	Parms.CallFunc_NetErrorToString_OutString = CallFunc_NetErrorToString_OutString;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CustomEvent_SessionToJoin = K2Node_CustomEvent_SessionToJoin;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_IntoTheDepths = K2Node_CustomEvent_IntoTheDepths;
	Parms.K2Node_CustomEvent_FadeIn = K2Node_CustomEvent_FadeIn;
	Parms.K2Node_CustomEvent_NumberOfPlayers = K2Node_CustomEvent_NumberOfPlayers;
	Parms.K2Node_CustomEvent_EnableLan_ = K2Node_CustomEvent_EnableLan_;
	Parms.K2Node_CustomEvent_ServerName = K2Node_CustomEvent_ServerName;
	Parms.CallFunc_CreateSession_ReturnValue = CallFunc_CreateSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnLoadingScreenFadeOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnLoadingScreenFadeOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnLoadingScreenFadeOut__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnAdaptiveTriggerChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnAdaptiveTriggerChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnAdaptiveTriggerChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnRadialBlurChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::OnRadialBlurChanged__DelegateSignature(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnRadialBlurChanged__DelegateSignature");

	Params::UGameInfoInstance_C_OnRadialBlurChanged__DelegateSignature_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnLoadingScreenRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnLoadingScreenRemoved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnLoadingScreenRemoved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnSeasonalContentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::OnSeasonalContentChanged__DelegateSignature(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnSeasonalContentChanged__DelegateSignature");

	Params::UGameInfoInstance_C_OnSeasonalContentChanged__DelegateSignature_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnHoldToDismissChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::OnHoldToDismissChanged__DelegateSignature(bool Hold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnHoldToDismissChanged__DelegateSignature");

	Params::UGameInfoInstance_C_OnHoldToDismissChanged__DelegateSignature_Params Parms{};

	Parms.Hold = Hold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnDamageNumbersChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameInfoInstance_C::OnDamageNumbersChanged__DelegateSignature(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnDamageNumbersChanged__DelegateSignature");

	Params::UGameInfoInstance_C_OnDamageNumbersChanged__DelegateSignature_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnHUDSizeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::OnHUDSizeChanged__DelegateSignature(enum class Enum_HUD_Size Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnHUDSizeChanged__DelegateSignature");

	Params::UGameInfoInstance_C_OnHUDSizeChanged__DelegateSignature_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnEnemyHPOpacityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPOpacity     Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::OnEnemyHPOpacityChanged__DelegateSignature(enum class Enum_EnemyHPOpacity Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnEnemyHPOpacityChanged__DelegateSignature");

	Params::UGameInfoInstance_C_OnEnemyHPOpacityChanged__DelegateSignature_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnEnemyHPVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPVisibility  Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::OnEnemyHPVisibilityChanged__DelegateSignature(enum class Enum_EnemyHPVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnEnemyHPVisibilityChanged__DelegateSignature");

	Params::UGameInfoInstance_C_OnEnemyHPVisibilityChanged__DelegateSignature_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnLanguageChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnLanguageChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnLanguageChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameInfoInstance.GameInfoInstance_C.OnSubtitlesScaleChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameInfoInstance_C::OnSubtitlesScaleChanged__DelegateSignature(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnSubtitlesScaleChanged__DelegateSignature");

	Params::UGameInfoInstance_C_OnSubtitlesScaleChanged__DelegateSignature_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameInfoInstance.GameInfoInstance_C.OnChangeForcePS4Icons__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGameInfoInstance_C::OnChangeForcePS4Icons__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameInfoInstance_C", "OnChangeForcePS4Icons__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


