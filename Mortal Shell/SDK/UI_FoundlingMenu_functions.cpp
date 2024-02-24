#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_FoundlingMenu.UI_FoundlingMenu_C
// (None)

class UClass* UUI_FoundlingMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_FoundlingMenu_C");

	return Clss;
}


// UI_FoundlingMenu_C UI_FoundlingMenu.Default__UI_FoundlingMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_FoundlingMenu_C* UUI_FoundlingMenu_C::GetDefaultObj()
{
	static class UUI_FoundlingMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_FoundlingMenu_C*>(UUI_FoundlingMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.BindInputs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::BindInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "BindInputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.OpenDyesTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::OpenDyesTab(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "OpenDyesTab");

	Params::UUI_FoundlingMenu_C_OpenDyesTab_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.OpenDescriptionTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::OpenDescriptionTab(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "OpenDescriptionTab");

	Params::UUI_FoundlingMenu_C_OpenDescriptionTab_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.HandleParallax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetMousePosFromCenterOfScreen_Position                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::HandleParallax(const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "HandleParallax");

	Params::UUI_FoundlingMenu_C_HandleParallax_Params Parms{};

	Parms.CallFunc_GetMousePosFromCenterOfScreen_Position = CallFunc_GetMousePosFromCenterOfScreen_Position;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_1 = CallFunc_Multiply_Vector2DFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.SetDyesButtonsRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellDetail_Entry_C*>CallFunc_GetDyesButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::SetDyesButtonsRef(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "SetDyesButtonsRef");

	Params::UUI_FoundlingMenu_C_SetDyesButtonsRef_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDyesButtons_Array = CallFunc_GetDyesButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavTabUnhover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MainMenu_Button_C*       Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::NavTabUnhover(class UUI_MainMenu_Button_C* Local_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavTabUnhover");

	Params::UUI_FoundlingMenu_C_NavTabUnhover_Params Parms{};

	Parms.Local_Button = Local_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTabButtons_Array = CallFunc_GetTabButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavSoundHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavSoundHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavSoundHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavTabHover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::NavTabHover(int32 Index, class UUI_MainMenu_Button_C* Local_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavTabHover");

	Params::UUI_FoundlingMenu_C_NavTabHover_Params Parms{};

	Parms.Index = Index;
	Parms.Local_Button = Local_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTabButtons_Array = CallFunc_GetTabButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::NavConfirm(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavConfirm");

	Params::UUI_FoundlingMenu_C_NavConfirm_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.UpdateCharacterDye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_0_Base_GetMesh_Mesh                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::UpdateCharacterDye(class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_0_Base_GetMesh_Mesh, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "UpdateCharacterDye");

	Params::UUI_FoundlingMenu_C_UpdateCharacterDye_Params Parms{};

	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_1 = K2Node_DynamicCast_AsCharacter_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_0_Base_GetMesh_Mesh = CallFunc_0_Base_GetMesh_Mesh;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.ConfirmNewDye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShellDetail_Entry_C*     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellDyes           K2Node_SetFieldsInStruct_StructOut                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellDetail_Entry_C*>CallFunc_GetDyesButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellDetail_Entry_C*>CallFunc_GetDyesButtons_Array_1                                  (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShellDetail_Entry_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::ConfirmNewDye(bool CustomWidget, class UUI_ShellDetail_Entry_C* Widget, class UUI_ShellDetail_Entry_C* Local_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_Conv_IntToByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, const struct FStruct_ShellDyes& K2Node_SetFieldsInStruct_StructOut, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array_1, bool CallFunc_Less_IntInt_ReturnValue, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "ConfirmNewDye");

	Params::UUI_FoundlingMenu_C_ConfirmNewDye_Params Parms{};

	Parms.CustomWidget = CustomWidget;
	Parms.Widget = Widget;
	Parms.Local_Button = Local_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetDyesButtons_Array = CallFunc_GetDyesButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDyesButtons_Array_1 = CallFunc_GetDyesButtons_Array_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavConfirmListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_FoundlingMenu_C::NavConfirmListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavConfirmListen");

	Params::UUI_FoundlingMenu_C_NavConfirmListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.Get_UI_Prompt_Visibility_Dyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_FoundlingMenu_C::Get_UI_Prompt_Visibility_Dyes(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "Get_UI_Prompt_Visibility_Dyes");

	Params::UUI_FoundlingMenu_C_Get_UI_Prompt_Visibility_Dyes_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.UpdateDyesLockState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       Local_LockState                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_ShellDetail_Entry_C*>CallFunc_GetDyesButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<bool>                       K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::UpdateDyesLockState(const TArray<bool>& Local_LockState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array, TArray<bool>& K2Node_MakeArray_Array, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "UpdateDyesLockState");

	Params::UUI_FoundlingMenu_C_UpdateDyesLockState_Params Parms{};

	Parms.Local_LockState = Local_LockState;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDyesButtons_Array = CallFunc_GetDyesButtons_Array;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetShellDyesLockState_LockState = CallFunc_GetShellDyesLockState_LockState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::NavDown(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavDown");

	Params::UUI_FoundlingMenu_C_NavDown_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::NavUp(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavUp");

	Params::UUI_FoundlingMenu_C_NavUp_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavDownListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_FoundlingMenu_C::NavDownListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavDownListen");

	Params::UUI_FoundlingMenu_C_NavDownListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavUpListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_FoundlingMenu_C::NavUpListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavUpListen");

	Params::UUI_FoundlingMenu_C_NavUpListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.GetDyeIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_FoundlingMenu_C::GetDyeIndex(int32 SelectedIndex, int32 Delta, int32 MaxIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "GetDyeIndex");

	Params::UUI_FoundlingMenu_C_GetDyeIndex_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Delta = Delta;
	Parms.MaxIndex = MaxIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.SetPawnRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquipmentMenuPawn_C*     Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuPawn_Foundling_C*K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Foundling            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::SetPawnRef(class ABP_EquipmentMenuPawn_C* Pawn, class ABP_EquipmentMenuPawn_Foundling_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Foundling, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "SetPawnRef");

	Params::UUI_FoundlingMenu_C_SetPawnRef_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Foundling = K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Foundling;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.GetDyesButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_ShellDetail_Entry_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_ShellDetail_Entry_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::GetDyesButtons(TArray<class UUI_ShellDetail_Entry_C*>* Array, TArray<class UUI_ShellDetail_Entry_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "GetDyesButtons");

	Params::UUI_FoundlingMenu_C_GetDyesButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavSelectDye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AutoSelectCurrentDye                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsHovering                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ShellDetail_Entry_C*     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsHovering                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_AutoSelect                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ShellDetail_Entry_C*>CallFunc_GetDyesButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_ShellDetail_Entry_C*>CallFunc_GetDyesButtons_Array_1                                  (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetDyeIndex_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_ShellDetail_Entry_C*>CallFunc_GetDyesButtons_Array_2                                  (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_ShellDetail_Entry_C*>CallFunc_GetDyesButtons_Array_3                                  (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::NavSelectDye(bool CustomIndex, bool AutoSelectCurrentDye, bool IsHovering, bool SkipSound, bool UseWidget, class UUI_ShellDetail_Entry_C* Widget, int32 Delta, int32 Index, int32 Local_IndexSelected, int32 Local_Delta, class UUI_ShellDetail_Entry_C* Local_Widget, bool Local_UseWidget, bool Local_SkipSound, bool Local_IsHovering, bool Local_AutoSelect, bool Local_CustomIndex, int32 Temp_int_Array_Index_Variable, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_GetDyeIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array_2, int32 CallFunc_Array_Find_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, TArray<class UUI_ShellDetail_Entry_C*>& CallFunc_GetDyesButtons_Array_3, class UUI_ShellDetail_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavSelectDye");

	Params::UUI_FoundlingMenu_C_NavSelectDye_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.AutoSelectCurrentDye = AutoSelectCurrentDye;
	Parms.IsHovering = IsHovering;
	Parms.SkipSound = SkipSound;
	Parms.UseWidget = UseWidget;
	Parms.Widget = Widget;
	Parms.Delta = Delta;
	Parms.Index = Index;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_Widget = Local_Widget;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_IsHovering = Local_IsHovering;
	Parms.Local_AutoSelect = Local_AutoSelect;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetDyesButtons_Array = CallFunc_GetDyesButtons_Array;
	Parms.CallFunc_GetDyesButtons_Array_1 = CallFunc_GetDyesButtons_Array_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDyeIndex_ReturnValue = CallFunc_GetDyeIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetDyesButtons_Array_2 = CallFunc_GetDyesButtons_Array_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_GetDyesButtons_Array_3 = CallFunc_GetDyesButtons_Array_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.UI_SoundTabSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::UI_SoundTabSwitch(bool SkipSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "UI_SoundTabSwitch");

	Params::UUI_FoundlingMenu_C_UI_SoundTabSwitch_Params Parms{};

	Parms.SkipSound = SkipSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.GetTabButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::GetTabButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "GetTabButtons");

	Params::UUI_FoundlingMenu_C_GetTabButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.UpdateTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_IndexTab                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::UpdateTab(int32 Index, bool SkipSound, bool Local_SkipSound, int32 Local_IndexTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "UpdateTab");

	Params::UUI_FoundlingMenu_C_UpdateTab_Params Parms{};

	Parms.Index = Index;
	Parms.SkipSound = SkipSound;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_IndexTab = Local_IndexTab;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTabButtons_Array = CallFunc_GetTabButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.SelectTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FoundlingMenu_C::SelectTab(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "SelectTab");

	Params::UUI_FoundlingMenu_C_SelectTab_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.SetGameplayPCRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::SetGameplayPCRef(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "SetGameplayPCRef");

	Params::UUI_FoundlingMenu_C_SetGameplayPCRef_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavBackListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_FoundlingMenu_C::NavBackListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavBackListen");

	Params::UUI_FoundlingMenu_C_NavBackListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavTabNextListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_FoundlingMenu_C::NavTabNextListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavTabNextListen");

	Params::UUI_FoundlingMenu_C_NavTabNextListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavTabPreviousListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_FoundlingMenu_C::NavTabPreviousListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavTabPreviousListen");

	Params::UUI_FoundlingMenu_C_NavTabPreviousListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.SetFoundlingStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::SetFoundlingStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "SetFoundlingStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.PlayFadeInAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 AnimFinished                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::PlayFadeInAnim(FDelegateProperty_ AnimFinished, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "PlayFadeInAnim");

	Params::UUI_FoundlingMenu_C_PlayFadeInAnim_Params Parms{};

	Parms.AnimFinished = AnimFinished;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavTabNext_ListenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavTabNext_ListenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavTabNext_ListenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavTabNext_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavTabNext_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavTabNext_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::OnAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "OnAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavBack_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavBack_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavBack_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavBack_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavBack_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavBack_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavTabPrevious_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavTabPrevious_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavTabPrevious_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavTabPrevious_ListenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavTabPrevious_ListenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavTabPrevious_ListenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavConfirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavConfirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavConfirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavConfirm_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavConfirm_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavConfirm_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavDown_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavDown_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavDown_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavDown_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavDown_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavDown_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavUp_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavUp_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavUp_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUI_FoundlingMenu_C_BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UUI_FoundlingMenu_C_BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");

	Params::UUI_FoundlingMenu_C_BndEvt__UI_Button_Description_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UUI_FoundlingMenu_C_BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature");

	Params::UUI_FoundlingMenu_C_BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature");

	Params::UUI_FoundlingMenu_C_BndEvt__UI_Button_Dyes_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.OnDyeEntryHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShellDetail_Entry_C*     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::OnDyeEntryHovered(class UUI_ShellDetail_Entry_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "OnDyeEntryHovered");

	Params::UUI_FoundlingMenu_C_OnDyeEntryHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.OnDyeEntryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShellDetail_Entry_C*     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::OnDyeEntryClicked(class UUI_ShellDetail_Entry_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "OnDyeEntryClicked");

	Params::UUI_FoundlingMenu_C_OnDyeEntryClicked_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.NavUp_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::NavUp_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "NavUp_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "Tick");

	Params::UUI_FoundlingMenu_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.OnOpenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquipmentMenuPawn_C*     Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::OnOpenEvent(class ABP_EquipmentMenuPawn_C* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "OnOpenEvent");

	Params::UUI_FoundlingMenu_C_OnOpenEvent_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_FoundlingMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature");

	Params::UUI_FoundlingMenu_C_BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FoundlingMenu.UI_FoundlingMenu_C.ExecuteUbergraph_UI_FoundlingMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShellDetail_Entry_C*     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuPawn_C*     K2Node_CustomEvent_Pawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FoundlingMenu_C::ExecuteUbergraph_UI_FoundlingMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, class UUI_ShellDetail_Entry_C* K2Node_CustomEvent_Widget_1, class UUI_ShellDetail_Entry_C* K2Node_CustomEvent_Widget, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ABP_EquipmentMenuPawn_C* K2Node_CustomEvent_Pawn, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FoundlingMenu_C", "ExecuteUbergraph_UI_FoundlingMenu");

	Params::UUI_FoundlingMenu_C_ExecuteUbergraph_UI_FoundlingMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_Widget_5 = K2Node_ComponentBoundEvent_Widget_5;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Widget_4 = K2Node_ComponentBoundEvent_Widget_4;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_Widget_3 = K2Node_ComponentBoundEvent_Widget_3;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


