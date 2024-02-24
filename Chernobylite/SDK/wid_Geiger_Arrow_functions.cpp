#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Geiger_Arrow.wid_Geiger_Arrow_C
// (None)

class UClass* UWid_Geiger_Arrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Geiger_Arrow_C");

	return Clss;
}


// wid_Geiger_Arrow_C wid_Geiger_Arrow.Default__wid_Geiger_Arrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Geiger_Arrow_C* UWid_Geiger_Arrow_C::GetDefaultObj()
{
	static class UWid_Geiger_Arrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Geiger_Arrow_C*>(UWid_Geiger_Arrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.GetCurrentResourceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EScannableResourceType  NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Geiger_Arrow_C::GetCurrentResourceType(enum class EScannableResourceType* NewParam, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "GetCurrentResourceType");

	Params::UWid_Geiger_Arrow_C_GetCurrentResourceType_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.SetFoundItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FoundItemOfClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Geiger_Arrow_C::SetFoundItem(bool FoundItemOfClass, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "SetFoundItem");

	Params::UWid_Geiger_Arrow_C_SetFoundItem_Params Parms{};

	Parms.FoundItemOfClass = FoundItemOfClass;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.WrapResourceByteAround
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWid_Geiger_Arrow_C::WrapResourceByteAround(int32 Value, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "WrapResourceByteAround");

	Params::UWid_Geiger_Arrow_C_WrapResourceByteAround_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.SetItemImageByEnum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      TargetImage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ScanCategory       Enumerator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Geiger_Arrow_C::SetItemImageByEnum(class UImage* TargetImage, enum class Enum_ScanCategory Enumerator, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "SetItemImageByEnum");

	Params::UWid_Geiger_Arrow_C_SetItemImageByEnum_Params Parms{};

	Parms.TargetImage = TargetImage;
	Parms.Enumerator = Enumerator;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue = CallFunc_CullSpacesFromA_String_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Geiger_Arrow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "Tick");

	Params::UWid_Geiger_Arrow_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.UpdateClosestItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PickableItem_00_C*       Res                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Geiger_Arrow_C::UpdateClosestItem(class ABP_PickableItem_00_C* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "UpdateClosestItem");

	Params::UWid_Geiger_Arrow_C_UpdateClosestItem_Params Parms{};

	Parms.Res = Res;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.SwitchResourceImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ScanCategory       Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Resource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipAnimation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Geiger_Arrow_C::SwitchResourceImage(enum class Enum_ScanCategory Index, bool Is_Resource, bool SkipAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "SwitchResourceImage");

	Params::UWid_Geiger_Arrow_C_SwitchResourceImage_Params Parms{};

	Parms.Index = Index;
	Parms.Is_Resource = Is_Resource;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Geiger_Arrow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "PreConstruct");

	Params::UWid_Geiger_Arrow_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.ShowArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Geiger_Arrow_C::ShowArrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "ShowArrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.ShowMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Geiger_Arrow_C::ShowMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "ShowMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.ExecuteUbergraph_wid_Geiger_Arrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTime_Time                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTime_Time_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_00_C*       K2Node_CustomEvent_Res                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTime_Time_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ScanCategory       K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Resource                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_SkipAnimation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SignOfFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAcos_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_WrapResourceByteAround_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_WrapResourceByteAround_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_6                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTime_Time_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTime_Time_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTime_Time_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTime_Time_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Geiger_Arrow_C::ExecuteUbergraph_wid_Geiger_Arrow(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, bool Temp_bool_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetTime_Time, float CallFunc_GetTime_Time_1, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_2, class ABP_PickableItem_00_C* K2Node_CustomEvent_Res, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetTime_Time_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, enum class Enum_ScanCategory K2Node_CustomEvent_Index, bool K2Node_CustomEvent_Is_Resource, bool K2Node_CustomEvent_SkipAnimation, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Greater_ByteByte_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_WrapResourceByteAround_ReturnValue, int32 CallFunc_WrapResourceByteAround_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool K2Node_Event_IsDesignTime, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetTime_Time_3, bool Temp_bool_Variable_1, bool K2Node_Select_Default, class UClass* K2Node_Select_Default_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_4, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_GetTime_Time_4, float CallFunc_GetTime_Time_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_6, float CallFunc_GetTime_Time_6, bool CallFunc_IsValid_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "ExecuteUbergraph_wid_Geiger_Arrow");

	Params::UWid_Geiger_Arrow_C_ExecuteUbergraph_wid_Geiger_Arrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTime_Time = CallFunc_GetTime_Time;
	Parms.CallFunc_GetTime_Time_1 = CallFunc_GetTime_Time_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.K2Node_CustomEvent_Res = K2Node_CustomEvent_Res;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTime_Time_2 = CallFunc_GetTime_Time_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Is_Resource = K2Node_CustomEvent_Is_Resource;
	Parms.K2Node_CustomEvent_SkipAnimation = K2Node_CustomEvent_SkipAnimation;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_SignOfFloat_ReturnValue = CallFunc_SignOfFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue = CallFunc_Conv_ByteToFloat_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_DegAcos_ReturnValue = CallFunc_DegAcos_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_1 = CallFunc_Conv_ByteToFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_WrapResourceByteAround_ReturnValue = CallFunc_WrapResourceByteAround_ReturnValue;
	Parms.CallFunc_WrapResourceByteAround_ReturnValue_1 = CallFunc_WrapResourceByteAround_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_6 = CallFunc_MakeTransform_ReturnValue_6;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetTime_Time_3 = CallFunc_GetTime_Time_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_4 = CallFunc_FinishSpawningActor_ReturnValue_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_5 = CallFunc_FinishSpawningActor_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetTime_Time_4 = CallFunc_GetTime_Time_4;
	Parms.CallFunc_GetTime_Time_5 = CallFunc_GetTime_Time_5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_6 = CallFunc_FinishSpawningActor_ReturnValue_6;
	Parms.CallFunc_GetTime_Time_6 = CallFunc_GetTime_Time_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.ResourceTypChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Geiger_Arrow_C::ResourceTypChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "ResourceTypChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Geiger_Arrow.wid_Geiger_Arrow_C.FinishedAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Geiger_Arrow_C::FinishedAnimation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Geiger_Arrow_C", "FinishedAnimation__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


