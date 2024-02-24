#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropPointInformation.UMG_DropPointInformation_C
// (None)

class UClass* UUMG_DropPointInformation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropPointInformation_C");

	return Clss;
}


// UMG_DropPointInformation_C UMG_DropPointInformation.Default__UMG_DropPointInformation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropPointInformation_C* UUMG_DropPointInformation_C::GetDefaultObj()
{
	static class UUMG_DropPointInformation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropPointInformation_C*>(UUMG_DropPointInformation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.ConvertAttributeToInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EDropAbundance          Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// bool                               Negative                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDropAbundance          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UUMG_DropPointInformation_C::ConvertAttributeToInfo(enum class EDropAbundance Enum, class FText* Text, bool* Negative, enum class EDropAbundance Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "ConvertAttributeToInfo");

	Params::UUMG_DropPointInformation_C_ConvertAttributeToInfo_Params Parms{};

	Parms.Enum = Enum;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	if (Negative != nullptr)
		*Negative = Parms.Negative;

}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.SetAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      Temp_softobject_Variable                                         (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// TSoftObjectPtr<class UObject>      Temp_softobject_Variable_1                                       (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// TSoftObjectPtr<class UObject>      Temp_softobject_Variable_2                                       (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// TSoftObjectPtr<class UObject>      Temp_softobject_Variable_3                                       (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// TSoftObjectPtr<class UObject>      Temp_softobject_Variable_4                                       (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// TSoftObjectPtr<class UObject>      Temp_softobject_Variable_5                                       (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_5                                             (ConstParm)
// class UUMG_DropGroupAttribute_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropGroupAttribute_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropGroupAttribute_C*   CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropGroupAttribute_C*   CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropGroupAttribute_C*   CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropGroupAttribute_C*   CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropGroupAttribute_C*   CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropGroupAttribute_C*   CallFunc_Create_ReturnValue_7                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDropTemperature        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// enum class EDropTemperature        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_6                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_7                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_8                                       (UObjectWrapper, HasGetValueTypeHash)
// class UUMG_DropGroupAttribute_C*   CallFunc_Create_ReturnValue_8                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      Temp_softobject_Variable_9                                       (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_9                                             (ConstParm)
// TSoftObjectPtr<class UObject>      Temp_softobject_Variable_10                                      (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_10                                            (ConstParm)
// class FText                        Temp_text_Variable_11                                            (ConstParm)
// struct FDropGroupCosmeticData      CallFunc_GetDropGroupsStruct_DropGroups                          (None)
// enum class EValid                  CallFunc_GetDropGroupsStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ConvertAttributeToInfo_Text                             (None)
// bool                               CallFunc_ConvertAttributeToInfo_Negative                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ConvertAttributeToInfo_Text_1                           (None)
// bool                               CallFunc_ConvertAttributeToInfo_Negative_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ConvertAttributeToInfo_Text_2                           (None)
// bool                               CallFunc_ConvertAttributeToInfo_Negative_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ConvertAttributeToInfo_Text_3                           (None)
// bool                               CallFunc_ConvertAttributeToInfo_Negative_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ConvertAttributeToInfo_Text_4                           (None)
// bool                               CallFunc_ConvertAttributeToInfo_Negative_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ConvertAttributeToInfo_Text_5                           (None)
// bool                               CallFunc_ConvertAttributeToInfo_Negative_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ConvertAttributeToInfo_Text_6                           (None)
// bool                               CallFunc_ConvertAttributeToInfo_Negative_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_ConvertAttributeToInfo_Text_7                           (None)
// bool                               CallFunc_ConvertAttributeToInfo_Negative_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_1                                          (UObjectWrapper, HasGetValueTypeHash)

void UUMG_DropPointInformation_C::SetAttributes(TSoftObjectPtr<class UObject> Temp_softobject_Variable, class FText Temp_text_Variable, TSoftObjectPtr<class UObject> Temp_softobject_Variable_1, class FText Temp_text_Variable_1, TSoftObjectPtr<class UObject> Temp_softobject_Variable_2, class FText Temp_text_Variable_2, TSoftObjectPtr<class UObject> Temp_softobject_Variable_3, class FText Temp_text_Variable_3, TSoftObjectPtr<class UObject> Temp_softobject_Variable_4, class FText Temp_text_Variable_4, TSoftObjectPtr<class UObject> Temp_softobject_Variable_5, class FText Temp_text_Variable_5, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_1, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_2, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_3, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_4, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_5, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_6, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_7, enum class EDropTemperature Temp_byte_Variable, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, enum class EDropTemperature Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_6, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_7, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_8, class UUMG_DropGroupAttribute_C* CallFunc_Create_ReturnValue_8, TSoftObjectPtr<class UObject> Temp_softobject_Variable_9, class FText Temp_text_Variable_9, TSoftObjectPtr<class UObject> Temp_softobject_Variable_10, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, const struct FDropGroupCosmeticData& CallFunc_GetDropGroupsStruct_DropGroups, enum class EValid CallFunc_GetDropGroupsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_ConvertAttributeToInfo_Text, bool CallFunc_ConvertAttributeToInfo_Negative, class FText CallFunc_ConvertAttributeToInfo_Text_1, bool CallFunc_ConvertAttributeToInfo_Negative_1, class FText CallFunc_ConvertAttributeToInfo_Text_2, bool CallFunc_ConvertAttributeToInfo_Negative_2, class FText CallFunc_ConvertAttributeToInfo_Text_3, bool CallFunc_ConvertAttributeToInfo_Negative_3, class FText CallFunc_ConvertAttributeToInfo_Text_4, bool CallFunc_ConvertAttributeToInfo_Negative_4, class FText CallFunc_ConvertAttributeToInfo_Text_5, bool CallFunc_ConvertAttributeToInfo_Negative_5, class FText CallFunc_ConvertAttributeToInfo_Text_6, bool CallFunc_ConvertAttributeToInfo_Negative_6, class FText CallFunc_ConvertAttributeToInfo_Text_7, bool CallFunc_ConvertAttributeToInfo_Negative_7, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "SetAttributes");

	Params::UUMG_DropPointInformation_C_SetAttributes_Params Parms{};

	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_softobject_Variable_3 = Temp_softobject_Variable_3;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_softobject_Variable_4 = Temp_softobject_Variable_4;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_softobject_Variable_5 = Temp_softobject_Variable_5;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.CallFunc_Create_ReturnValue_7 = CallFunc_Create_ReturnValue_7;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_softobject_Variable_6 = Temp_softobject_Variable_6;
	Parms.Temp_softobject_Variable_7 = Temp_softobject_Variable_7;
	Parms.Temp_softobject_Variable_8 = Temp_softobject_Variable_8;
	Parms.CallFunc_Create_ReturnValue_8 = CallFunc_Create_ReturnValue_8;
	Parms.Temp_softobject_Variable_9 = Temp_softobject_Variable_9;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_softobject_Variable_10 = Temp_softobject_Variable_10;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.CallFunc_GetDropGroupsStruct_DropGroups = CallFunc_GetDropGroupsStruct_DropGroups;
	Parms.CallFunc_GetDropGroupsStruct_Paths = CallFunc_GetDropGroupsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ConvertAttributeToInfo_Text = CallFunc_ConvertAttributeToInfo_Text;
	Parms.CallFunc_ConvertAttributeToInfo_Negative = CallFunc_ConvertAttributeToInfo_Negative;
	Parms.CallFunc_ConvertAttributeToInfo_Text_1 = CallFunc_ConvertAttributeToInfo_Text_1;
	Parms.CallFunc_ConvertAttributeToInfo_Negative_1 = CallFunc_ConvertAttributeToInfo_Negative_1;
	Parms.CallFunc_ConvertAttributeToInfo_Text_2 = CallFunc_ConvertAttributeToInfo_Text_2;
	Parms.CallFunc_ConvertAttributeToInfo_Negative_2 = CallFunc_ConvertAttributeToInfo_Negative_2;
	Parms.CallFunc_ConvertAttributeToInfo_Text_3 = CallFunc_ConvertAttributeToInfo_Text_3;
	Parms.CallFunc_ConvertAttributeToInfo_Negative_3 = CallFunc_ConvertAttributeToInfo_Negative_3;
	Parms.CallFunc_ConvertAttributeToInfo_Text_4 = CallFunc_ConvertAttributeToInfo_Text_4;
	Parms.CallFunc_ConvertAttributeToInfo_Negative_4 = CallFunc_ConvertAttributeToInfo_Negative_4;
	Parms.CallFunc_ConvertAttributeToInfo_Text_5 = CallFunc_ConvertAttributeToInfo_Text_5;
	Parms.CallFunc_ConvertAttributeToInfo_Negative_5 = CallFunc_ConvertAttributeToInfo_Negative_5;
	Parms.CallFunc_ConvertAttributeToInfo_Text_6 = CallFunc_ConvertAttributeToInfo_Text_6;
	Parms.CallFunc_ConvertAttributeToInfo_Negative_6 = CallFunc_ConvertAttributeToInfo_Negative_6;
	Parms.CallFunc_ConvertAttributeToInfo_Text_7 = CallFunc_ConvertAttributeToInfo_Text_7;
	Parms.CallFunc_ConvertAttributeToInfo_Negative_7 = CallFunc_ConvertAttributeToInfo_Negative_7;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.AddNextAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropPointInformation_C::AddNextAttribute(class UWidget* Content, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBox* K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "AddNextAttribute");

	Params::UUMG_DropPointInformation_C_AddNextAttribute_Params Parms{};

	Parms.Content = Content;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DropPointInformation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.AnimatedRemoveFromParent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DropPointInformation_C::AnimatedRemoveFromParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "AnimatedRemoveFromParent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.RemoveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DropPointInformation_C::RemoveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "RemoveWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.BndEvt__UMG_DropPointInformation_UMG_BasicButton_SelectDrop_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropPointInformation_C::BndEvt__UMG_DropPointInformation_UMG_BasicButton_SelectDrop_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "BndEvt__UMG_DropPointInformation_UMG_BasicButton_SelectDrop_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_DropPointInformation_C_BndEvt__UMG_DropPointInformation_UMG_BasicButton_SelectDrop_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropPointInformation_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "PreConstruct");

	Params::UUMG_DropPointInformation_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.ExecuteUbergraph_UMG_DropPointInformation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDropGroupCosmeticData      CallFunc_GetDropGroupsStruct_DropGroups                          (None)
// enum class EValid                  CallFunc_GetDropGroupsStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropPointInformation_C::ExecuteUbergraph_UMG_DropPointInformation(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, const struct FDropGroupCosmeticData& CallFunc_GetDropGroupsStruct_DropGroups, enum class EValid CallFunc_GetDropGroupsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "ExecuteUbergraph_UMG_DropPointInformation");

	Params::UUMG_DropPointInformation_C_ExecuteUbergraph_UMG_DropPointInformation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDropGroupsStruct_DropGroups = CallFunc_GetDropGroupsStruct_DropGroups;
	Parms.CallFunc_GetDropGroupsStruct_Paths = CallFunc_GetDropGroupsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropPointInformation.UMG_DropPointInformation_C.DropPointSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DropPointInformation_C::DropPointSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropPointInformation_C", "DropPointSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


