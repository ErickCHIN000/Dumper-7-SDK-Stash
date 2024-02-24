#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_ButtonIndicator.wid_ButtonIndicator_C
// (None)

class UClass* UWid_ButtonIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_ButtonIndicator_C");

	return Clss;
}


// wid_ButtonIndicator_C wid_ButtonIndicator.Default__wid_ButtonIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_ButtonIndicator_C* UWid_ButtonIndicator_C::GetDefaultObj()
{
	static class UWid_ButtonIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_ButtonIndicator_C*>(UWid_ButtonIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.UpdateRenderScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsConsole                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetConsoleImageRenderScale_RenderScale                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ButtonIndicator_C::UpdateRenderScale(bool IsConsole, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& CallFunc_GetConsoleImageRenderScale_RenderScale, const struct FVector2D& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "UpdateRenderScale");

	Params::UWid_ButtonIndicator_C_UpdateRenderScale_Params Parms{};

	Parms.IsConsole = IsConsole;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetConsoleImageRenderScale_RenderScale = CallFunc_GetConsoleImageRenderScale_RenderScale;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ButtonIndicator_C::SetProgress(float Amount, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "SetProgress");

	Params::UWid_ButtonIndicator_C_SetProgress_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.GetKeyForAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InActionName                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                Keys                                                             (Parm, OutParm)
// TArray<struct FKey>                ResultList                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsMouseButton_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsKeyboardKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_ButtonIndicator_C::GetKeyForAction(class FName InActionName, TArray<struct FKey>* Keys, const TArray<struct FKey>& ResultList, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32 CallFunc_Array_Length_ReturnValue_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Key_IsMouseButton_ReturnValue_1, bool CallFunc_Key_IsKeyboardKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "GetKeyForAction");

	Params::UWid_ButtonIndicator_C_GetKeyForAction_Params Parms{};

	Parms.InActionName = InActionName;
	Parms.ResultList = ResultList;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue = CallFunc_Key_IsMouseButton_ReturnValue;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue = CallFunc_Key_IsKeyboardKey_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Key_IsMouseButton_ReturnValue_1 = CallFunc_Key_IsMouseButton_ReturnValue_1;
	Parms.CallFunc_Key_IsKeyboardKey_ReturnValue_1 = CallFunc_Key_IsKeyboardKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Keys != nullptr)
		*Keys = std::move(Parms.Keys);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.MapKeyNameToEnum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         EnumValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      KeyName                                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnglishKeyDisplayName_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         CallFunc_KeyNameToEnum_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ButtonIndicator_C::MapKeyNameToEnum(const struct FKey& Key, enum class Enum_Buttons_PC* EnumValue, const class FString& KeyName, const class FString& CallFunc_GetEnglishKeyDisplayName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class Enum_Buttons_PC CallFunc_KeyNameToEnum_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "MapKeyNameToEnum");

	Params::UWid_ButtonIndicator_C_MapKeyNameToEnum_Params Parms{};

	Parms.Key = Key;
	Parms.KeyName = KeyName;
	Parms.CallFunc_GetEnglishKeyDisplayName_ReturnValue = CallFunc_GetEnglishKeyDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_KeyNameToEnum_Value = CallFunc_KeyNameToEnum_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (EnumValue != nullptr)
		*EnumValue = Parms.EnumValue;

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.SetType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Buttons_Type       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ButtonIndicator_C::SetType(enum class Enum_Buttons_Type Type, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "SetType");

	Params::UWid_ButtonIndicator_C_SetType_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.Change
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Buttons_PC         Pc                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         X1                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        PS4                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ButtonIndicator_C::Change(enum class Enum_Buttons_PC Pc, enum class Enum_Buttons_X1 X1, enum class Enum_Buttons_PS4 PS4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "Change");

	Params::UWid_ButtonIndicator_C_Change_Params Parms{};

	Parms.Pc = Pc;
	Parms.X1 = X1;
	Parms.PS4 = PS4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPS4GamepadConnected_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetImageForPS4_Handled                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetImageForPS4_Image                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetImageForX1_Handled                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetImageForX1_Image                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetImageForPC_Handled                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetImageForPC_Image                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetImageForX1_Handled_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetImageForX1_Image_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetImageForPS4_Handled_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetImageForPS4_Image_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ButtonIndicator_C::Update(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, bool CallFunc_IsPS4GamepadConnected_ReturnValue, bool CallFunc_GetImageForPS4_Handled, class UTexture2D* CallFunc_GetImageForPS4_Image, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, bool CallFunc_GetImageForX1_Handled, class UTexture2D* CallFunc_GetImageForX1_Image, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6, bool CallFunc_GetImageForPC_Handled, class UTexture2D* CallFunc_GetImageForPC_Image, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_7, bool CallFunc_GetImageForX1_Handled_1, class UTexture2D* CallFunc_GetImageForX1_Image_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_9, bool CallFunc_GetImageForPS4_Handled_1, class UTexture2D* CallFunc_GetImageForPS4_Image_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "Update");

	Params::UWid_ButtonIndicator_C_Update_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue = CallFunc_GetLastInputFromGamepadCPP_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_IsPS4GamepadConnected_ReturnValue = CallFunc_IsPS4GamepadConnected_ReturnValue;
	Parms.CallFunc_GetImageForPS4_Handled = CallFunc_GetImageForPS4_Handled;
	Parms.CallFunc_GetImageForPS4_Image = CallFunc_GetImageForPS4_Image;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_4 = CallFunc_GetDynamicMaterial_ReturnValue_4;
	Parms.CallFunc_GetImageForX1_Handled = CallFunc_GetImageForX1_Handled;
	Parms.CallFunc_GetImageForX1_Image = CallFunc_GetImageForX1_Image;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_5 = CallFunc_GetDynamicMaterial_ReturnValue_5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_6 = CallFunc_GetDynamicMaterial_ReturnValue_6;
	Parms.CallFunc_GetImageForPC_Handled = CallFunc_GetImageForPC_Handled;
	Parms.CallFunc_GetImageForPC_Image = CallFunc_GetImageForPC_Image;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_7 = CallFunc_GetDynamicMaterial_ReturnValue_7;
	Parms.CallFunc_GetImageForX1_Handled_1 = CallFunc_GetImageForX1_Handled_1;
	Parms.CallFunc_GetImageForX1_Image_1 = CallFunc_GetImageForX1_Image_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_8 = CallFunc_GetDynamicMaterial_ReturnValue_8;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_9 = CallFunc_GetDynamicMaterial_ReturnValue_9;
	Parms.CallFunc_GetImageForPS4_Handled_1 = CallFunc_GetImageForPS4_Handled_1;
	Parms.CallFunc_GetImageForPS4_Image_1 = CallFunc_GetImageForPS4_Image_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.GetImageForX1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Buttons_X1         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_ButtonIndicator_C::GetImageForX1(enum class Enum_Buttons_X1 Button, bool* Handled, class UTexture2D** Image, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "GetImageForX1");

	Params::UWid_ButtonIndicator_C_GetImageForX1_Params Parms{};

	Parms.Button = Button;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

	if (Image != nullptr)
		*Image = Parms.Image;

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.GetImageForPS4
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Buttons_PS4        Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_ButtonIndicator_C::GetImageForPS4(enum class Enum_Buttons_PS4 Button, bool* Handled, class UTexture2D** Image, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "GetImageForPS4");

	Params::UWid_ButtonIndicator_C_GetImageForPS4_Params Parms{};

	Parms.Button = Button;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

	if (Image != nullptr)
		*Image = Parms.Image;

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.GetImageForPC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Buttons_PC         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UTexture2D*                  Temp_object_Variable_20                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_21                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_22                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_23                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_24                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_25                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_26                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_27                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_28                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_29                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_30                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_31                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_32                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_33                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_34                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_35                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_36                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_37                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_38                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_39                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_40                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_41                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_42                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_43                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_44                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_45                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_46                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_47                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_48                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_49                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_50                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_51                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_52                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_53                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_54                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_55                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_56                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_57                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_58                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_59                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_60                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_61                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_62                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_63                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_64                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_65                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_66                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_67                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_68                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_69                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_70                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_71                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_72                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_73                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_74                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_75                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_76                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_77                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_78                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_79                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_80                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_81                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_82                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_83                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_84                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_85                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_86                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_87                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_88                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_89                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_90                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_91                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_92                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_93                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_94                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_95                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_96                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_97                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_98                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_99                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_100                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_101                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_102                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_103                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_104                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_105                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_106                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_107                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_108                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_109                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_110                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_111                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_112                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_113                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_114                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_115                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_116                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_117                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_118                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_119                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_120                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_121                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_122                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_123                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_124                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_125                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_126                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_127                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_128                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_129                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_130                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_131                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_132                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_133                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_134                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_135                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ButtonIndicator_C::GetImageForPC(enum class Enum_Buttons_PC Button, bool* Handled, class UTexture2D** Image, enum class Enum_Buttons_PC Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, class UTexture2D* Temp_object_Variable_12, class UTexture2D* Temp_object_Variable_13, class UTexture2D* Temp_object_Variable_14, class UTexture2D* Temp_object_Variable_15, class UTexture2D* Temp_object_Variable_16, class UTexture2D* Temp_object_Variable_17, class UTexture2D* Temp_object_Variable_18, class UTexture2D* Temp_object_Variable_19, class UTexture2D* Temp_object_Variable_20, class UTexture2D* Temp_object_Variable_21, class UTexture2D* Temp_object_Variable_22, class UTexture2D* Temp_object_Variable_23, class UTexture2D* Temp_object_Variable_24, class UTexture2D* Temp_object_Variable_25, class UTexture2D* Temp_object_Variable_26, class UTexture2D* Temp_object_Variable_27, class UTexture2D* Temp_object_Variable_28, class UTexture2D* Temp_object_Variable_29, class UTexture2D* Temp_object_Variable_30, class UTexture2D* Temp_object_Variable_31, class UTexture2D* Temp_object_Variable_32, class UTexture2D* Temp_object_Variable_33, class UTexture2D* Temp_object_Variable_34, class UTexture2D* Temp_object_Variable_35, class UTexture2D* Temp_object_Variable_36, class UTexture2D* Temp_object_Variable_37, class UTexture2D* Temp_object_Variable_38, class UTexture2D* Temp_object_Variable_39, class UTexture2D* Temp_object_Variable_40, class UTexture2D* Temp_object_Variable_41, class UTexture2D* Temp_object_Variable_42, class UTexture2D* Temp_object_Variable_43, class UTexture2D* Temp_object_Variable_44, class UTexture2D* Temp_object_Variable_45, class UTexture2D* Temp_object_Variable_46, class UTexture2D* Temp_object_Variable_47, class UTexture2D* Temp_object_Variable_48, class UTexture2D* Temp_object_Variable_49, class UTexture2D* Temp_object_Variable_50, class UTexture2D* Temp_object_Variable_51, class UTexture2D* Temp_object_Variable_52, class UTexture2D* Temp_object_Variable_53, class UTexture2D* Temp_object_Variable_54, class UTexture2D* Temp_object_Variable_55, class UTexture2D* Temp_object_Variable_56, class UTexture2D* Temp_object_Variable_57, class UTexture2D* Temp_object_Variable_58, class UTexture2D* Temp_object_Variable_59, class UTexture2D* Temp_object_Variable_60, class UTexture2D* Temp_object_Variable_61, class UTexture2D* Temp_object_Variable_62, class UTexture2D* Temp_object_Variable_63, class UTexture2D* Temp_object_Variable_64, class UTexture2D* Temp_object_Variable_65, class UTexture2D* Temp_object_Variable_66, class UTexture2D* Temp_object_Variable_67, class UTexture2D* Temp_object_Variable_68, class UTexture2D* Temp_object_Variable_69, class UTexture2D* Temp_object_Variable_70, class UTexture2D* Temp_object_Variable_71, class UTexture2D* Temp_object_Variable_72, class UTexture2D* Temp_object_Variable_73, class UTexture2D* Temp_object_Variable_74, class UTexture2D* Temp_object_Variable_75, class UTexture2D* Temp_object_Variable_76, class UTexture2D* Temp_object_Variable_77, class UTexture2D* Temp_object_Variable_78, class UTexture2D* Temp_object_Variable_79, class UTexture2D* Temp_object_Variable_80, class UTexture2D* Temp_object_Variable_81, class UTexture2D* Temp_object_Variable_82, class UTexture2D* Temp_object_Variable_83, class UTexture2D* Temp_object_Variable_84, class UTexture2D* Temp_object_Variable_85, class UTexture2D* Temp_object_Variable_86, class UTexture2D* Temp_object_Variable_87, class UTexture2D* Temp_object_Variable_88, class UTexture2D* Temp_object_Variable_89, class UTexture2D* Temp_object_Variable_90, class UTexture2D* Temp_object_Variable_91, class UTexture2D* Temp_object_Variable_92, class UTexture2D* Temp_object_Variable_93, class UTexture2D* Temp_object_Variable_94, class UTexture2D* Temp_object_Variable_95, class UTexture2D* Temp_object_Variable_96, class UTexture2D* Temp_object_Variable_97, class UTexture2D* Temp_object_Variable_98, class UTexture2D* Temp_object_Variable_99, class UTexture2D* Temp_object_Variable_100, class UTexture2D* Temp_object_Variable_101, class UTexture2D* Temp_object_Variable_102, class UTexture2D* Temp_object_Variable_103, class UTexture2D* Temp_object_Variable_104, class UTexture2D* Temp_object_Variable_105, class UTexture2D* Temp_object_Variable_106, class UTexture2D* Temp_object_Variable_107, class UTexture2D* Temp_object_Variable_108, class UTexture2D* Temp_object_Variable_109, class UTexture2D* Temp_object_Variable_110, class UTexture2D* Temp_object_Variable_111, class UTexture2D* Temp_object_Variable_112, class UTexture2D* Temp_object_Variable_113, class UTexture2D* Temp_object_Variable_114, class UTexture2D* Temp_object_Variable_115, class UTexture2D* Temp_object_Variable_116, class UTexture2D* Temp_object_Variable_117, class UTexture2D* Temp_object_Variable_118, class UTexture2D* Temp_object_Variable_119, class UTexture2D* Temp_object_Variable_120, class UTexture2D* Temp_object_Variable_121, class UTexture2D* Temp_object_Variable_122, class UTexture2D* Temp_object_Variable_123, class UTexture2D* Temp_object_Variable_124, class UTexture2D* Temp_object_Variable_125, class UTexture2D* Temp_object_Variable_126, class UTexture2D* Temp_object_Variable_127, class UTexture2D* Temp_object_Variable_128, class UTexture2D* Temp_object_Variable_129, class UTexture2D* Temp_object_Variable_130, class UTexture2D* Temp_object_Variable_131, class UTexture2D* Temp_object_Variable_132, class UTexture2D* Temp_object_Variable_133, class UTexture2D* Temp_object_Variable_134, class UTexture2D* Temp_object_Variable_135, bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "GetImageForPC");

	Params::UWid_ButtonIndicator_C_GetImageForPC_Params Parms{};

	Parms.Button = Button;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
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
	Parms.Temp_object_Variable_20 = Temp_object_Variable_20;
	Parms.Temp_object_Variable_21 = Temp_object_Variable_21;
	Parms.Temp_object_Variable_22 = Temp_object_Variable_22;
	Parms.Temp_object_Variable_23 = Temp_object_Variable_23;
	Parms.Temp_object_Variable_24 = Temp_object_Variable_24;
	Parms.Temp_object_Variable_25 = Temp_object_Variable_25;
	Parms.Temp_object_Variable_26 = Temp_object_Variable_26;
	Parms.Temp_object_Variable_27 = Temp_object_Variable_27;
	Parms.Temp_object_Variable_28 = Temp_object_Variable_28;
	Parms.Temp_object_Variable_29 = Temp_object_Variable_29;
	Parms.Temp_object_Variable_30 = Temp_object_Variable_30;
	Parms.Temp_object_Variable_31 = Temp_object_Variable_31;
	Parms.Temp_object_Variable_32 = Temp_object_Variable_32;
	Parms.Temp_object_Variable_33 = Temp_object_Variable_33;
	Parms.Temp_object_Variable_34 = Temp_object_Variable_34;
	Parms.Temp_object_Variable_35 = Temp_object_Variable_35;
	Parms.Temp_object_Variable_36 = Temp_object_Variable_36;
	Parms.Temp_object_Variable_37 = Temp_object_Variable_37;
	Parms.Temp_object_Variable_38 = Temp_object_Variable_38;
	Parms.Temp_object_Variable_39 = Temp_object_Variable_39;
	Parms.Temp_object_Variable_40 = Temp_object_Variable_40;
	Parms.Temp_object_Variable_41 = Temp_object_Variable_41;
	Parms.Temp_object_Variable_42 = Temp_object_Variable_42;
	Parms.Temp_object_Variable_43 = Temp_object_Variable_43;
	Parms.Temp_object_Variable_44 = Temp_object_Variable_44;
	Parms.Temp_object_Variable_45 = Temp_object_Variable_45;
	Parms.Temp_object_Variable_46 = Temp_object_Variable_46;
	Parms.Temp_object_Variable_47 = Temp_object_Variable_47;
	Parms.Temp_object_Variable_48 = Temp_object_Variable_48;
	Parms.Temp_object_Variable_49 = Temp_object_Variable_49;
	Parms.Temp_object_Variable_50 = Temp_object_Variable_50;
	Parms.Temp_object_Variable_51 = Temp_object_Variable_51;
	Parms.Temp_object_Variable_52 = Temp_object_Variable_52;
	Parms.Temp_object_Variable_53 = Temp_object_Variable_53;
	Parms.Temp_object_Variable_54 = Temp_object_Variable_54;
	Parms.Temp_object_Variable_55 = Temp_object_Variable_55;
	Parms.Temp_object_Variable_56 = Temp_object_Variable_56;
	Parms.Temp_object_Variable_57 = Temp_object_Variable_57;
	Parms.Temp_object_Variable_58 = Temp_object_Variable_58;
	Parms.Temp_object_Variable_59 = Temp_object_Variable_59;
	Parms.Temp_object_Variable_60 = Temp_object_Variable_60;
	Parms.Temp_object_Variable_61 = Temp_object_Variable_61;
	Parms.Temp_object_Variable_62 = Temp_object_Variable_62;
	Parms.Temp_object_Variable_63 = Temp_object_Variable_63;
	Parms.Temp_object_Variable_64 = Temp_object_Variable_64;
	Parms.Temp_object_Variable_65 = Temp_object_Variable_65;
	Parms.Temp_object_Variable_66 = Temp_object_Variable_66;
	Parms.Temp_object_Variable_67 = Temp_object_Variable_67;
	Parms.Temp_object_Variable_68 = Temp_object_Variable_68;
	Parms.Temp_object_Variable_69 = Temp_object_Variable_69;
	Parms.Temp_object_Variable_70 = Temp_object_Variable_70;
	Parms.Temp_object_Variable_71 = Temp_object_Variable_71;
	Parms.Temp_object_Variable_72 = Temp_object_Variable_72;
	Parms.Temp_object_Variable_73 = Temp_object_Variable_73;
	Parms.Temp_object_Variable_74 = Temp_object_Variable_74;
	Parms.Temp_object_Variable_75 = Temp_object_Variable_75;
	Parms.Temp_object_Variable_76 = Temp_object_Variable_76;
	Parms.Temp_object_Variable_77 = Temp_object_Variable_77;
	Parms.Temp_object_Variable_78 = Temp_object_Variable_78;
	Parms.Temp_object_Variable_79 = Temp_object_Variable_79;
	Parms.Temp_object_Variable_80 = Temp_object_Variable_80;
	Parms.Temp_object_Variable_81 = Temp_object_Variable_81;
	Parms.Temp_object_Variable_82 = Temp_object_Variable_82;
	Parms.Temp_object_Variable_83 = Temp_object_Variable_83;
	Parms.Temp_object_Variable_84 = Temp_object_Variable_84;
	Parms.Temp_object_Variable_85 = Temp_object_Variable_85;
	Parms.Temp_object_Variable_86 = Temp_object_Variable_86;
	Parms.Temp_object_Variable_87 = Temp_object_Variable_87;
	Parms.Temp_object_Variable_88 = Temp_object_Variable_88;
	Parms.Temp_object_Variable_89 = Temp_object_Variable_89;
	Parms.Temp_object_Variable_90 = Temp_object_Variable_90;
	Parms.Temp_object_Variable_91 = Temp_object_Variable_91;
	Parms.Temp_object_Variable_92 = Temp_object_Variable_92;
	Parms.Temp_object_Variable_93 = Temp_object_Variable_93;
	Parms.Temp_object_Variable_94 = Temp_object_Variable_94;
	Parms.Temp_object_Variable_95 = Temp_object_Variable_95;
	Parms.Temp_object_Variable_96 = Temp_object_Variable_96;
	Parms.Temp_object_Variable_97 = Temp_object_Variable_97;
	Parms.Temp_object_Variable_98 = Temp_object_Variable_98;
	Parms.Temp_object_Variable_99 = Temp_object_Variable_99;
	Parms.Temp_object_Variable_100 = Temp_object_Variable_100;
	Parms.Temp_object_Variable_101 = Temp_object_Variable_101;
	Parms.Temp_object_Variable_102 = Temp_object_Variable_102;
	Parms.Temp_object_Variable_103 = Temp_object_Variable_103;
	Parms.Temp_object_Variable_104 = Temp_object_Variable_104;
	Parms.Temp_object_Variable_105 = Temp_object_Variable_105;
	Parms.Temp_object_Variable_106 = Temp_object_Variable_106;
	Parms.Temp_object_Variable_107 = Temp_object_Variable_107;
	Parms.Temp_object_Variable_108 = Temp_object_Variable_108;
	Parms.Temp_object_Variable_109 = Temp_object_Variable_109;
	Parms.Temp_object_Variable_110 = Temp_object_Variable_110;
	Parms.Temp_object_Variable_111 = Temp_object_Variable_111;
	Parms.Temp_object_Variable_112 = Temp_object_Variable_112;
	Parms.Temp_object_Variable_113 = Temp_object_Variable_113;
	Parms.Temp_object_Variable_114 = Temp_object_Variable_114;
	Parms.Temp_object_Variable_115 = Temp_object_Variable_115;
	Parms.Temp_object_Variable_116 = Temp_object_Variable_116;
	Parms.Temp_object_Variable_117 = Temp_object_Variable_117;
	Parms.Temp_object_Variable_118 = Temp_object_Variable_118;
	Parms.Temp_object_Variable_119 = Temp_object_Variable_119;
	Parms.Temp_object_Variable_120 = Temp_object_Variable_120;
	Parms.Temp_object_Variable_121 = Temp_object_Variable_121;
	Parms.Temp_object_Variable_122 = Temp_object_Variable_122;
	Parms.Temp_object_Variable_123 = Temp_object_Variable_123;
	Parms.Temp_object_Variable_124 = Temp_object_Variable_124;
	Parms.Temp_object_Variable_125 = Temp_object_Variable_125;
	Parms.Temp_object_Variable_126 = Temp_object_Variable_126;
	Parms.Temp_object_Variable_127 = Temp_object_Variable_127;
	Parms.Temp_object_Variable_128 = Temp_object_Variable_128;
	Parms.Temp_object_Variable_129 = Temp_object_Variable_129;
	Parms.Temp_object_Variable_130 = Temp_object_Variable_130;
	Parms.Temp_object_Variable_131 = Temp_object_Variable_131;
	Parms.Temp_object_Variable_132 = Temp_object_Variable_132;
	Parms.Temp_object_Variable_133 = Temp_object_Variable_133;
	Parms.Temp_object_Variable_134 = Temp_object_Variable_134;
	Parms.Temp_object_Variable_135 = Temp_object_Variable_135;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

	if (Image != nullptr)
		*Image = Parms.Image;

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.UpdateForRuntimeGeneration
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_ButtonIndicator_C::UpdateForRuntimeGeneration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "UpdateForRuntimeGeneration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ButtonIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "Tick");

	Params::UWid_ButtonIndicator_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_ButtonIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_ButtonIndicator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "PreConstruct");

	Params::UWid_ButtonIndicator_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.InputChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewInputIsGamepad                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_ButtonIndicator_C::InputChanged(bool NewInputIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "InputChanged");

	Params::UWid_ButtonIndicator_C_InputChanged_Params Parms{};

	Parms.NewInputIsGamepad = NewInputIsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_ButtonIndicator_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_ButtonIndicator.wid_ButtonIndicator_C.ExecuteUbergraph_wid_ButtonIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGGameModeBase*             CallFunc_GetCGGameModeBase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetFirstKeyForAction_ReturnValue                        (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_PC         CallFunc_MapKeyNameToEnum_EnumValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAbleToInteract_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewInputIsGamepad                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetLastInputFromGamepadCPP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_ButtonIndicator_C::ExecuteUbergraph_wid_ButtonIndicator(int32 EntryPoint, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FKey& CallFunc_GetFirstKeyForAction_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, enum class Enum_Buttons_PC CallFunc_MapKeyNameToEnum_EnumValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsPlayerAbleToInteract_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_CustomEvent_NewInputIsGamepad, bool CallFunc_GetLastInputFromGamepadCPP_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ButtonIndicator_C", "ExecuteUbergraph_wid_ButtonIndicator");

	Params::UWid_ButtonIndicator_C_ExecuteUbergraph_wid_ButtonIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameModeBase_ReturnValue = CallFunc_GetCGGameModeBase_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetFirstKeyForAction_ReturnValue = CallFunc_GetFirstKeyForAction_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_MapKeyNameToEnum_EnumValue = CallFunc_MapKeyNameToEnum_EnumValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_IsPlayerAbleToInteract_ReturnValue = CallFunc_IsPlayerAbleToInteract_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_NewInputIsGamepad = K2Node_CustomEvent_NewInputIsGamepad;
	Parms.CallFunc_GetLastInputFromGamepadCPP_ReturnValue = CallFunc_GetLastInputFromGamepadCPP_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


