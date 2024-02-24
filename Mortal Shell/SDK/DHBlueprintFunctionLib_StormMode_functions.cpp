#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C
// (None)

class UClass* UDHBlueprintFunctionLib_StormMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHBlueprintFunctionLib_StormMode_C");

	return Clss;
}


// DHBlueprintFunctionLib_StormMode_C DHBlueprintFunctionLib_StormMode.Default__DHBlueprintFunctionLib_StormMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDHBlueprintFunctionLib_StormMode_C* UDHBlueprintFunctionLib_StormMode_C::GetDefaultObj()
{
	static class UDHBlueprintFunctionLib_StormMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHBlueprintFunctionLib_StormMode_C*>(UDHBlueprintFunctionLib_StormMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.LuteAbilities_Params_Passive
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_LuteType           Lute                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LuteType           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::LuteAbilities_Params_Passive(enum class Enum_LuteType Lute, class UObject* __WorldContext, int32* X, int32* Y, enum class Enum_LuteType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, enum class Enum_LuteType Temp_byte_Variable_1, int32 K2Node_Select_Default, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "LuteAbilities_Params_Passive");

	Params::UDHBlueprintFunctionLib_StormMode_C_LuteAbilities_Params_Passive_Params Parms{};

	Parms.Lute = Lute;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.LuteAbilities_Params_Active
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_LuteType           Lute                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Uses                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Minutes                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LuteType           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::LuteAbilities_Params_Active(enum class Enum_LuteType Lute, class UObject* __WorldContext, int32* Uses, int32* Minutes, enum class Enum_LuteType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, enum class Enum_LuteType Temp_byte_Variable_1, int32 K2Node_Select_Default, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "LuteAbilities_Params_Active");

	Params::UDHBlueprintFunctionLib_StormMode_C_LuteAbilities_Params_Active_Params Parms{};

	Parms.Lute = Lute;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Uses != nullptr)
		*Uses = Parms.Uses;

	if (Minutes != nullptr)
		*Minutes = Parms.Minutes;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.StormMode_ItemFamEffectText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_LuteType           Local_LuteType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_Text                                                       (Edit, BlueprintVisible)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Passive_X                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Passive_Y                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UDHBlueprintFunctionLib_StormMode_C::StormMode_ItemFamEffectText(class FName ID, class FText Text, class UObject* __WorldContext, enum class Enum_LuteType Local_LuteType, class FText Local_Text, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_LuteAbilities_Params_Passive_X, int32 CallFunc_LuteAbilities_Params_Passive_Y, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "StormMode_ItemFamEffectText");

	Params::UDHBlueprintFunctionLib_StormMode_C_StormMode_ItemFamEffectText_Params Parms{};

	Parms.ID = ID;
	Parms.Text = Text;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_LuteType = Local_LuteType;
	Parms.Local_Text = Local_Text;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_LuteAbilities_Params_Passive_X = CallFunc_LuteAbilities_Params_Passive_X;
	Parms.CallFunc_LuteAbilities_Params_Passive_Y = CallFunc_LuteAbilities_Params_Passive_Y;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.StormMode_ItemEffectText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               FixText                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_LuteType           Local_LuteType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_Text                                                       (Edit, BlueprintVisible)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Uses                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Minutes                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue_3                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Replace_ReturnValue_4                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)

class FText UDHBlueprintFunctionLib_StormMode_C::StormMode_ItemEffectText(class FName ID, class FText Text, bool FixText, class UObject* __WorldContext, enum class Enum_LuteType Local_LuteType, class FText Local_Text, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_LuteAbilities_Params_Active_Uses, int32 CallFunc_LuteAbilities_Params_Active_Minutes, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue_2, const class FString& CallFunc_Replace_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "StormMode_ItemEffectText");

	Params::UDHBlueprintFunctionLib_StormMode_C_StormMode_ItemEffectText_Params Parms{};

	Parms.ID = ID;
	Parms.Text = Text;
	Parms.FixText = FixText;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_LuteType = Local_LuteType;
	Parms.Local_Text = Local_Text;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_LuteAbilities_Params_Active_Uses = CallFunc_LuteAbilities_Params_Active_Uses;
	Parms.CallFunc_LuteAbilities_Params_Active_Minutes = CallFunc_LuteAbilities_Params_Active_Minutes;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue_2 = CallFunc_Replace_ReturnValue_2;
	Parms.CallFunc_Replace_ReturnValue_3 = CallFunc_Replace_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue_4 = CallFunc_Replace_ReturnValue_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.TwitchDrop_ShouldUseCatSkin
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bYes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSkinApplied_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::TwitchDrop_ShouldUseCatSkin(class UObject* __WorldContext, bool* bYes, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSkinApplied_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "TwitchDrop_ShouldUseCatSkin");

	Params::UDHBlueprintFunctionLib_StormMode_C_TwitchDrop_ShouldUseCatSkin_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSkinApplied_ReturnValue = CallFunc_IsSkinApplied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bYes != nullptr)
		*bYes = Parms.bYes;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.TwitchDrop_ShouldUseLuteSkin
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bYes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSkinApplied_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::TwitchDrop_ShouldUseLuteSkin(class UObject* __WorldContext, bool* bYes, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSkinApplied_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "TwitchDrop_ShouldUseLuteSkin");

	Params::UDHBlueprintFunctionLib_StormMode_C_TwitchDrop_ShouldUseLuteSkin_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSkinApplied_ReturnValue = CallFunc_IsSkinApplied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bYes != nullptr)
		*bYes = Parms.bYes;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.TwitchDrop_ShouldUseDarkFormSkin
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bYes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSkinApplied_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::TwitchDrop_ShouldUseDarkFormSkin(class UObject* __WorldContext, bool* bYes, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSkinApplied_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "TwitchDrop_ShouldUseDarkFormSkin");

	Params::UDHBlueprintFunctionLib_StormMode_C_TwitchDrop_ShouldUseDarkFormSkin_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSkinApplied_ReturnValue = CallFunc_IsSkinApplied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bYes != nullptr)
		*bYes = Parms.bYes;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.TwitchDrop_ShouldUseWeaponSkin
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bYes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSkinApplied_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::TwitchDrop_ShouldUseWeaponSkin(class UObject* __WorldContext, bool* bYes, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSkinApplied_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "TwitchDrop_ShouldUseWeaponSkin");

	Params::UDHBlueprintFunctionLib_StormMode_C_TwitchDrop_ShouldUseWeaponSkin_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSkinApplied_ReturnValue = CallFunc_IsSkinApplied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bYes != nullptr)
		*bYes = Parms.bYes;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.TwitchDrop_DisplayName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDHTwitchDrop               Drop                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// int32                              Local_Amount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)

void UDHBlueprintFunctionLib_StormMode_C::TwitchDrop_DisplayName(const struct FDHTwitchDrop& Drop, class UObject* __WorldContext, class FText* Name, int32 Local_Amount, const class FString& Local_ID, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool K2Node_SwitchString_CmpSuccess, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "TwitchDrop_DisplayName");

	Params::UDHBlueprintFunctionLib_StormMode_C_TwitchDrop_DisplayName_Params Parms{};

	Parms.Drop = Drop;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Amount = Local_Amount;
	Parms.Local_ID = Local_ID;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.ShuffleActorArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              TargetArray                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ShuffledArray                                                    (Parm, OutParm, HasGetValueTypeHash)
// class AActor*                      Local_EmptyActor                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Local_ShuffledArray                                              (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// TArray<class AActor*>              Local_TargetArray                                                (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::ShuffleActorArray(TArray<class AActor*>& TargetArray, class UObject* __WorldContext, TArray<class AActor*>* ShuffledArray, class AActor* Local_EmptyActor, const TArray<class AActor*>& Local_ShuffledArray, const TArray<class AActor*>& Local_TargetArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "ShuffleActorArray");

	Params::UDHBlueprintFunctionLib_StormMode_C_ShuffleActorArray_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_EmptyActor = Local_EmptyActor;
	Parms.Local_ShuffledArray = Local_ShuffledArray;
	Parms.Local_TargetArray = Local_TargetArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShuffledArray != nullptr)
		*ShuffledArray = std::move(Parms.ShuffledArray);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetCanUnlockAnyRunicEntry
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanUnlock                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CanUnlock                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TotalCost                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RankLvl                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RankID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RowID                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormMode_CurrencyTypeUpgradeCurrency                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RankCostDelta                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RankStartingCost                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RankDelta                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountOfRanks                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_StormMode_PermanentUpgradeCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetCanUnlockAnyRunicEntry(class UObject* __WorldContext, bool* CanUnlock, bool Local_CanUnlock, int32 TotalCost, int32 RankLvl, class FName RankID, class FName RowID, enum class Enum_StormMode_CurrencyType UpgradeCurrency, int32 RankCostDelta, int32 RankStartingCost, float RankDelta, int32 AmountOfRanks, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, class FName CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, const struct FStruct_StormMode_PermanentUpgrade& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetPermanentUpgradeRankLevel_Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetCanUnlockAnyRunicEntry");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetCanUnlockAnyRunicEntry_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_CanUnlock = Local_CanUnlock;
	Parms.TotalCost = TotalCost;
	Parms.RankLvl = RankLvl;
	Parms.RankID = RankID;
	Parms.RowID = RowID;
	Parms.UpgradeCurrency = UpgradeCurrency;
	Parms.RankCostDelta = RankCostDelta;
	Parms.RankStartingCost = RankStartingCost;
	Parms.RankDelta = RankDelta;
	Parms.AmountOfRanks = AmountOfRanks;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level = CallFunc_GetPermanentUpgradeRankLevel_Level;

	UObject::ProcessEvent(Func, &Parms);

	if (CanUnlock != nullptr)
		*CanUnlock = Parms.CanUnlock;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetAscensionName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetAscensionName(class UObject* __WorldContext, class FName* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetAscensionName");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetAscensionName_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DecreaseIncrementByLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Increment                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UDHBlueprintFunctionLib_StormMode_C::DecreaseIncrementByLevel(float Increment, int32 Level, class UObject* __WorldContext, int32 Temp_int_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float Temp_float_Variable, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DecreaseIncrementByLevel");

	Params::UDHBlueprintFunctionLib_StormMode_C_DecreaseIncrementByLevel_Params Parms{};

	Parms.Increment = Increment;
	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.SeedProgressID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::SeedProgressID(class UObject* __WorldContext, class FName* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "SeedProgressID");

	Params::UDHBlueprintFunctionLib_StormMode_C_SeedProgressID_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDialAndIdle_LastSelectedGeneric
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDialAndIdle_LastSelectedGeneric(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDialAndIdle_LastSelectedGeneric");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDialAndIdle_LastSelectedGeneric_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDial_LastSelectedGeneric
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDial_LastSelectedGeneric(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDial_LastSelectedGeneric");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDial_LastSelectedGeneric_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetSlotCategoryFromSlotID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_RuneSlots_IDs      SlotID                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerCategory                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Category_Randomizer>Local_IDs                                                        (Edit, BlueprintVisible)
// TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Category_Randomizer>K2Node_MakeVariable_MakeVariableOutput                           (None)
// enum class Enum_Rune_Category_RandomizerCallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetSlotCategoryFromSlotID(enum class Enum_RuneSlots_IDs& SlotID, class UObject* __WorldContext, enum class Enum_Rune_Category_Randomizer* Category, TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Category_Randomizer> Local_IDs, TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Category_Randomizer> K2Node_MakeVariable_MakeVariableOutput, enum class Enum_Rune_Category_Randomizer CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetSlotCategoryFromSlotID");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetSlotCategoryFromSlotID_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_IDs = Local_IDs;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = Parms.Category;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetSlotSubTypeFromSlotID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_RuneSlots_IDs      SlotID                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Slot_SubType  SubType                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Slot_SubType>Local_IDs                                                        (Edit, BlueprintVisible)
// TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Slot_SubType>K2Node_MakeVariable_MakeVariableOutput                           (None)
// enum class Enum_Rune_Slot_SubType  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetSlotSubTypeFromSlotID(enum class Enum_RuneSlots_IDs& SlotID, class UObject* __WorldContext, enum class Enum_Rune_Slot_SubType* SubType, TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Slot_SubType> Local_IDs, TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Slot_SubType> K2Node_MakeVariable_MakeVariableOutput, enum class Enum_Rune_Slot_SubType CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetSlotSubTypeFromSlotID");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetSlotSubTypeFromSlotID_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_IDs = Local_IDs;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SubType != nullptr)
		*SubType = Parms.SubType;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetSlotTypeFromSlotID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_RuneSlots_IDs      SlotID                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Slot_Type     SlotType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Slot_Type>Local_IDs                                                        (Edit, BlueprintVisible)
// TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Slot_Type>K2Node_MakeVariable_MakeVariableOutput                           (None)
// enum class Enum_Rune_Slot_Type     CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetSlotTypeFromSlotID(enum class Enum_RuneSlots_IDs& SlotID, class UObject* __WorldContext, enum class Enum_Rune_Slot_Type* SlotType, TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Slot_Type> Local_IDs, TMap<enum class Enum_RuneSlots_IDs, enum class Enum_Rune_Slot_Type> K2Node_MakeVariable_MakeVariableOutput, enum class Enum_Rune_Slot_Type CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetSlotTypeFromSlotID");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetSlotTypeFromSlotID_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_IDs = Local_IDs;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotType != nullptr)
		*SlotType = Parms.SlotType;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.HasRuneForSlotID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_RuneSlots_IDs      SlotID                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_StormMode_C::HasRuneForSlotID(enum class Enum_RuneSlots_IDs& SlotID, class UObject* __WorldContext, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Map_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "HasRuneForSlotID");

	Params::UDHBlueprintFunctionLib_StormMode_C_HasRuneForSlotID_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.SetPillarMat
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModeArea      Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CryptSnow_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        SM_Main                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        SM_Cube_1                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        SM_Cube_2                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        SM_Cube_3                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CryptSnow_                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeArea      Local_Area                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeArea      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeArea      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::SetPillarMat(enum class Enum_StormModeArea Area, bool CryptSnow_, class UStaticMeshComponent* SM_Main, class UStaticMeshComponent* SM_Cube_1, class UStaticMeshComponent* SM_Cube_2, class UStaticMeshComponent* SM_Cube_3, class UObject* __WorldContext, bool Local_CryptSnow_, enum class Enum_StormModeArea Local_Area, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, enum class Enum_StormModeArea Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable_5, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, class UMaterialInterface* Temp_object_Variable_8, class UMaterialInterface* Temp_object_Variable_9, class UMaterialInterface* K2Node_Select_Default, enum class Enum_StormModeArea Temp_byte_Variable_1, class UMaterialInterface* Temp_object_Variable_10, class UMaterialInterface* Temp_object_Variable_11, bool Temp_bool_Variable_1, class UMaterialInterface* K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2, class UMaterialInterface* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "SetPillarMat");

	Params::UDHBlueprintFunctionLib_StormMode_C_SetPillarMat_Params Parms{};

	Parms.Area = Area;
	Parms.CryptSnow_ = CryptSnow_;
	Parms.SM_Main = SM_Main;
	Parms.SM_Cube_1 = SM_Cube_1;
	Parms.SM_Cube_2 = SM_Cube_2;
	Parms.SM_Cube_3 = SM_Cube_3;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_CryptSnow_ = Local_CryptSnow_;
	Parms.Local_Area = Local_Area;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.SM_IntroDial
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::SM_IntroDial(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "SM_IntroDial");

	Params::UDHBlueprintFunctionLib_StormMode_C_SM_IntroDial_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.BossDial_DarkShells
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::BossDial_DarkShells(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "BossDial_DarkShells");

	Params::UDHBlueprintFunctionLib_StormMode_C_BossDial_DarkShells_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.BossDial_Cathedral
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::BossDial_Cathedral(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "BossDial_Cathedral");

	Params::UDHBlueprintFunctionLib_StormMode_C_BossDial_Cathedral_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.BossDial_Crypt
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::BossDial_Crypt(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "BossDial_Crypt");

	Params::UDHBlueprintFunctionLib_StormMode_C_BossDial_Crypt_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.BossDial_Fire
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::BossDial_Fire(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "BossDial_Fire");

	Params::UDHBlueprintFunctionLib_StormMode_C_BossDial_Fire_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.LuteDial
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::LuteDial(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "LuteDial");

	Params::UDHBlueprintFunctionLib_StormMode_C_LuteDial_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.SeedDial_NextIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::SeedDial_NextIndex(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "SeedDial_NextIndex");

	Params::UDHBlueprintFunctionLib_StormMode_C_SeedDial_NextIndex_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.SeedDial_RefusedLast
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::SeedDial_RefusedLast(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "SeedDial_RefusedLast");

	Params::UDHBlueprintFunctionLib_StormMode_C_SeedDial_RefusedLast_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.InteractDial_MiscNextIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::InteractDial_MiscNextIndex(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "InteractDial_MiscNextIndex");

	Params::UDHBlueprintFunctionLib_StormMode_C_InteractDial_MiscNextIndex_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Interact Dial Talked Once This Run
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::Interact_Dial_Talked_Once_This_Run(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Interact Dial Talked Once This Run");

	Params::UDHBlueprintFunctionLib_StormMode_C_Interact_Dial_Talked_Once_This_Run_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDial_DiedInSM
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDial_DiedInSM(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDial_DiedInSM");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDial_DiedInSM_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDial_First
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDial_First(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDial_First");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDial_First_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDial_VisitorThreadNextIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDial_VisitorThreadNextIndex(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDial_VisitorThreadNextIndex");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDial_VisitorThreadNextIndex_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDial_GenericTriggeredInARow
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDial_GenericTriggeredInARow(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDial_GenericTriggeredInARow");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDial_GenericTriggeredInARow_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDial_ReactionID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_StormModePlayerKillerKiller                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModePlayerKillerTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDial_ReactionID(enum class Enum_StormModePlayerKiller Killer, class UObject* __WorldContext, class FName* PCIntName, enum class Enum_StormModePlayerKiller Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDial_ReactionID");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDial_ReactionID_Params Parms{};

	Parms.Killer = Killer;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDial_KillerName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDial_KillerName(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDial_KillerName");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDial_KillerName_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDial_GetKiller
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModePlayerKillerKiller                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_KillerName_PCIntName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDial_GetKiller(class UObject* __WorldContext, enum class Enum_StormModePlayerKiller* Killer, class FName CallFunc_DeathDial_KillerName_PCIntName, int32 CallFunc_GetNamedPCInt_Value, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDial_GetKiller");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDial_GetKiller_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_DeathDial_KillerName_PCIntName = CallFunc_DeathDial_KillerName_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Killer != nullptr)
		*Killer = Parms.Killer;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.DeathDial_SetKiller
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_StormModePlayerKillerKiller                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DeathDial_KillerName_PCIntName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::DeathDial_SetKiller(enum class Enum_StormModePlayerKiller Killer, class UObject* __WorldContext, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FName CallFunc_DeathDial_KillerName_PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "DeathDial_SetKiller");

	Params::UDHBlueprintFunctionLib_StormMode_C_DeathDial_SetKiller_Params Parms{};

	Parms.Killer = Killer;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_DeathDial_KillerName_PCIntName = CallFunc_DeathDial_KillerName_PCIntName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GoldenPathDialogueCounterName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GoldenPathDialogueCounterName(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GoldenPathDialogueCounterName");

	Params::UDHBlueprintFunctionLib_StormMode_C_GoldenPathDialogueCounterName_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Next Golden Path Dialogue Index Name
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PCIntName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::Next_Golden_Path_Dialogue_Index_Name(class UObject* __WorldContext, class FName* PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Next Golden Path Dialogue Index Name");

	Params::UDHBlueprintFunctionLib_StormMode_C_Next_Golden_Path_Dialogue_Index_Name_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PCIntName != nullptr)
		*PCIntName = Parms.PCIntName;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Rune_LegendaryEffectText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text_In                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text_Out                                                         (Parm, OutParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FStruct_LegendaryEffect     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UDHBlueprintFunctionLib_StormMode_C::Rune_LegendaryEffectText(enum class Enum_Rune_Tier Tier, class FName ID, class FText Text_In, class UObject* __WorldContext, class FText* Text_Out, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FStruct_LegendaryEffect& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Rune_LegendaryEffectText");

	Params::UDHBlueprintFunctionLib_StormMode_C_Rune_LegendaryEffectText_Params Parms{};

	Parms.Tier = Tier;
	Parms.ID = ID;
	Parms.Text_In = Text_In;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text_Out != nullptr)
		*Text_Out = Parms.Text_Out;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.SumFloatArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Sum                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      Local_Array                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// float                              Local_SumOfArray                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::SumFloatArray(TArray<float>& Array, class UObject* __WorldContext, float* Sum, const TArray<float>& Local_Array, float Local_SumOfArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "SumFloatArray");

	Params::UDHBlueprintFunctionLib_StormMode_C_SumFloatArray_Params Parms{};

	Parms.Array = Array;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Array = Local_Array;
	Parms.Local_SumOfArray = Local_SumOfArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sum != nullptr)
		*Sum = Parms.Sum;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetRuneFromID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Local_Tier                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                Local_Rune                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_UpgradeFound                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Local_DataTable                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetRunesFromTable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                K2Node_MakeStruct_Struct_Rune                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetRuneFromID(class FName ID, enum class Enum_Rune_Tier Tier, class UObject* __WorldContext, bool* Found_, struct FStruct_Rune* Rune, enum class Enum_Rune_Tier Local_Tier, const struct FStruct_Rune& Local_Rune, bool Local_UpgradeFound, class FName Local_ID, class UDataTable* Local_DataTable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UDataTable* CallFunc_GetRunesFromTable_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FStruct_Rune& K2Node_MakeStruct_Struct_Rune, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetRuneFromID");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetRuneFromID_Params Parms{};

	Parms.ID = ID;
	Parms.Tier = Tier;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Tier = Local_Tier;
	Parms.Local_Rune = Local_Rune;
	Parms.Local_UpgradeFound = Local_UpgradeFound;
	Parms.Local_ID = Local_ID;
	Parms.Local_DataTable = Local_DataTable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetRunesFromTable_ReturnValue = CallFunc_GetRunesFromTable_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_Struct_Rune = K2Node_MakeStruct_Struct_Rune;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_ != nullptr)
		*Found_ = Parms.Found_;

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetMiscRuneFromID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              XValue                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                Out_Row                                                          (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                K2Node_MakeStruct_Struct_Rune                                    (HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetMiscRuneFromID(class FName ID, bool CustomX, float XValue, class UObject* __WorldContext, struct FStruct_Rune* Out_Row, bool Temp_bool_Variable, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float K2Node_Select_Default, const struct FStruct_Rune& K2Node_MakeStruct_Struct_Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetMiscRuneFromID");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetMiscRuneFromID_Params Parms{};

	Parms.ID = ID;
	Parms.CustomX = CustomX;
	Parms.XValue = XValue;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Struct_Rune = K2Node_MakeStruct_Struct_Rune;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Rune_BuiltTierText
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UDHBlueprintFunctionLib_StormMode_C::Rune_BuiltTierText(const class FString& Source, enum class Enum_Rune_Tier Tier, class UObject* __WorldContext, enum class Enum_Rune_Tier Temp_byte_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& Temp_string_Variable, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Rune_BuiltTierText");

	Params::UDHBlueprintFunctionLib_StormMode_C_Rune_BuiltTierText_Params Parms{};

	Parms.Source = Source;
	Parms.Tier = Tier;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.StormMode_AddWeaponRandomUpgrade
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_AskForRandomWeaponUpgrade_GrantUpgrade_       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_StormMode_AskForRandomWeaponUpgrade_Upgrade             (HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::StormMode_AddWeaponRandomUpgrade(class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_AskForRandomWeaponUpgrade_GrantUpgrade_, const struct FStruct_Rune& CallFunc_StormMode_AskForRandomWeaponUpgrade_Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "StormMode_AddWeaponRandomUpgrade");

	Params::UDHBlueprintFunctionLib_StormMode_C_StormMode_AddWeaponRandomUpgrade_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_AskForRandomWeaponUpgrade_GrantUpgrade_ = CallFunc_StormMode_AskForRandomWeaponUpgrade_GrantUpgrade_;
	Parms.CallFunc_StormMode_AskForRandomWeaponUpgrade_Upgrade = CallFunc_StormMode_AskForRandomWeaponUpgrade_Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetMilestoneUnlockForWeapon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetMilestoneUnlockForWeapon(enum class EComboTypes Weapon, class UObject* __WorldContext, class FName* ID, enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetMilestoneUnlockForWeapon");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetMilestoneUnlockForWeapon_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.CreateStormModeDialogue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDialogueLine>     Dialogue_Sequence                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Dialogue_VoiceOver_C*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Dialogue_VoiceOver_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUI_Dialogue_VoiceOver_C* UDHBlueprintFunctionLib_StormMode_C::CreateStormModeDialogue(TArray<struct FDHDialogueLine>& Dialogue_Sequence, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Dialogue_VoiceOver_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "CreateStormModeDialogue");

	Params::UDHBlueprintFunctionLib_StormMode_C_CreateStormModeDialogue_Params Parms{};

	Parms.Dialogue_Sequence = Dialogue_Sequence;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetNotifierComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStormModeNotifier_Component_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStormModeNotifier_Component_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UStormModeNotifier_Component_C* UDHBlueprintFunctionLib_StormMode_C::GetNotifierComponent(class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UStormModeNotifier_Component_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetNotifierComponent");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetNotifierComponent_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetInfusionToUnlockFromGland
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGland_Types            Gland                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Riposte                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGland_Types            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetInfusionToUnlockFromGland(enum class EGland_Types Gland, class UObject* __WorldContext, enum class ERiposteTypes* Riposte, enum class EGland_Types Temp_byte_Variable, enum class ERiposteTypes Temp_byte_Variable_1, enum class ERiposteTypes Temp_byte_Variable_2, enum class ERiposteTypes Temp_byte_Variable_3, enum class ERiposteTypes K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetInfusionToUnlockFromGland");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetInfusionToUnlockFromGland_Params Parms{};

	Parms.Gland = Gland;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Riposte != nullptr)
		*Riposte = Parms.Riposte;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetStartingInfusionIDs
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UDHBlueprintFunctionLib_StormMode_C::GetStartingInfusionIDs(enum class ERiposteTypes Riposte, class UObject* __WorldContext, enum class ERiposteTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetStartingInfusionIDs");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetStartingInfusionIDs_Params Parms{};

	Parms.Riposte = Riposte;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetRiposteUpgradeIDs
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UDHBlueprintFunctionLib_StormMode_C::GetRiposteUpgradeIDs(enum class ERiposteTypes Riposte, class UObject* __WorldContext, enum class ERiposteTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetRiposteUpgradeIDs");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetRiposteUpgradeIDs_Params Parms{};

	Parms.Riposte = Riposte;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetInfusionNames
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERiposteTypes           Infusion                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// enum class ERiposteTypes           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UDHBlueprintFunctionLib_StormMode_C::GetInfusionNames(enum class ERiposteTypes Infusion, class UObject* __WorldContext, class FText* Name, enum class ERiposteTypes Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetInfusionNames");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetInfusionNames_Params Parms{};

	Parms.Infusion = Infusion;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetShellFromNameID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Shell                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             StormModeSelectedShell                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetShellFromNameID(class FName Selection, class UObject* __WorldContext, enum class EArmorTypes* Shell, enum class EArmorTypes StormModeSelectedShell, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetShellFromNameID");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetShellFromNameID_Params Parms{};

	Parms.Selection = Selection;
	Parms.__WorldContext = __WorldContext;
	Parms.StormModeSelectedShell = StormModeSelectedShell;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Shell != nullptr)
		*Shell = Parms.Shell;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.StormMode_AddRandomUpgrade
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_StormMode_AskRandomUpgrade_Upgrade                      (HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::StormMode_AddRandomUpgrade(class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_Rune& CallFunc_StormMode_AskRandomUpgrade_Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "StormMode_AddRandomUpgrade");

	Params::UDHBlueprintFunctionLib_StormMode_C_StormMode_AddRandomUpgrade_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_AskRandomUpgrade_Upgrade = CallFunc_StormMode_AskRandomUpgrade_Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.StormMode_AddWeaponToInventory
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItem>      Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryItem>      ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      Local_Array                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

TArray<struct FInventoryItem> UDHBlueprintFunctionLib_StormMode_C::StormMode_AddWeaponToInventory(TArray<struct FInventoryItem>& Inventory, enum class EComboTypes Weapon, class UObject* __WorldContext, bool* Success, const TArray<struct FInventoryItem>& Local_Array, enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName K2Node_Select_Default, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "StormMode_AddWeaponToInventory");

	Params::UDHBlueprintFunctionLib_StormMode_C_StormMode_AddWeaponToInventory_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Weapon = Weapon;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Array = Local_Array;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.StormMode_ResetInventory
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItem>      Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      Return                                                           (Parm, OutParm, HasGetValueTypeHash)
// struct FInventoryItem              Local_Item                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Local_ItemIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      Local_Array                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              K2Node_MakeStruct_InventoryItem                                  (HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::StormMode_ResetInventory(TArray<struct FInventoryItem>& Inventory, class UObject* __WorldContext, TArray<struct FInventoryItem>* Return, const struct FInventoryItem& Local_Item, int32 Local_ItemIndex, const TArray<struct FInventoryItem>& Local_Array, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_5, bool CallFunc_EqualEqual_NameName_ReturnValue_6, bool CallFunc_EqualEqual_NameName_ReturnValue_7, bool CallFunc_EqualEqual_NameName_ReturnValue_8, bool CallFunc_EqualEqual_NameName_ReturnValue_9, bool CallFunc_EqualEqual_NameName_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, const struct FInventoryItem& K2Node_MakeStruct_InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "StormMode_ResetInventory");

	Params::UDHBlueprintFunctionLib_StormMode_C_StormMode_ResetInventory_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Item = Local_Item;
	Parms.Local_ItemIndex = Local_ItemIndex;
	Parms.Local_Array = Local_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_4 = CallFunc_EqualEqual_NameName_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_5 = CallFunc_EqualEqual_NameName_ReturnValue_5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_6 = CallFunc_EqualEqual_NameName_ReturnValue_6;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_7 = CallFunc_EqualEqual_NameName_ReturnValue_7;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_8 = CallFunc_EqualEqual_NameName_ReturnValue_8;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_9 = CallFunc_EqualEqual_NameName_ReturnValue_9;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_10 = CallFunc_EqualEqual_NameName_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_11 = CallFunc_EqualEqual_NameName_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_12 = CallFunc_EqualEqual_NameName_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_13 = CallFunc_EqualEqual_NameName_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_14 = CallFunc_EqualEqual_NameName_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.K2Node_MakeStruct_InventoryItem = K2Node_MakeStruct_InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.IsX%AtMax?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         X_                                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_StormMode_C::IsX_AtMax_(int32 Max, struct FStruct_Rune_Values& X_, enum class Enum_Rune_Tier Tier, class UObject* __WorldContext, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class Enum_Rune_Tier Temp_byte_Variable, int32 K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "IsX%AtMax?");

	Params::UDHBlueprintFunctionLib_StormMode_C_IsX_AtMax__Params Parms{};

	Parms.Max = Max;
	Parms.X_ = X_;
	Parms.Tier = Tier;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetRuneValueTypeFromDesc
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Desc                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_RuneValueType      ValueType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_X                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_X_                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_RuneValueType      Local_ValueType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetRuneValueTypeFromDesc(class FText Desc, class UObject* __WorldContext, enum class Enum_RuneValueType* ValueType, bool Local_X, bool Local_X_, enum class Enum_RuneValueType Local_ValueType, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetRuneValueTypeFromDesc");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetRuneValueTypeFromDesc_Params Parms{};

	Parms.Desc = Desc;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_X = Local_X;
	Parms.Local_X_ = Local_X_;
	Parms.Local_ValueType = Local_ValueType;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_2 = CallFunc_Contains_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValueType != nullptr)
		*ValueType = Parms.ValueType;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Rune_IncrementValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IncrementValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UDHBlueprintFunctionLib_StormMode_C::Rune_IncrementValue(enum class Enum_Rune_Tier Tier, enum class Enum_Rune_Tier Condition, int32 CurrentValue, int32 IncrementValue, int32 Max, class UObject* __WorldContext, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Rune_IncrementValue");

	Params::UDHBlueprintFunctionLib_StormMode_C_Rune_IncrementValue_Params Parms{};

	Parms.Tier = Tier;
	Parms.Condition = Condition;
	Parms.CurrentValue = CurrentValue;
	Parms.IncrementValue = IncrementValue;
	Parms.Max = Max;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Rune_HandleLevelUp
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FRandomStream               Stream                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                RuneOut                                                          (Parm, OutParm, HasGetValueTypeHash)
// bool                               RuneCapped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Increment_X__Out                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Increment_X_Out                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Level                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_X_Max                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Capped_                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_RuneValueType      Local_ValueType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_RowFound                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune_LevelUpDetails Local_DTRow                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Local_RandomizedIncrementX                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_RandomizedIncrementX_                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         Local_X                                                          (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         Local_X__Upgraded                                                (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         Local_X_                                                         (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Local_Tier                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_LevelUpDetails Local_DefaultRow                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CallFunc_Rune_IncrementValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Rune_IncrementValue_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Rune_IncrementValue_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Rune_IncrementValue_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         K2Node_MakeStruct_Struct_Rune_Values                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_RuneValueType      CallFunc_GetRuneValueTypeFromDesc_ValueType                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Rune_IncrementValue_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Rune_IncrementValue_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Rune_IncrementValue_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsX_AtMax__ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune_LevelUpDetails CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_DecreaseIncrementByLevel_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_RuneValueType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Rune_IncrementValue_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         K2Node_MakeStruct_Struct_Rune_Values_1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_RuneValueType      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         K2Node_Select_Default_1                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DecreaseIncrementByLevel_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::Rune_HandleLevelUp(struct FStruct_Rune& Rune, struct FRandomStream& Stream, class UObject* __WorldContext, struct FStruct_Rune* RuneOut, bool* RuneCapped, int32* Increment_X__Out, int32* Increment_X_Out, int32 Local_Level, int32 Local_X_Max, bool Local_Capped_, enum class Enum_RuneValueType Local_ValueType, bool Local_RowFound, const struct FStruct_Rune_LevelUpDetails& Local_DTRow, int32 Local_RandomizedIncrementX, int32 Local_RandomizedIncrementX_, const struct FStruct_Rune_Values& Local_X, const struct FStruct_Rune_Values& Local_X__Upgraded, const struct FStruct_Rune_Values& Local_X_, enum class Enum_Rune_Tier Local_Tier, class FName Local_ID, const struct FStruct_Rune_LevelUpDetails& Local_DefaultRow, int32 CallFunc_Rune_IncrementValue_ReturnValue, int32 CallFunc_Rune_IncrementValue_ReturnValue_1, int32 CallFunc_Rune_IncrementValue_ReturnValue_2, int32 CallFunc_Rune_IncrementValue_ReturnValue_3, const struct FStruct_Rune_Values& K2Node_MakeStruct_Struct_Rune_Values, enum class Enum_RuneValueType CallFunc_GetRuneValueTypeFromDesc_ValueType, const struct FVector2D& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, int32 CallFunc_Rune_IncrementValue_ReturnValue_4, int32 CallFunc_Rune_IncrementValue_ReturnValue_5, int32 CallFunc_Rune_IncrementValue_ReturnValue_6, bool CallFunc_IsX_AtMax__ReturnValue, const struct FStruct_Rune_LevelUpDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_DecreaseIncrementByLevel_ReturnValue, int32 CallFunc_FCeil_ReturnValue, enum class Enum_RuneValueType Temp_byte_Variable, int32 CallFunc_Rune_IncrementValue_ReturnValue_7, const struct FStruct_Rune_Values& K2Node_MakeStruct_Struct_Rune_Values_1, const struct FStruct_Rune_Values& K2Node_Select_Default, enum class Enum_RuneValueType Temp_byte_Variable_1, const struct FVector2D& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FStruct_Rune_Values& K2Node_Select_Default_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_DecreaseIncrementByLevel_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Rune_HandleLevelUp");

	Params::UDHBlueprintFunctionLib_StormMode_C_Rune_HandleLevelUp_Params Parms{};

	Parms.Rune = Rune;
	Parms.Stream = Stream;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Level = Local_Level;
	Parms.Local_X_Max = Local_X_Max;
	Parms.Local_Capped_ = Local_Capped_;
	Parms.Local_ValueType = Local_ValueType;
	Parms.Local_RowFound = Local_RowFound;
	Parms.Local_DTRow = Local_DTRow;
	Parms.Local_RandomizedIncrementX = Local_RandomizedIncrementX;
	Parms.Local_RandomizedIncrementX_ = Local_RandomizedIncrementX_;
	Parms.Local_X = Local_X;
	Parms.Local_X__Upgraded = Local_X__Upgraded;
	Parms.Local_X_ = Local_X_;
	Parms.Local_Tier = Local_Tier;
	Parms.Local_ID = Local_ID;
	Parms.Local_DefaultRow = Local_DefaultRow;
	Parms.CallFunc_Rune_IncrementValue_ReturnValue = CallFunc_Rune_IncrementValue_ReturnValue;
	Parms.CallFunc_Rune_IncrementValue_ReturnValue_1 = CallFunc_Rune_IncrementValue_ReturnValue_1;
	Parms.CallFunc_Rune_IncrementValue_ReturnValue_2 = CallFunc_Rune_IncrementValue_ReturnValue_2;
	Parms.CallFunc_Rune_IncrementValue_ReturnValue_3 = CallFunc_Rune_IncrementValue_ReturnValue_3;
	Parms.K2Node_MakeStruct_Struct_Rune_Values = K2Node_MakeStruct_Struct_Rune_Values;
	Parms.CallFunc_GetRuneValueTypeFromDesc_ValueType = CallFunc_GetRuneValueTypeFromDesc_ValueType;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;
	Parms.CallFunc_Rune_IncrementValue_ReturnValue_4 = CallFunc_Rune_IncrementValue_ReturnValue_4;
	Parms.CallFunc_Rune_IncrementValue_ReturnValue_5 = CallFunc_Rune_IncrementValue_ReturnValue_5;
	Parms.CallFunc_Rune_IncrementValue_ReturnValue_6 = CallFunc_Rune_IncrementValue_ReturnValue_6;
	Parms.CallFunc_IsX_AtMax__ReturnValue = CallFunc_IsX_AtMax__ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_DecreaseIncrementByLevel_ReturnValue = CallFunc_DecreaseIncrementByLevel_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Rune_IncrementValue_ReturnValue_7 = CallFunc_Rune_IncrementValue_ReturnValue_7;
	Parms.K2Node_MakeStruct_Struct_Rune_Values_1 = K2Node_MakeStruct_Struct_Rune_Values_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue_1 = CallFunc_RandomFloatInRangeFromStream_ReturnValue_1;
	Parms.CallFunc_DecreaseIncrementByLevel_ReturnValue_1 = CallFunc_DecreaseIncrementByLevel_ReturnValue_1;
	Parms.CallFunc_FCeil_ReturnValue_1 = CallFunc_FCeil_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RuneOut != nullptr)
		*RuneOut = std::move(Parms.RuneOut);

	if (RuneCapped != nullptr)
		*RuneCapped = Parms.RuneCapped;

	if (Increment_X__Out != nullptr)
		*Increment_X__Out = Parms.Increment_X__Out;

	if (Increment_X_Out != nullptr)
		*Increment_X_Out = Parms.Increment_X_Out;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.HasThisMiscRune?
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_Rune                SelectedRune                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// struct FStruct_Rune                Local_Rune                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_StormMode_C::HasThisMiscRune_(struct FStruct_Rune& SelectedRune, class UObject* __WorldContext, struct FStruct_Rune* Rune, const struct FStruct_Rune& Local_Rune, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FStruct_Rune& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "HasThisMiscRune?");

	Params::UDHBlueprintFunctionLib_StormMode_C_HasThisMiscRune__Params Parms{};

	Parms.SelectedRune = SelectedRune;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Rune = Local_Rune;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetRuneMiscX
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// float                              Rune_Misc_X                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

class FString UDHBlueprintFunctionLib_StormMode_C::GetRuneMiscX(const struct FStruct_Rune& Rune, class UObject* __WorldContext, float* Rune_Misc_X, int32 CallFunc_FCeil_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetRuneMiscX");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetRuneMiscX_Params Parms{};

	Parms.Rune = Rune;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Rune_Misc_X != nullptr)
		*Rune_Misc_X = Parms.Rune_Misc_X;

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetRuneX
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_Rune                Struct_Rune                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UDHBlueprintFunctionLib_StormMode_C::GetRuneX(struct FStruct_Rune& Struct_Rune, class UObject* __WorldContext, enum class Enum_Rune_Tier Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetRuneX");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetRuneX_Params Parms{};

	Parms.Struct_Rune = Struct_Rune;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetRuneX%
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_Rune                Struct_Rune                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UDHBlueprintFunctionLib_StormMode_C::GetRuneX_(struct FStruct_Rune& Struct_Rune, class UObject* __WorldContext, enum class Enum_Rune_Tier Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetRuneX%");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetRuneX__Params Parms{};

	Parms.Struct_Rune = Struct_Rune;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.IsSpecialRune?
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetSpecialRunesIDs_IDs                                  (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_StormMode_C::IsSpecialRune_(class FName& ID, class UObject* __WorldContext, TArray<class FName>& CallFunc_GetSpecialRunesIDs_IDs, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "IsSpecialRune?");

	Params::UDHBlueprintFunctionLib_StormMode_C_IsSpecialRune__Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetSpecialRunesIDs_IDs = CallFunc_GetSpecialRunesIDs_IDs;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetWeaponNames
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UDHBlueprintFunctionLib_StormMode_C::GetWeaponNames(enum class EComboTypes Weapon, class UObject* __WorldContext, enum class EComboTypes Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetWeaponNames");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetWeaponNames_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.AddPermanentUpgradeRankLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::AddPermanentUpgradeRankLevel(class FName& Key, int32& Value, class UObject* __WorldContext, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "AddPermanentUpgradeRankLevel");

	Params::UDHBlueprintFunctionLib_StormMode_C_AddPermanentUpgradeRankLevel_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.RuneUpgrade_BuildText_X%
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              UpgradeRankLvl                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      MathSybol                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Has_                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UDHBlueprintFunctionLib_StormMode_C::RuneUpgrade_BuildText_X_(class FText Text, int32 UpgradeRankLvl, const class FString& MathSybol, bool Has_, class UObject* __WorldContext, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "RuneUpgrade_BuildText_X%");

	Params::UDHBlueprintFunctionLib_StormMode_C_RuneUpgrade_BuildText_X__Params Parms{};

	Parms.Text = Text;
	Parms.UpgradeRankLvl = UpgradeRankLvl;
	Parms.MathSybol = MathSybol;
	Parms.Has_ = Has_;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetPermanentUpgradeRankLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetPermanentUpgradeRankLevel(class FName& Key, class UObject* __WorldContext, int32* Level, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetPermanentUpgradeRankLevel");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetPermanentUpgradeRankLevel_Params Parms{};

	Parms.Key = Key;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetImmediateRuneFromID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetImmediateRuneFromID(class FName RowName, class UObject* __WorldContext, bool* IsValid_, struct FStruct_Rune* Rune, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetImmediateRuneFromID");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetImmediateRuneFromID_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid_ != nullptr)
		*IsValid_ = Parms.IsValid_;

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetImmediateEffectRunesIDs
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                IDs                                                              (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                Local_AllImmediateEffectRunesIDs                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetImmediateEffectRunesIDs(class UObject* __WorldContext, TArray<class FName>* IDs, const TArray<class FName>& Local_AllImmediateEffectRunesIDs, TArray<class FName>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetImmediateEffectRunesIDs");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetImmediateEffectRunesIDs_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_AllImmediateEffectRunesIDs = Local_AllImmediateEffectRunesIDs;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (IDs != nullptr)
		*IDs = std::move(Parms.IDs);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.ShuffleActorArrayWithStream
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              TargetArray                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FRandomStream               Stream                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ShuffledArray                                                    (Parm, OutParm, HasGetValueTypeHash)
// class AActor*                      Local_EmptyActor                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Local_ShuffledArray                                              (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// TArray<class AActor*>              Local_TargetArray                                                (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerFromStream_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::ShuffleActorArrayWithStream(TArray<class AActor*>& TargetArray, struct FRandomStream& Stream, class UObject* __WorldContext, TArray<class AActor*>* ShuffledArray, class AActor* Local_EmptyActor, const TArray<class AActor*>& Local_ShuffledArray, const TArray<class AActor*>& Local_TargetArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "ShuffleActorArrayWithStream");

	Params::UDHBlueprintFunctionLib_StormMode_C_ShuffleActorArrayWithStream_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.Stream = Stream;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_EmptyActor = Local_EmptyActor;
	Parms.Local_ShuffledArray = Local_ShuffledArray;
	Parms.Local_TargetArray = Local_TargetArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomIntegerFromStream_ReturnValue = CallFunc_RandomIntegerFromStream_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShuffledArray != nullptr)
		*ShuffledArray = std::move(Parms.ShuffledArray);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetBossDefeatedRunesIDs
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                IDs                                                              (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                Local_BossDefeatedIDs                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetBossDefeatedRunesIDs(class UObject* __WorldContext, TArray<class FName>* IDs, const TArray<class FName>& Local_BossDefeatedIDs, TArray<class FName>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetBossDefeatedRunesIDs");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetBossDefeatedRunesIDs_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_BossDefeatedIDs = Local_BossDefeatedIDs;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (IDs != nullptr)
		*IDs = std::move(Parms.IDs);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetGlandTakenRunesIDs
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                IDs                                                              (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                Local_GlandTakenIDs                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetGlandTakenRunesIDs(class UObject* __WorldContext, TArray<class FName>* IDs, const TArray<class FName>& Local_GlandTakenIDs, TArray<class FName>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetGlandTakenRunesIDs");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetGlandTakenRunesIDs_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_GlandTakenIDs = Local_GlandTakenIDs;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (IDs != nullptr)
		*IDs = std::move(Parms.IDs);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetHasRuneFromID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemToFind                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_StormMode_C::GetHasRuneFromID(class FName ItemToFind, class UObject* __WorldContext, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetHasRuneFromID");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetHasRuneFromID_Params Parms{};

	Parms.ItemToFind = ItemToFind;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetChaliceRunesIDs
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                IDs                                                              (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                Local_UnlockChaliceIDs                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetChaliceRunesIDs(class UObject* __WorldContext, TArray<class FName>* IDs, const TArray<class FName>& Local_UnlockChaliceIDs, TArray<class FName>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetChaliceRunesIDs");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetChaliceRunesIDs_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_UnlockChaliceIDs = Local_UnlockChaliceIDs;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (IDs != nullptr)
		*IDs = std::move(Parms.IDs);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetSpecialRunesIDs
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                IDs                                                              (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                Local_AllSpecialRunesIDs                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetSpecialRunesIDs(class UObject* __WorldContext, TArray<class FName>* IDs, const TArray<class FName>& Local_AllSpecialRunesIDs, TArray<class FName>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetSpecialRunesIDs");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetSpecialRunesIDs_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_AllSpecialRunesIDs = Local_AllSpecialRunesIDs;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (IDs != nullptr)
		*IDs = std::move(Parms.IDs);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetSpecialRuneFromID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetSpecialRuneFromID(class FName RowName, class UObject* __WorldContext, bool* IsValid_, struct FStruct_Rune* Rune, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetSpecialRuneFromID");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetSpecialRuneFromID_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid_ != nullptr)
		*IsValid_ = Parms.IsValid_;

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetOpenAreasRuneIDs
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                IDs                                                              (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                Local_OpenAreasRuneNames                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetOpenAreasRuneIDs(class UObject* __WorldContext, TArray<class FName>* IDs, const TArray<class FName>& Local_OpenAreasRuneNames, TArray<class FName>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetOpenAreasRuneIDs");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetOpenAreasRuneIDs_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_OpenAreasRuneNames = Local_OpenAreasRuneNames;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (IDs != nullptr)
		*IDs = std::move(Parms.IDs);

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetSlotMiscRune
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                Current_Rune_Misc                                                (Parm, OutParm, HasGetValueTypeHash)
// bool                               HasRune_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetSlotMiscRune(class FName ID, class UObject* __WorldContext, struct FStruct_Rune* Current_Rune_Misc, bool* HasRune_, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, const struct FStruct_Rune& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetSlotMiscRune");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetSlotMiscRune_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Rune_Misc != nullptr)
		*Current_Rune_Misc = std::move(Parms.Current_Rune_Misc);

	if (HasRune_ != nullptr)
		*HasRune_ = Parms.HasRune_;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Randomizer_FloatToInt
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FRandomStream               Seed                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Result                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_ArraySum                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Random                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::Randomizer_FloatToInt(TArray<float>& Array, struct FRandomStream& Seed, class UObject* __WorldContext, int32* Result, int32 Local_Result, float Local_ArraySum, float Local_Random, bool Temp_bool_True_if_break_was_hit_Variable, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Randomizer_FloatToInt");

	Params::UDHBlueprintFunctionLib_StormMode_C_Randomizer_FloatToInt_Params Parms{};

	Parms.Array = Array;
	Parms.Seed = Seed;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Result = Local_Result;
	Parms.Local_ArraySum = Local_ArraySum;
	Parms.Local_Random = Local_Random;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetSlotIDsForCategory
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_RuneSlots_IDs      Improvement                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_RuneSlots_IDs      SpecialEffect                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs>Local_SpecialEffectIDs                                           (Edit, BlueprintVisible)
// TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs>Local_ImprovementIDs                                             (Edit, BlueprintVisible)
// TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs>K2Node_MakeVariable_MakeVariableOutput                           (None)
// TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs>K2Node_MakeVariable_MakeVariableOutput_1                         (None)
// enum class Enum_RuneSlots_IDs      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_RuneSlots_IDs      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetSlotIDsForCategory(enum class Enum_Rune_Category_Randomizer& Category, class UObject* __WorldContext, enum class Enum_RuneSlots_IDs* Improvement, enum class Enum_RuneSlots_IDs* SpecialEffect, TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs> Local_SpecialEffectIDs, TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs> Local_ImprovementIDs, TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs> K2Node_MakeVariable_MakeVariableOutput, TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs> K2Node_MakeVariable_MakeVariableOutput_1, enum class Enum_RuneSlots_IDs CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class Enum_RuneSlots_IDs CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetSlotIDsForCategory");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetSlotIDsForCategory_Params Parms{};

	Parms.Category = Category;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_SpecialEffectIDs = Local_SpecialEffectIDs;
	Parms.Local_ImprovementIDs = Local_ImprovementIDs;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.K2Node_MakeVariable_MakeVariableOutput_1 = K2Node_MakeVariable_MakeVariableOutput_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Improvement != nullptr)
		*Improvement = Parms.Improvement;

	if (SpecialEffect != nullptr)
		*SpecialEffect = Parms.SpecialEffect;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetCategoryRuneTexture
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Category_RandomizerSelect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerLocal_Category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Local_Weapon                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_19                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetCategoryRuneTexture(enum class Enum_Rune_Category_Randomizer Select, class UObject* __WorldContext, class UTexture2D** Texture, enum class Enum_Rune_Category_Randomizer Local_Category, enum class EComboTypes Local_Weapon, enum class EComboTypes Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_1, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, class UTexture2D* Temp_object_Variable_12, class UTexture2D* Temp_object_Variable_13, class UTexture2D* Temp_object_Variable_14, class UTexture2D* Temp_object_Variable_15, class UTexture2D* Temp_object_Variable_16, class UTexture2D* Temp_object_Variable_17, class UTexture2D* Temp_object_Variable_18, class UTexture2D* Temp_object_Variable_19, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetCategoryRuneTexture");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetCategoryRuneTexture_Params Parms{};

	Parms.Select = Select;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Category = Local_Category;
	Parms.Local_Weapon = Local_Weapon;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.Temp_object_Variable_19 = Temp_object_Variable_19;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon = CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Tier_Randomizer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Common                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Uncommon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rare                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Epic                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Legendary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Result                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_ArraySum                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Random                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_Rune_Tier UDHBlueprintFunctionLib_StormMode_C::Tier_Randomizer(float Common, float Uncommon, float Rare, float Epic, float Legendary, class UObject* __WorldContext, int32 Local_Result, float Local_ArraySum, float Local_Random, bool Temp_bool_True_if_break_was_hit_Variable, TArray<float>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Tier_Randomizer");

	Params::UDHBlueprintFunctionLib_StormMode_C_Tier_Randomizer_Params Parms{};

	Parms.Common = Common;
	Parms.Uncommon = Uncommon;
	Parms.Rare = Rare;
	Parms.Epic = Epic;
	Parms.Legendary = Legendary;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Result = Local_Result;
	Parms.Local_ArraySum = Local_ArraySum;
	Parms.Local_Random = Local_Random;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Rune_BuildMiscText_+X
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              Misc_X                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Append                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      From                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UDHBlueprintFunctionLib_StormMode_C::Rune_BuildMiscText_PlusX(class FText& Text, float& Misc_X, const class FString& Append, const class FString& From, class UObject* __WorldContext, bool Temp_bool_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_FCeil_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Rune_BuildMiscText_+X");

	Params::UDHBlueprintFunctionLib_StormMode_C_Rune_BuildMiscText_PlusX_Params Parms{};

	Parms.Text = Text;
	Parms.Misc_X = Misc_X;
	Parms.Append = Append;
	Parms.From = From;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Rune_BuildText_+X
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStruct_Rune_Values         Upgrade_X                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RuneLvl                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Append                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UDHBlueprintFunctionLib_StormMode_C::Rune_BuildText_PlusX(enum class Enum_Rune_Tier Tier, class FText& Text, struct FStruct_Rune_Values& Upgrade_X, int32 RuneLvl, const class FString& Append, class UObject* __WorldContext, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, enum class Enum_Rune_Tier Temp_byte_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Rune_BuildText_+X");

	Params::UDHBlueprintFunctionLib_StormMode_C_Rune_BuildText_PlusX_Params Parms{};

	Parms.Tier = Tier;
	Parms.Text = Text;
	Parms.Upgrade_X = Upgrade_X;
	Parms.RuneLvl = RuneLvl;
	Parms.Append = Append;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Rune_BuildText_X
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStruct_Rune_Values         Upgrade_X                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RuneLvl                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Append                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UDHBlueprintFunctionLib_StormMode_C::Rune_BuildText_X(enum class Enum_Rune_Tier Tier, class FText& Text, struct FStruct_Rune_Values& Upgrade_X, int32 RuneLvl, const class FString& Append, class UObject* __WorldContext, enum class Enum_Rune_Tier Temp_byte_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& Temp_string_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Rune_BuildText_X");

	Params::UDHBlueprintFunctionLib_StormMode_C_Rune_BuildText_X_Params Parms{};

	Parms.Tier = Tier;
	Parms.Text = Text;
	Parms.Upgrade_X = Upgrade_X;
	Parms.RuneLvl = RuneLvl;
	Parms.Append = Append;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Rune_BuildText_X%
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FStruct_Rune_Values         Upgrade_X_                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RuneLvl                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Append                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UDHBlueprintFunctionLib_StormMode_C::Rune_BuildText_X_(enum class Enum_Rune_Tier Tier, class FText Text, struct FStruct_Rune_Values& Upgrade_X_, int32 RuneLvl, const class FString& Append, class UObject* __WorldContext, enum class Enum_Rune_Tier Temp_byte_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& Temp_string_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Rune_BuildText_X%");

	Params::UDHBlueprintFunctionLib_StormMode_C_Rune_BuildText_X__Params Parms{};

	Parms.Tier = Tier;
	Parms.Text = Text;
	Parms.Upgrade_X_ = Upgrade_X_;
	Parms.RuneLvl = RuneLvl;
	Parms.Append = Append;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetControllerAsStormModePC
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_StormMode_C*     StormModePC                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_StormMode_C*     K2Node_DynamicCast_AsGameplay_PC_Storm_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetControllerAsStormModePC(class UObject* __WorldContext, class AGameplayPC_StormMode_C** StormModePC, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_StormMode_C* K2Node_DynamicCast_AsGameplay_PC_Storm_Mode, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetControllerAsStormModePC");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetControllerAsStormModePC_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC_Storm_Mode = K2Node_DynamicCast_AsGameplay_PC_Storm_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (StormModePC != nullptr)
		*StormModePC = Parms.StormModePC;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetTierColors
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMisc                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        MiscID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetSpecialRunesIDs_IDs                                  (ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UDHBlueprintFunctionLib_StormMode_C::GetTierColors(enum class Enum_Rune_Tier Tier, bool IsMisc, class FName MiscID, class UObject* __WorldContext, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable, enum class Enum_Rune_Tier Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& K2Node_Select_Default, TArray<class FName>& CallFunc_GetSpecialRunesIDs_IDs, bool Temp_bool_Variable_1, bool CallFunc_Array_Contains_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetTierColors");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetTierColors_Params Parms{};

	Parms.Tier = Tier;
	Parms.IsMisc = IsMisc;
	Parms.MiscID = MiscID;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSpecialRunesIDs_IDs = CallFunc_GetSpecialRunesIDs_IDs;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetSlotCurrentRune
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_RuneSlots_IDs      SlotID                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CurrentRune                                                      (Parm, OutParm, HasGetValueTypeHash)
// bool                               HasRune_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDHBlueprintFunctionLib_StormMode_C::GetSlotCurrentRune(enum class Enum_RuneSlots_IDs& SlotID, class UObject* __WorldContext, struct FStruct_Rune* CurrentRune, bool* HasRune_, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_Rune& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetSlotCurrentRune");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetSlotCurrentRune_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentRune != nullptr)
		*CurrentRune = std::move(Parms.CurrentRune);

	if (HasRune_ != nullptr)
		*HasRune_ = Parms.HasRune_;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.HasSpecialEffectRune?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_StormMode_C::HasSpecialEffectRune_(enum class Enum_Rune_Category_Randomizer& Category, class UObject* __WorldContext, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, class FName CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID, class FName CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID, bool CallFunc_Map_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "HasSpecialEffectRune?");

	Params::UDHBlueprintFunctionLib_StormMode_C_HasSpecialEffectRune__Params Parms{};

	Parms.Category = Category;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID = CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID;
	Parms.CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID = CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.HasImprovementRune?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_StormMode_C::HasImprovementRune_(enum class Enum_Rune_Category_Randomizer& Category, class UObject* __WorldContext, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, class FName CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID, class FName CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID, bool CallFunc_Map_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "HasImprovementRune?");

	Params::UDHBlueprintFunctionLib_StormMode_C_HasImprovementRune__Params Parms{};

	Parms.Category = Category;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID = CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID;
	Parms.CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID = CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetRunesFromTable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Category_RandomizerIndex                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Local_Weapon                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerLocal_Category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_19                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UDataTable* UDHBlueprintFunctionLib_StormMode_C::GetRunesFromTable(enum class Enum_Rune_Category_Randomizer Index, class UObject* __WorldContext, enum class EComboTypes Local_Weapon, enum class Enum_Rune_Category_Randomizer Local_Category, enum class EComboTypes Temp_byte_Variable, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* Temp_object_Variable_6, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_1, class UDataTable* Temp_object_Variable_7, class UDataTable* Temp_object_Variable_8, class UDataTable* Temp_object_Variable_9, class UDataTable* Temp_object_Variable_10, class UDataTable* Temp_object_Variable_11, class UDataTable* Temp_object_Variable_12, class UDataTable* Temp_object_Variable_13, class UDataTable* Temp_object_Variable_14, class UDataTable* Temp_object_Variable_15, class UDataTable* Temp_object_Variable_16, class UDataTable* Temp_object_Variable_17, class UDataTable* Temp_object_Variable_18, class UDataTable* Temp_object_Variable_19, class UDataTable* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UDataTable* K2Node_Select_Default_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetRunesFromTable");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetRunesFromTable_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Weapon = Local_Weapon;
	Parms.Local_Category = Local_Category;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.Temp_object_Variable_19 = Temp_object_Variable_19;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon = CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.HasRunesForCategory?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Contains_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_StormMode_C::HasRunesForCategory_(enum class Enum_Rune_Category_Randomizer& Category, class UObject* __WorldContext, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, class FName CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID, class FName CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Map_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "HasRunesForCategory?");

	Params::UDHBlueprintFunctionLib_StormMode_C_HasRunesForCategory__Params Parms{};

	Parms.Category = Category;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID = CallFunc_GetSlotIDsNameForCategory_ImprovementSlotID;
	Parms.CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID = CallFunc_GetSlotIDsNameForCategory_SpecialEffectSlotID;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue_1 = CallFunc_Map_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetSlotIDsNameForCategory
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ImprovementSlotID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SpecialEffectSlotID                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs>Local_SpecialEffectIDs                                           (Edit, BlueprintVisible)
// TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs>Local_ImprovementIDs                                             (Edit, BlueprintVisible)
// TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs>K2Node_MakeVariable_MakeVariableOutput                           (None)
// TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs>K2Node_MakeVariable_MakeVariableOutput_1                         (None)
// enum class Enum_RuneSlots_IDs      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_RuneSlots_IDs      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::GetSlotIDsNameForCategory(enum class Enum_Rune_Category_Randomizer& Category, class UObject* __WorldContext, class FName* ImprovementSlotID, class FName* SpecialEffectSlotID, TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs> Local_SpecialEffectIDs, TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs> Local_ImprovementIDs, TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs> K2Node_MakeVariable_MakeVariableOutput, TMap<enum class Enum_Rune_Category_Randomizer, enum class Enum_RuneSlots_IDs> K2Node_MakeVariable_MakeVariableOutput_1, enum class Enum_RuneSlots_IDs CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class Enum_RuneSlots_IDs CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetSlotIDsNameForCategory");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetSlotIDsNameForCategory_Params Parms{};

	Parms.Category = Category;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_SpecialEffectIDs = Local_SpecialEffectIDs;
	Parms.Local_ImprovementIDs = Local_ImprovementIDs;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.K2Node_MakeVariable_MakeVariableOutput_1 = K2Node_MakeVariable_MakeVariableOutput_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ImprovementSlotID != nullptr)
		*ImprovementSlotID = Parms.ImprovementSlotID;

	if (SpecialEffectSlotID != nullptr)
		*SpecialEffectSlotID = Parms.SpecialEffectSlotID;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.GetRuneInventory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class URuneInventoryComponent_C* UDHBlueprintFunctionLib_StormMode_C::GetRuneInventory(class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class URuneInventoryComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "GetRuneInventory");

	Params::UDHBlueprintFunctionLib_StormMode_C_GetRuneInventory_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.HasThisRune?
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_Rune                SelectedRune                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)
// struct FStruct_Rune                Local_Rune                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UDHBlueprintFunctionLib_StormMode_C::HasThisRune_(struct FStruct_Rune& SelectedRune, class UObject* __WorldContext, struct FStruct_Rune* Rune, const struct FStruct_Rune& Local_Rune, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FStruct_Rune& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "HasThisRune?");

	Params::UDHBlueprintFunctionLib_StormMode_C_HasThisRune__Params Parms{};

	Parms.SelectedRune = SelectedRune;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Rune = Local_Rune;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

	return Parms.ReturnValue;

}


// Function DHBlueprintFunctionLib_StormMode.DHBlueprintFunctionLib_StormMode_C.Category_Randomizer
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FRandomStream               Seed                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerSelectedCategory                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Sum                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Result                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_ArraySum                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Random                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_SumFloatArray_Sum                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDHBlueprintFunctionLib_StormMode_C::Category_Randomizer(TArray<float>& Array, struct FRandomStream& Seed, class UObject* __WorldContext, enum class Enum_Rune_Category_Randomizer* SelectedCategory, float Local_Sum, int32 Local_Result, float Local_ArraySum, float Local_Random, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_SumFloatArray_Sum, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHBlueprintFunctionLib_StormMode_C", "Category_Randomizer");

	Params::UDHBlueprintFunctionLib_StormMode_C_Category_Randomizer_Params Parms{};

	Parms.Array = Array;
	Parms.Seed = Seed;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Sum = Local_Sum;
	Parms.Local_Result = Local_Result;
	Parms.Local_ArraySum = Local_ArraySum;
	Parms.Local_Random = Local_Random;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_SumFloatArray_Sum = CallFunc_SumFloatArray_Sum;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedCategory != nullptr)
		*SelectedCategory = Parms.SelectedCategory;

}

}


