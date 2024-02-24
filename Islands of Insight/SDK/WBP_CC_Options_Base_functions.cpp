#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_Options_Base.WBP_CC_Options_Base_C
// (None)

class UClass* UWBP_CC_Options_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_Options_Base_C");

	return Clss;
}


// WBP_CC_Options_Base_C WBP_CC_Options_Base.Default__WBP_CC_Options_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_Options_Base_C* UWBP_CC_Options_Base_C::GetDefaultObj()
{
	static class UWBP_CC_Options_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_Options_Base_C*>(UWBP_CC_Options_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.ResetCurrentEquipIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::ResetCurrentEquipIndex(uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, int32 K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "ResetCurrentEquipIndex");

	Params::UWBP_CC_Options_Base_C_ResetCurrentEquipIndex_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.GetOuterObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

class UObject* UWBP_CC_Options_Base_C::GetOuterObject(class UPanelWidget* CallFunc_GetParent_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetOuterObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UObject* CallFunc_GetOuterObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "GetOuterObject");

	Params::UWBP_CC_Options_Base_C_GetOuterObject_Params Parms{};

	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_GetParent_ReturnValue_1 = CallFunc_GetParent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.GetIsCreation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BPI_IsFTUE_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CC_Options_Base_C::GetIsCreation(bool CallFunc_BPI_IsFTUE_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "GetIsCreation");

	Params::UWBP_CC_Options_Base_C_GetIsCreation_Params Parms{};

	Parms.CallFunc_BPI_IsFTUE_ReturnValue = CallFunc_BPI_IsFTUE_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.HandleSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCC_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::HandleSelectionChanged(class UCC_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "HandleSelectionChanged");

	Params::UWBP_CC_Options_Base_C_HandleSelectionChanged_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.GetCostumeIcons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCostume>            Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UTexture2D*>          OutTex                                                           (Parm, OutParm)
// TArray<class FString>              OutIds                                                           (Parm, OutParm)
// TArray<class FString>              IDs                                                              (Edit, BlueprintVisible)
// TArray<class UTexture2D*>          Icons                                                            (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCostume                    CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::GetCostumeIcons(TArray<struct FCostume>& Array, TArray<class UTexture2D*>* OutTex, TArray<class FString>* OutIds, const TArray<class FString>& IDs, const TArray<class UTexture2D*>& Icons, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCostume& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "GetCostumeIcons");

	Params::UWBP_CC_Options_Base_C_GetCostumeIcons_Params Parms{};

	Parms.Array = Array;
	Parms.IDs = IDs;
	Parms.Icons = Icons;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTex != nullptr)
		*OutTex = std::move(Parms.OutTex);

	if (OutIds != nullptr)
		*OutIds = std::move(Parms.OutIds);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CC_Options_Base_C::Init(int32 Val, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "Init");

	Params::UWBP_CC_Options_Base_C_Init_Params Parms{};

	Parms.Val = Val;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_Options_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.OnConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_Options_Base_C::OnConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "OnConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.OnButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCC_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::OnButtonClicked(bool Locked, int32 Val, class UCC_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "OnButtonClicked");

	Params::UWBP_CC_Options_Base_C_OnButtonClicked_Params Parms{};

	Parms.Locked = Locked;
	Parms.Val = Val;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.OnChangedValueDummy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::OnChangedValueDummy(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "OnChangedValueDummy");

	Params::UWBP_CC_Options_Base_C_OnChangedValueDummy_Params Parms{};

	Parms.Object = Object;
	Parms.Val = Val;
	Parms.bUseIndex = bUseIndex;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.OnChangedValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::OnChangedValue(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "OnChangedValue");

	Params::UWBP_CC_Options_Base_C_OnChangedValue_Params Parms{};

	Parms.Object = Object;
	Parms.Val = Val;
	Parms.bUseIndex = bUseIndex;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.OnCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_Options_Base_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.UpdateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_Options_Base_C::UpdateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "UpdateWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.InitWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsDynamicIcon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bOverlayColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECustomizationTypes     CustomizationType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TypeIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Columns                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rows                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ImageX                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ImageY                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::InitWidget(bool bIsDynamicIcon, bool bOverlayColor, enum class ECustomizationTypes CustomizationType, int32 TypeIndex, int32 Columns, int32 Rows, float ImageX, float ImageY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "InitWidget");

	Params::UWBP_CC_Options_Base_C_InitWidget_Params Parms{};

	Parms.bIsDynamicIcon = bIsDynamicIcon;
	Parms.bOverlayColor = bOverlayColor;
	Parms.CustomizationType = CustomizationType;
	Parms.TypeIndex = TypeIndex;
	Parms.Columns = Columns;
	Parms.Rows = Rows;
	Parms.ImageX = ImageX;
	Parms.ImageY = ImageY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.Reinit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_Options_Base_C::Reinit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "Reinit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "Tick");

	Params::UWBP_CC_Options_Base_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.ExecuteUbergraph_WBP_CC_Options_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Locked                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Val_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCC_Button_C*                K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Object_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Val_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseIndex_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ID_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Object                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Val                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IBPI_CharacterCustomization_C>K2Node_DynamicCast_AsBPI_Character_Customization                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_CharacterCreation2_C*   CallFunc_GetCustomizationWidget_Return                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsDynamicIcon                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bOverlayColor                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECustomizationTypes     K2Node_CustomEvent_CustomizationType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TypeIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Columns                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Rows                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ImageX                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ImageY                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CC_Options_Base_C::ExecuteUbergraph_WBP_CC_Options_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool K2Node_CustomEvent_Locked, int32 K2Node_CustomEvent_Val_2, class UCC_Button_C* K2Node_CustomEvent_Button, class UObject* K2Node_CustomEvent_Object_1, int32 K2Node_CustomEvent_Val_1, bool K2Node_CustomEvent_bUseIndex_1, const class FString& K2Node_CustomEvent_ID_1, class UObject* K2Node_CustomEvent_Object, int32 K2Node_CustomEvent_Val, bool K2Node_CustomEvent_bUseIndex, const class FString& K2Node_CustomEvent_ID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IBPI_CharacterCustomization_C> K2Node_DynamicCast_AsBPI_Character_Customization, bool K2Node_DynamicCast_bSuccess, class UWBP_CharacterCreation2_C* CallFunc_GetCustomizationWidget_Return, int32 CallFunc_SelectInt_ReturnValue, bool K2Node_CustomEvent_bIsDynamicIcon, bool K2Node_CustomEvent_bOverlayColor, enum class ECustomizationTypes K2Node_CustomEvent_CustomizationType, int32 K2Node_CustomEvent_TypeIndex, int32 K2Node_CustomEvent_Columns, int32 K2Node_CustomEvent_Rows, float K2Node_CustomEvent_ImageX, float K2Node_CustomEvent_ImageY, class UObject* CallFunc_GetOuterObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "ExecuteUbergraph_WBP_CC_Options_Base");

	Params::UWBP_CC_Options_Base_C_ExecuteUbergraph_WBP_CC_Options_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_CustomEvent_Locked = K2Node_CustomEvent_Locked;
	Parms.K2Node_CustomEvent_Val_2 = K2Node_CustomEvent_Val_2;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CustomEvent_Object_1 = K2Node_CustomEvent_Object_1;
	Parms.K2Node_CustomEvent_Val_1 = K2Node_CustomEvent_Val_1;
	Parms.K2Node_CustomEvent_bUseIndex_1 = K2Node_CustomEvent_bUseIndex_1;
	Parms.K2Node_CustomEvent_ID_1 = K2Node_CustomEvent_ID_1;
	Parms.K2Node_CustomEvent_Object = K2Node_CustomEvent_Object;
	Parms.K2Node_CustomEvent_Val = K2Node_CustomEvent_Val;
	Parms.K2Node_CustomEvent_bUseIndex = K2Node_CustomEvent_bUseIndex;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsBPI_Character_Customization = K2Node_DynamicCast_AsBPI_Character_Customization;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCustomizationWidget_Return = CallFunc_GetCustomizationWidget_Return;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_CustomEvent_bIsDynamicIcon = K2Node_CustomEvent_bIsDynamicIcon;
	Parms.K2Node_CustomEvent_bOverlayColor = K2Node_CustomEvent_bOverlayColor;
	Parms.K2Node_CustomEvent_CustomizationType = K2Node_CustomEvent_CustomizationType;
	Parms.K2Node_CustomEvent_TypeIndex = K2Node_CustomEvent_TypeIndex;
	Parms.K2Node_CustomEvent_Columns = K2Node_CustomEvent_Columns;
	Parms.K2Node_CustomEvent_Rows = K2Node_CustomEvent_Rows;
	Parms.K2Node_CustomEvent_ImageX = K2Node_CustomEvent_ImageX;
	Parms.K2Node_CustomEvent_ImageY = K2Node_CustomEvent_ImageY;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::OnValueChanged__DelegateSignature(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "OnValueChanged__DelegateSignature");

	Params::UWBP_CC_Options_Base_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Object = Object;
	Parms.Val = Val;
	Parms.bUseIndex = bUseIndex;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_Options_Base.WBP_CC_Options_Base_C.OnValueChangedDummy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CC_Options_Base_C::OnValueChangedDummy__DelegateSignature(class UObject* Object, int32 Val, bool UseIndex, const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_Options_Base_C", "OnValueChangedDummy__DelegateSignature");

	Params::UWBP_CC_Options_Base_C_OnValueChangedDummy__DelegateSignature_Params Parms{};

	Parms.Object = Object;
	Parms.Val = Val;
	Parms.UseIndex = UseIndex;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}

}


