#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_End.UI_StormMode_End_C
// (None)

class UClass* UUI_StormMode_End_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_End_C");

	return Clss;
}


// UI_StormMode_End_C UI_StormMode_End.Default__UI_StormMode_End_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_End_C* UUI_StormMode_End_C::GetDefaultObj()
{
	static class UUI_StormMode_End_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_End_C*>(UUI_StormMode_End_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_End.UI_StormMode_End_C.Prompts_Opacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::Prompts_Opacity(float Delta, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "Prompts_Opacity");

	Params::UUI_StormMode_End_C_Prompts_Opacity_Params Parms{};

	Parms.Delta = Delta;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.RemoveSeedWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_End_C::RemoveSeedWindow(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "RemoveSeedWindow");

	Params::UUI_StormMode_End_C_RemoveSeedWindow_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.SetIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::SetIcons(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "SetIcons");

	Params::UUI_StormMode_End_C_SetIcons_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.SetArrows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::SetArrows(float Delta, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable, float Temp_float_Variable_4, int32 Temp_int_Variable_1, float Temp_float_Variable_5, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, float K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, float K2Node_Select_Default_3, float CallFunc_GetRenderOpacity_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "SetArrows");

	Params::UUI_StormMode_End_C_SetArrows_Params Parms{};

	Parms.Delta = Delta;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_1 = CallFunc_GetRenderOpacity_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

struct FEventReply UUI_StormMode_End_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "OnMouseButtonDown");

	Params::UUI_StormMode_End_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_End.UI_StormMode_End_C.DisableCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::DisableCursor(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "DisableCursor");

	Params::UUI_StormMode_End_C_DisableCursor_Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.DestroyAllEnemies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_End_C::DestroyAllEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AEnemyCharacter_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "DestroyAllEnemies");

	Params::UUI_StormMode_End_C_DestroyAllEnemies_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.FadeInMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::FadeInMusic(bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "FadeInMusic");

	Params::UUI_StormMode_End_C_FadeInMusic_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.AutoChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::AutoChangePage(class FName ID, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "AutoChangePage");

	Params::UUI_StormMode_End_C_AutoChangePage_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.ShowUnlocks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_RunicFamiliarity_Entry_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_RunicFamiliarity_Entry_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_End_C::ShowUnlocks(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_LastIndex_ReturnValue, class UUI_RunicFamiliarity_Entry_C* CallFunc_Array_Get_Item, class UUI_RunicFamiliarity_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "ShowUnlocks");

	Params::UUI_StormMode_End_C_ShowUnlocks_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.SetWeaponImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::SetWeaponImage(enum class EComboTypes Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, enum class EComboTypes Temp_byte_Variable_1, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, float K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "SetWeaponImage");

	Params::UUI_StormMode_End_C_SetWeaponImage_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.SetCharacterImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::SetCharacterImage(enum class EArmorTypes Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "SetCharacterImage");

	Params::UUI_StormMode_End_C_SetCharacterImage_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.PopulateMortalInstincts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_Rune_Slot_C*>     CallFunc_GetMortalInstinctsWidgets_Array                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_Rune_Slot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_End_C::PopulateMortalInstincts(bool* Success_, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_Rune_Slot_C*>& CallFunc_GetMortalInstinctsWidgets_Array, class UUI_Rune_Slot_C* CallFunc_Array_Get_Item, const struct FStruct_Rune& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "PopulateMortalInstincts");

	Params::UUI_StormMode_End_C_PopulateMortalInstincts_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMortalInstinctsWidgets_Array = CallFunc_GetMortalInstinctsWidgets_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

}


// Function UI_StormMode_End.UI_StormMode_End_C.GetMortalInstinctsWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_Rune_Slot_C*>     Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_Rune_Slot_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StormMode_End_C::GetMortalInstinctsWidgets(TArray<class UUI_Rune_Slot_C*>* Array, TArray<class UUI_Rune_Slot_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "GetMortalInstinctsWidgets");

	Params::UUI_StormMode_End_C_GetMortalInstinctsWidgets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StormMode_End.UI_StormMode_End_C.PopulateTokens
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_Rune_Slot_C*>     CallFunc_GetTokenWidgets_Array                                   (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_Rune_Slot_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_End_C::PopulateTokens(bool* Success_, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_Rune_Slot_C*>& CallFunc_GetTokenWidgets_Array, class UUI_Rune_Slot_C* CallFunc_Array_Get_Item, const struct FStruct_Rune& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "PopulateTokens");

	Params::UUI_StormMode_End_C_PopulateTokens_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTokenWidgets_Array = CallFunc_GetTokenWidgets_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

}


// Function UI_StormMode_End.UI_StormMode_End_C.GetTokenWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_Rune_Slot_C*>     Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_Rune_Slot_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StormMode_End_C::GetTokenWidgets(TArray<class UUI_Rune_Slot_C*>* Array, TArray<class UUI_Rune_Slot_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "GetTokenWidgets");

	Params::UUI_StormMode_End_C_GetTokenWidgets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StormMode_End.UI_StormMode_End_C.GetMisc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStruct_Rune>        Local_Values                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FName>                Local_Keys                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpecialRune__ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStruct_Rune>        CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_End_C::GetMisc(bool* Success_, const TArray<struct FStruct_Rune>& Local_Values, const TArray<class FName>& Local_Keys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsSpecialRune__ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FStruct_Rune>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "GetMisc");

	Params::UUI_StormMode_End_C_GetMisc_Params Parms{};

	Parms.Local_Values = Local_Values;
	Parms.Local_Keys = Local_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsSpecialRune__ReturnValue = CallFunc_IsSpecialRune__ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

}


// Function UI_StormMode_End.UI_StormMode_End_C.ShadeAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_6                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_7                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_8                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_9                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShadeAbility        CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_End_C::ShadeAbility(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, enum class EArmorTypes Temp_byte_Variable, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, enum class Enum_ShellDye Temp_byte_Variable_1, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_ShadeAbility& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "ShadeAbility");

	Params::UUI_StormMode_End_C_ShadeAbility_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.ShadeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetShadeNames_ReturnValue                               (None)
// class FText                        CallFunc_GetShadeNames_ReturnValue_1                             (None)
// class FText                        CallFunc_GetShadeNames_ReturnValue_2                             (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_End_C::ShadeName(class FText CallFunc_GetShadeNames_ReturnValue, class FText CallFunc_GetShadeNames_ReturnValue_1, class FText CallFunc_GetShadeNames_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "ShadeName");

	Params::UUI_StormMode_End_C_ShadeName_Params Parms{};

	Parms.CallFunc_GetShadeNames_ReturnValue = CallFunc_GetShadeNames_ReturnValue;
	Parms.CallFunc_GetShadeNames_ReturnValue_1 = CallFunc_GetShadeNames_ReturnValue_1;
	Parms.CallFunc_GetShadeNames_ReturnValue_2 = CallFunc_GetShadeNames_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.PopulateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetPlaytimeFromDate_ReturnValue                         (None)
// class FText                        CallFunc_GetWeaponNames_ReturnValue                              (None)
// class FText                        CallFunc_GetShellNameSimple_ShellName                            (None)

void UUI_StormMode_End_C::PopulateData(class FText CallFunc_GetPlaytimeFromDate_ReturnValue, class FText CallFunc_GetWeaponNames_ReturnValue, class FText CallFunc_GetShellNameSimple_ShellName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "PopulateData");

	Params::UUI_StormMode_End_C_PopulateData_Params Parms{};

	Parms.CallFunc_GetPlaytimeFromDate_ReturnValue = CallFunc_GetPlaytimeFromDate_ReturnValue;
	Parms.CallFunc_GetWeaponNames_ReturnValue = CallFunc_GetWeaponNames_ReturnValue;
	Parms.CallFunc_GetShellNameSimple_ShellName = CallFunc_GetShellNameSimple_ShellName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.PopulateUnlocks
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_Key                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_RunicFamiliarity_Entry_C*Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Local_Keys                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<float>                      Local_Values_End                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<float>                      Local_Values_Start                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_RunicFamiliarity_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_MilestoneUnlock     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      CallFunc_Map_Values_Values_1                                     (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)

void UUI_StormMode_End_C::PopulateUnlocks(bool* Success, int32 Local_Index, class FName Local_Key, class UUI_RunicFamiliarity_Entry_C* Local_Widget, const TArray<class FName>& Local_Keys, const TArray<float>& Local_Values_End, const TArray<float>& Local_Values_Start, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UUI_RunicFamiliarity_Entry_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FStruct_MilestoneUnlock& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_1, float CallFunc_Array_Get_Item_1, TArray<float>& CallFunc_Map_Values_Values, float CallFunc_Array_Get_Item_2, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<float>& CallFunc_Map_Values_Values_1, TArray<class FName>& CallFunc_Map_Keys_Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "PopulateUnlocks");

	Params::UUI_StormMode_End_C_PopulateUnlocks_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.Local_Key = Local_Key;
	Parms.Local_Widget = Local_Widget;
	Parms.Local_Keys = Local_Keys;
	Parms.Local_Values_End = Local_Values_End;
	Parms.Local_Values_Start = Local_Values_Start;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_1 = CallFunc_AddChildToUniformGrid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Map_Values_Values_1 = CallFunc_Map_Values_Values_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_StormMode_End.UI_StormMode_End_C.TestInstincts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Tier          Local_Tier                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Local_DT                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetRunesFromTable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                K2Node_MakeStruct_Struct_Rune                                    (HasGetValueTypeHash)

void UUI_StormMode_End_C::TestInstincts(enum class Enum_Rune_Tier Local_Tier, class UDataTable* Local_DT, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UDataTable* CallFunc_GetRunesFromTable_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, int32 K2Node_Select_Default, const struct FStruct_Rune& K2Node_MakeStruct_Struct_Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "TestInstincts");

	Params::UUI_StormMode_End_C_TestInstincts_Params Parms{};

	Parms.Local_Tier = Local_Tier;
	Parms.Local_DT = Local_DT;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetRunesFromTable_ReturnValue = CallFunc_GetRunesFromTable_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Struct_Rune = K2Node_MakeStruct_Struct_Rune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.GetInstincts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Design_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Success_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Counter                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Line                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_InDesign_                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_RuneSlots_IDs      Local_SlotID                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerLocal_SlotCategory                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Slot_SubType  Local_SlotSubType                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Slot_Type     Local_SlotType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerCallFunc_GetSlotCategoryFromSlotID_Category                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Slot_SubType  CallFunc_GetSlotSubTypeFromSlotID_SubType                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Slot_Type     CallFunc_GetSlotTypeFromSlotID_SlotType                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Rune_Slot_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::GetInstincts(bool Design_, bool* Success_, int32 Local_Counter, bool Local_Line, bool Local_InDesign_, enum class Enum_RuneSlots_IDs Local_SlotID, enum class Enum_Rune_Category_Randomizer Local_SlotCategory, enum class Enum_Rune_Slot_SubType Local_SlotSubType, enum class Enum_Rune_Slot_Type Local_SlotType, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, enum class Enum_Rune_Category_Randomizer CallFunc_GetSlotCategoryFromSlotID_Category, enum class Enum_Rune_Slot_SubType CallFunc_GetSlotSubTypeFromSlotID_SubType, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelWidget* K2Node_Select_Default, enum class Enum_Rune_Slot_Type CallFunc_GetSlotTypeFromSlotID_SlotType, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Rune_Slot_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "GetInstincts");

	Params::UUI_StormMode_End_C_GetInstincts_Params Parms{};

	Parms.Design_ = Design_;
	Parms.Local_Counter = Local_Counter;
	Parms.Local_Line = Local_Line;
	Parms.Local_InDesign_ = Local_InDesign_;
	Parms.Local_SlotID = Local_SlotID;
	Parms.Local_SlotCategory = Local_SlotCategory;
	Parms.Local_SlotSubType = Local_SlotSubType;
	Parms.Local_SlotType = Local_SlotType;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetSlotCategoryFromSlotID_Category = CallFunc_GetSlotCategoryFromSlotID_Category;
	Parms.CallFunc_GetSlotSubTypeFromSlotID_SubType = CallFunc_GetSlotSubTypeFromSlotID_SubType;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSlotTypeFromSlotID_SlotType = CallFunc_GetSlotTypeFromSlotID_SlotType;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

}


// Function UI_StormMode_End.UI_StormMode_End_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_End_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "PreConstruct");

	Params::UUI_StormMode_End_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_End_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_End.UI_StormMode_End_C.OnFadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_End_C::OnFadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "OnFadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_End.UI_StormMode_End_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_End_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_End.UI_StormMode_End_C.NavConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_End_C::NavConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "NavConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_End.UI_StormMode_End_C.NavLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_End_C::NavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "NavLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_End.UI_StormMode_End_C.NavRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_End_C::NavRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "NavRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_End.UI_StormMode_End_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "Tick");

	Params::UUI_StormMode_End_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_End.UI_StormMode_End_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_End_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_End.UI_StormMode_End_C.OnEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_End_C::OnEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "OnEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_End.UI_StormMode_End_C.EnableInputs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_End_C::EnableInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "EnableInputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_End.UI_StormMode_End_C.ExecuteUbergraph_UI_StormMode_End
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInstincts_Success_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PopulateUnlocks_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_StormMode_C*     CallFunc_GetControllerAsStormModePC_StormModePC                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetInstincts_Success__1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMisc_Success_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PopulateTokens_Success_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PopulateMortalInstincts_Success_                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class AGameplayPC_StormMode_C*     CallFunc_GetControllerAsStormModePC_StormModePC_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_End_C::ExecuteUbergraph_UI_StormMode_End(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, bool CallFunc_GetInstincts_Success_, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_PopulateUnlocks_Success, class AGameplayPC_StormMode_C* CallFunc_GetControllerAsStormModePC_StormModePC, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class FText Temp_text_Variable, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetInstincts_Success__1, bool CallFunc_GetMisc_Success_, bool CallFunc_PopulateTokens_Success_, bool CallFunc_PopulateMortalInstincts_Success_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable_1, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, class UWidget* K2Node_Select_Default, class FText K2Node_Select_Default_1, class AGameplayPC_StormMode_C* CallFunc_GetControllerAsStormModePC_StormModePC_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_End_C", "ExecuteUbergraph_UI_StormMode_End");

	Params::UUI_StormMode_End_C_ExecuteUbergraph_UI_StormMode_End_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetInstincts_Success_ = CallFunc_GetInstincts_Success_;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PopulateUnlocks_Success = CallFunc_PopulateUnlocks_Success;
	Parms.CallFunc_GetControllerAsStormModePC_StormModePC = CallFunc_GetControllerAsStormModePC_StormModePC;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInstincts_Success__1 = CallFunc_GetInstincts_Success__1;
	Parms.CallFunc_GetMisc_Success_ = CallFunc_GetMisc_Success_;
	Parms.CallFunc_PopulateTokens_Success_ = CallFunc_PopulateTokens_Success_;
	Parms.CallFunc_PopulateMortalInstincts_Success_ = CallFunc_PopulateMortalInstincts_Success_;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetControllerAsStormModePC_StormModePC_1 = CallFunc_GetControllerAsStormModePC_StormModePC_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


