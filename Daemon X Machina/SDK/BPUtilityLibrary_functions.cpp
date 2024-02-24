#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPUtilityLibrary.BPUtilityLibrary_C
// (None)

class UClass* UBPUtilityLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPUtilityLibrary_C");

	return Clss;
}


// BPUtilityLibrary_C BPUtilityLibrary.Default__BPUtilityLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPUtilityLibrary_C* UBPUtilityLibrary_C::GetDefaultObj()
{
	static class UBPUtilityLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPUtilityLibrary_C*>(UBPUtilityLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPUtilityLibrary.BPUtilityLibrary_C.SetImageToImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      TargetImage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    (None)

void UBPUtilityLibrary_C::SetImageToImage(class UImage* TargetImage, class UObject* Image, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "SetImageToImage");

	Params::UBPUtilityLibrary_C_SetImageToImage_Params Parms{};

	Parms.TargetImage = TargetImage;
	Parms.Image = Image;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.IsSupportWeapon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLSupportWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::IsSupportWeapon(class FName RowName, class UObject* __WorldContext, bool* Result, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "IsSupportWeapon");

	Params::UBPUtilityLibrary_C_IsSupportWeapon_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.SetWeaponVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      TargetPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLCharacterCommon*         K2Node_DynamicCast_AsTTLCharacter_Common                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::SetWeaponVisibility(bool IsVisible, bool IsLeft, class AActor* TargetPawn, class UObject* __WorldContext, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "SetWeaponVisibility");

	Params::UBPUtilityLibrary_C_SetWeaponVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.IsLeft = IsLeft;
	Parms.TargetPawn = TargetPawn;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsTTLCharacter_Common = K2Node_DynamicCast_AsTTLCharacter_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.GetButtonImage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ButtonStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      Image                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_DynamicCast_AsImage                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::GetButtonImage(const struct FSlateBrush& ButtonStyle, class UObject* __WorldContext, class UImage** Image, class UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "GetButtonImage");

	Params::UBPUtilityLibrary_C_GetButtonImage_Params Parms{};

	Parms.ButtonStyle = ButtonStyle;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsImage = K2Node_DynamicCast_AsImage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.GetButtonMaterial
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ButtonStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Material                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::GetButtonMaterial(const struct FSlateBrush& ButtonStyle, class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "GetButtonMaterial");

	Params::UBPUtilityLibrary_C_GetButtonMaterial_Params Parms{};

	Parms.ButtonStyle = ButtonStyle;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Material != nullptr)
		*Material = Parms.Material;

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.CreateButtonDynamicMaterial
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)

void UBPUtilityLibrary_C::CreateButtonDynamicMaterial(class UButton* Button, class UObject* __WorldContext, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface1, bool K2Node_DynamicCast_bSuccess1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "CreateButtonDynamicMaterial");

	Params::UBPUtilityLibrary_C_CreateButtonDynamicMaterial_Params Parms{};

	Parms.Button = Button;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsMaterial_Interface = K2Node_DynamicCast_AsMaterial_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMaterial_Interface1 = K2Node_DynamicCast_AsMaterial_Interface1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.GetPartsName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTTLAssemblePartsInfoRow    PartsInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PartsName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsHeadParamRow       CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLSupportWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow1                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow2                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLMissileWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow3                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow4                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow5                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsInsideParamRow     CallFunc_GetDataTableRowFromName_OutRow6                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsLegsParamRow       CallFunc_GetDataTableRowFromName_OutRow7                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsArmRightParamRow   CallFunc_GetDataTableRowFromName_OutRow8                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsArmLeftParamRow    CallFunc_GetDataTableRowFromName_OutRow9                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue9                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsBodyParamRow       CallFunc_GetDataTableRowFromName_OutRow10                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue10                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::GetPartsName(const struct FTTLAssemblePartsInfoRow& PartsInfo, class UObject* __WorldContext, class FName* PartsName, const struct FTTLPartsHeadParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow2, bool CallFunc_GetDataTableRowFromName_ReturnValue2, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow3, bool CallFunc_GetDataTableRowFromName_ReturnValue3, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow4, bool CallFunc_GetDataTableRowFromName_ReturnValue4, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow5, bool CallFunc_GetDataTableRowFromName_ReturnValue5, const struct FTTLPartsInsideParamRow& CallFunc_GetDataTableRowFromName_OutRow6, bool CallFunc_GetDataTableRowFromName_ReturnValue6, const struct FTTLPartsLegsParamRow& CallFunc_GetDataTableRowFromName_OutRow7, bool CallFunc_GetDataTableRowFromName_ReturnValue7, const struct FTTLPartsArmRightParamRow& CallFunc_GetDataTableRowFromName_OutRow8, bool CallFunc_GetDataTableRowFromName_ReturnValue8, const struct FTTLPartsArmLeftParamRow& CallFunc_GetDataTableRowFromName_OutRow9, bool CallFunc_GetDataTableRowFromName_ReturnValue9, const struct FTTLPartsBodyParamRow& CallFunc_GetDataTableRowFromName_OutRow10, bool CallFunc_GetDataTableRowFromName_ReturnValue10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "GetPartsName");

	Params::UBPUtilityLibrary_C_GetPartsName_Params Parms{};

	Parms.PartsInfo = PartsInfo;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow1 = CallFunc_GetDataTableRowFromName_OutRow1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue1 = CallFunc_GetDataTableRowFromName_ReturnValue1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow2 = CallFunc_GetDataTableRowFromName_OutRow2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue2 = CallFunc_GetDataTableRowFromName_ReturnValue2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow3 = CallFunc_GetDataTableRowFromName_OutRow3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue3 = CallFunc_GetDataTableRowFromName_ReturnValue3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow4 = CallFunc_GetDataTableRowFromName_OutRow4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue4 = CallFunc_GetDataTableRowFromName_ReturnValue4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow5 = CallFunc_GetDataTableRowFromName_OutRow5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue5 = CallFunc_GetDataTableRowFromName_ReturnValue5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow6 = CallFunc_GetDataTableRowFromName_OutRow6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue6 = CallFunc_GetDataTableRowFromName_ReturnValue6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow7 = CallFunc_GetDataTableRowFromName_OutRow7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue7 = CallFunc_GetDataTableRowFromName_ReturnValue7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow8 = CallFunc_GetDataTableRowFromName_OutRow8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue8 = CallFunc_GetDataTableRowFromName_ReturnValue8;
	Parms.CallFunc_GetDataTableRowFromName_OutRow9 = CallFunc_GetDataTableRowFromName_OutRow9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue9 = CallFunc_GetDataTableRowFromName_ReturnValue9;
	Parms.CallFunc_GetDataTableRowFromName_OutRow10 = CallFunc_GetDataTableRowFromName_OutRow10;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue10 = CallFunc_GetDataTableRowFromName_ReturnValue10;

	UObject::ProcessEvent(Func, &Parms);

	if (PartsName != nullptr)
		*PartsName = Parms.PartsName;

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.SetEnabledLockOn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewEnable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LockOnTag                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::SetEnabledLockOn(bool NewEnable, class AActor* TargetActor, class UObject* __WorldContext, class FName LockOnTag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "SetEnabledLockOn");

	Params::UBPUtilityLibrary_C_SetEnabledLockOn_Params Parms{};

	Parms.NewEnable = NewEnable;
	Parms.TargetActor = TargetActor;
	Parms.__WorldContext = __WorldContext;
	Parms.LockOnTag = LockOnTag;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue1 = CallFunc_ActorHasTag_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.GetWeaponClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Actor                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLSupportWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLMissileWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow1                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsActor1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow2                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow3                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsActor2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsActor3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::GetWeaponClass(class FName RowName, class UObject* __WorldContext, class UClass** Actor, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsActor1, bool K2Node_ClassDynamicCast_bSuccess1, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow2, bool CallFunc_GetDataTableRowFromName_ReturnValue2, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow3, bool CallFunc_GetDataTableRowFromName_ReturnValue3, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3, class UClass* K2Node_ClassDynamicCast_AsActor2, bool K2Node_ClassDynamicCast_bSuccess2, class UClass* K2Node_ClassDynamicCast_AsActor3, bool K2Node_ClassDynamicCast_bSuccess3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "GetWeaponClass");

	Params::UBPUtilityLibrary_C_GetWeaponClass_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow1 = CallFunc_GetDataTableRowFromName_OutRow1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue1 = CallFunc_GetDataTableRowFromName_ReturnValue1;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsActor1 = K2Node_ClassDynamicCast_AsActor1;
	Parms.K2Node_ClassDynamicCast_bSuccess1 = K2Node_ClassDynamicCast_bSuccess1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow2 = CallFunc_GetDataTableRowFromName_OutRow2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue2 = CallFunc_GetDataTableRowFromName_ReturnValue2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow3 = CallFunc_GetDataTableRowFromName_OutRow3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue3 = CallFunc_GetDataTableRowFromName_ReturnValue3;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2;
	Parms.CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3 = CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3;
	Parms.K2Node_ClassDynamicCast_AsActor2 = K2Node_ClassDynamicCast_AsActor2;
	Parms.K2Node_ClassDynamicCast_bSuccess2 = K2Node_ClassDynamicCast_bSuccess2;
	Parms.K2Node_ClassDynamicCast_AsActor3 = K2Node_ClassDynamicCast_AsActor3;
	Parms.K2Node_ClassDynamicCast_bSuccess3 = K2Node_ClassDynamicCast_bSuccess3;

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.IsShoulderWeapon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLMissileWeaponParamRow   CallFunc_GetDataTableRowFromName_OutRow1                         (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::IsShoulderWeapon(class FName RowName, class UObject* __WorldContext, bool* Result, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "IsShoulderWeapon");

	Params::UBPUtilityLibrary_C_IsShoulderWeapon_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow1 = CallFunc_GetDataTableRowFromName_OutRow1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue1 = CallFunc_GetDataTableRowFromName_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.IsCloseRangeWeapon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLCloseRangeWeaponParamRowCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::IsCloseRangeWeapon(class FName RowName, class UObject* __WorldContext, bool* Result, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "IsCloseRangeWeapon");

	Params::UBPUtilityLibrary_C_IsCloseRangeWeapon_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.isWeapon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::IsWeapon(class FName RowName, class UObject* __WorldContext, bool* Result, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "isWeapon");

	Params::UBPUtilityLibrary_C_IsWeapon_Params Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPUtilityLibrary.BPUtilityLibrary_C.GetGameInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTurtleGameInstance_C*       Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTurtleGameInstance_C*       K2Node_DynamicCast_AsTurtle_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUtilityLibrary_C::GetGameInstance(class AActor* Object, class UObject* __WorldContext, class UTurtleGameInstance_C** Result, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UTurtleGameInstance_C* K2Node_DynamicCast_AsTurtle_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUtilityLibrary_C", "GetGameInstance");

	Params::UBPUtilityLibrary_C_GetGameInstance_Params Parms{};

	Parms.Object = Object;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsTurtle_Game_Instance = K2Node_DynamicCast_AsTurtle_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


