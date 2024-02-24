#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_crossbow_00.ba_aa_crossbow_00_C
// (Actor)

class UClass* Aba_aa_crossbow_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_crossbow_00_C");

	return Clss;
}


// ba_aa_crossbow_00_C ba_aa_crossbow_00.Default__ba_aa_crossbow_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_crossbow_00_C* Aba_aa_crossbow_00_C::GetDefaultObj()
{
	static class Aba_aa_crossbow_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_crossbow_00_C*>(Aba_aa_crossbow_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.LootPick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_arrowBody           CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_crossbowProjectile_00_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_crossbow_00_C::LootPick(class FName ItemId, float Amount, class AActor* Actor, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStruct_arrowBody& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class Aba_crossbowProjectile_00_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "LootPick");

	Params::Aba_aa_crossbow_00_C_LootPick_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Amount = Amount;
	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.PrintBodyArrows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPrintTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PrintTime                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_arrowBody>   CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<class ACGAICharacter*>      CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class ACGAICharacter*              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class Aba_crossbowProjectile_00_C* CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::PrintBodyArrows(float InPrintTime, float PrintTime, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FStruct_arrowBody>& CallFunc_Map_Values_Values, TArray<class ACGAICharacter*>& CallFunc_Map_Keys_Keys, class ACGAICharacter* CallFunc_Array_Get_Item, const class FString& CallFunc_GetDisplayName_ReturnValue, class Aba_crossbowProjectile_00_C* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "PrintBodyArrows");

	Params::Aba_aa_crossbow_00_C_PrintBodyArrows_Params Parms{};

	Parms.InPrintTime = InPrintTime;
	Parms.PrintTime = PrintTime;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.UpdateBody
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACGAICharacter*              InBody                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class Ubac_Loot_Component_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_arrowBody           CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::UpdateBody(class ACGAICharacter* InBody, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class Ubac_Loot_Component_C* CallFunc_GetComponentByClass_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, const struct FStruct_arrowBody& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "UpdateBody");

	Params::Aba_aa_crossbow_00_C_UpdateBody_Params Parms{};

	Parms.InBody = InBody;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_ReturnValue = CallFunc_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.UpdateArrows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACGAICharacter*              InBody                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_crossbowProjectile_00_C* InArrow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_crossbowProjectile_00_C*>Arrows                                                           (Edit, BlueprintVisible, DisableEditOnTemplate)
// struct FStruct_arrowBody           FoundBodyArrow                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// class Aba_crossbowProjectile_00_C* Arrow                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              Body                                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Aba_crossbowProjectile_00_C*>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FStruct_arrowBody           K2Node_MakeStruct_struct_arrowBody                               (UObjectWrapper, HasGetValueTypeHash)
// struct FStruct_arrowBody           K2Node_MakeStruct_struct_arrowBody_1                             (HasGetValueTypeHash)
// TArray<class Aba_crossbowProjectile_00_C*>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct FStruct_arrowBody           CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_crossbow_00_C::UpdateArrows(class ACGAICharacter* InBody, class Aba_crossbowProjectile_00_C* InArrow, const TArray<class Aba_crossbowProjectile_00_C*>& Arrows, const struct FStruct_arrowBody& FoundBodyArrow, class Aba_crossbowProjectile_00_C* Arrow, class ACGAICharacter* Body, TArray<class Aba_crossbowProjectile_00_C*>& K2Node_MakeArray_Array, const struct FStruct_arrowBody& K2Node_MakeStruct_struct_arrowBody, const struct FStruct_arrowBody& K2Node_MakeStruct_struct_arrowBody_1, TArray<class Aba_crossbowProjectile_00_C*>& K2Node_MakeArray_Array_1, const struct FStruct_arrowBody& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "UpdateArrows");

	Params::Aba_aa_crossbow_00_C_UpdateArrows_Params Parms{};

	Parms.InBody = InBody;
	Parms.InArrow = InArrow;
	Parms.Arrows = Arrows;
	Parms.FoundBodyArrow = FoundBodyArrow;
	Parms.Arrow = Arrow;
	Parms.Body = Body;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_struct_arrowBody = K2Node_MakeStruct_struct_arrowBody;
	Parms.K2Node_MakeStruct_struct_arrowBody_1 = K2Node_MakeStruct_struct_arrowBody_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.GetDefaultMeshMaterials
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftObjectPtr<class UMaterialInterface>>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper)
// TArray<TSoftObjectPtr<class UMaterialInterface>>K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<TSoftObjectPtr<class UMaterialInterface>> Aba_aa_crossbow_00_C::GetDefaultMeshMaterials(TArray<TSoftObjectPtr<class UMaterialInterface>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "GetDefaultMeshMaterials");

	Params::Aba_aa_crossbow_00_C_GetDefaultMeshMaterials_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.ForwardRecoil__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::ForwardRecoil__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "ForwardRecoil__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.ForwardRecoil__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::ForwardRecoil__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "ForwardRecoil__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnNotifyEnd_F0E8714B41C77AEE3E66F3A364B05D0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnNotifyEnd_F0E8714B41C77AEE3E66F3A364B05D0C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnNotifyEnd_F0E8714B41C77AEE3E66F3A364B05D0C");

	Params::Aba_aa_crossbow_00_C_OnNotifyEnd_F0E8714B41C77AEE3E66F3A364B05D0C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnNotifyBegin_F0E8714B41C77AEE3E66F3A364B05D0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnNotifyBegin_F0E8714B41C77AEE3E66F3A364B05D0C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnNotifyBegin_F0E8714B41C77AEE3E66F3A364B05D0C");

	Params::Aba_aa_crossbow_00_C_OnNotifyBegin_F0E8714B41C77AEE3E66F3A364B05D0C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnInterrupted_F0E8714B41C77AEE3E66F3A364B05D0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnInterrupted_F0E8714B41C77AEE3E66F3A364B05D0C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnInterrupted_F0E8714B41C77AEE3E66F3A364B05D0C");

	Params::Aba_aa_crossbow_00_C_OnInterrupted_F0E8714B41C77AEE3E66F3A364B05D0C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnBlendOut_F0E8714B41C77AEE3E66F3A364B05D0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnBlendOut_F0E8714B41C77AEE3E66F3A364B05D0C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnBlendOut_F0E8714B41C77AEE3E66F3A364B05D0C");

	Params::Aba_aa_crossbow_00_C_OnBlendOut_F0E8714B41C77AEE3E66F3A364B05D0C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnCompleted_F0E8714B41C77AEE3E66F3A364B05D0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnCompleted_F0E8714B41C77AEE3E66F3A364B05D0C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnCompleted_F0E8714B41C77AEE3E66F3A364B05D0C");

	Params::Aba_aa_crossbow_00_C_OnCompleted_F0E8714B41C77AEE3E66F3A364B05D0C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnNotifyEnd_CF56D7244C289E4C6326A993A67AA6CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnNotifyEnd_CF56D7244C289E4C6326A993A67AA6CF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnNotifyEnd_CF56D7244C289E4C6326A993A67AA6CF");

	Params::Aba_aa_crossbow_00_C_OnNotifyEnd_CF56D7244C289E4C6326A993A67AA6CF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnNotifyBegin_CF56D7244C289E4C6326A993A67AA6CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnNotifyBegin_CF56D7244C289E4C6326A993A67AA6CF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnNotifyBegin_CF56D7244C289E4C6326A993A67AA6CF");

	Params::Aba_aa_crossbow_00_C_OnNotifyBegin_CF56D7244C289E4C6326A993A67AA6CF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnInterrupted_CF56D7244C289E4C6326A993A67AA6CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnInterrupted_CF56D7244C289E4C6326A993A67AA6CF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnInterrupted_CF56D7244C289E4C6326A993A67AA6CF");

	Params::Aba_aa_crossbow_00_C_OnInterrupted_CF56D7244C289E4C6326A993A67AA6CF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnBlendOut_CF56D7244C289E4C6326A993A67AA6CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnBlendOut_CF56D7244C289E4C6326A993A67AA6CF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnBlendOut_CF56D7244C289E4C6326A993A67AA6CF");

	Params::Aba_aa_crossbow_00_C_OnBlendOut_CF56D7244C289E4C6326A993A67AA6CF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnCompleted_CF56D7244C289E4C6326A993A67AA6CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnCompleted_CF56D7244C289E4C6326A993A67AA6CF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnCompleted_CF56D7244C289E4C6326A993A67AA6CF");

	Params::Aba_aa_crossbow_00_C_OnCompleted_CF56D7244C289E4C6326A993A67AA6CF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnNotifyEnd_049E73EA42B2CC249EAC54A245F0B4DB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnNotifyEnd_049E73EA42B2CC249EAC54A245F0B4DB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnNotifyEnd_049E73EA42B2CC249EAC54A245F0B4DB");

	Params::Aba_aa_crossbow_00_C_OnNotifyEnd_049E73EA42B2CC249EAC54A245F0B4DB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnNotifyBegin_049E73EA42B2CC249EAC54A245F0B4DB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnNotifyBegin_049E73EA42B2CC249EAC54A245F0B4DB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnNotifyBegin_049E73EA42B2CC249EAC54A245F0B4DB");

	Params::Aba_aa_crossbow_00_C_OnNotifyBegin_049E73EA42B2CC249EAC54A245F0B4DB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnInterrupted_049E73EA42B2CC249EAC54A245F0B4DB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnInterrupted_049E73EA42B2CC249EAC54A245F0B4DB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnInterrupted_049E73EA42B2CC249EAC54A245F0B4DB");

	Params::Aba_aa_crossbow_00_C_OnInterrupted_049E73EA42B2CC249EAC54A245F0B4DB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnBlendOut_049E73EA42B2CC249EAC54A245F0B4DB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnBlendOut_049E73EA42B2CC249EAC54A245F0B4DB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnBlendOut_049E73EA42B2CC249EAC54A245F0B4DB");

	Params::Aba_aa_crossbow_00_C_OnBlendOut_049E73EA42B2CC249EAC54A245F0B4DB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnCompleted_049E73EA42B2CC249EAC54A245F0B4DB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnCompleted_049E73EA42B2CC249EAC54A245F0B4DB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnCompleted_049E73EA42B2CC249EAC54A245F0B4DB");

	Params::Aba_aa_crossbow_00_C_OnCompleted_049E73EA42B2CC249EAC54A245F0B4DB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnReloadFailed
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::OnReloadFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnReloadFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnForceReloadFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInNoSwap                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_crossbow_00_C::OnForceReloadFinished(bool bInNoSwap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnForceReloadFinished");

	Params::Aba_aa_crossbow_00_C_OnForceReloadFinished_Params Parms{};

	Parms.bInNoSwap = bInNoSwap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.ShootOnce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::ShootOnce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "ShootOnce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnAim
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::OnAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnUnAim
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::OnUnAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnUnAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnReload
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::OnReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnEmptyAmmo
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::OnEmptyAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnEmptyAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.AlternativeActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::AlternativeActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "AlternativeActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnCancelRequest
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::OnCancelRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnCancelRequest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnLocalMelee
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::OnLocalMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnLocalMelee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.ActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::ActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "ActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.ActivationButtonReleased
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::ActivationButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "ActivationButtonReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.ForceInitMagazine
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::ForceInitMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "ForceInitMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.InvUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::InvUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "InvUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnHideShowAdditional
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EState                  OutTargetState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnHideShowAdditional(enum class EState OutTargetState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnHideShowAdditional");

	Params::Aba_aa_crossbow_00_C_OnHideShowAdditional_Params Parms{};

	Parms.OutTargetState = OutTargetState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnShellCollision
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        InEventName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InEmitterTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InParticleTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InLocation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InVelocity                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InDirection                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InNormal                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        InBoneName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           InPhysMat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnShellCollision(class FName InEventName, float InEmitterTime, int32 InParticleTime, const struct FVector& InLocation, const struct FVector& InVelocity, const struct FVector& InDirection, const struct FVector& InNormal, class FName InBoneName, class UPhysicalMaterial* InPhysMat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnShellCollision");

	Params::Aba_aa_crossbow_00_C_OnShellCollision_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.InEmitterTime = InEmitterTime;
	Parms.InParticleTime = InParticleTime;
	Parms.InLocation = InLocation;
	Parms.InVelocity = InVelocity;
	Parms.InDirection = InDirection;
	Parms.InNormal = InNormal;
	Parms.InBoneName = InBoneName;
	Parms.InPhysMat = InPhysMat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.CancelMelee
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::CancelMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "CancelMelee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnInventoryInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::OnInventoryInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnInventoryInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnMeleeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACGCharacter*                InHitCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               InActiveItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnMeleeDamage(class ACGCharacter* InHitCharacter, class ACGActiveItem* InActiveItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnMeleeDamage");

	Params::Aba_aa_crossbow_00_C_OnMeleeDamage_Params Parms{};

	Parms.InHitCharacter = InHitCharacter;
	Parms.InActiveItem = InActiveItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnUpdateAttachmentSkin
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        UpgradeID                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnUpdateAttachmentSkin(class FName UpgradeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnUpdateAttachmentSkin");

	Params::Aba_aa_crossbow_00_C_OnUpdateAttachmentSkin_Params Parms{};

	Parms.UpgradeID = UpgradeID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.UpdateFeatherTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::UpdateFeatherTint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "UpdateFeatherTint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnMovementStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class ACGMovementState>InNewMovementState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void Aba_aa_crossbow_00_C::OnMovementStateChanged(TSubclassOf<class ACGMovementState> InNewMovementState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnMovementStateChanged");

	Params::Aba_aa_crossbow_00_C_OnMovementStateChanged_Params Parms{};

	Parms.InNewMovementState = InNewMovementState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.OnBrokenWeaponUse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::OnBrokenWeaponUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "OnBrokenWeaponUse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.ExecuteUbergraph_ba_aa_crossbow_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_13                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_14                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_15                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_16                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_17                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_18                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_19                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_20                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_21                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_22                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_23                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInNoSwap                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCombinedAttachment_Recoil_OutCombinedRecoil          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EState                  K2Node_Event_OutTargetState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_InEventName                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InEmitterTime                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InParticleTime                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InLocation                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InVelocity                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InDirection                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InNormal                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_InBoneName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           K2Node_Event_InPhysMat                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbp_ch_igorfpp_01_C*        K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbp_crossbow_00_C*          K2Node_DynamicCast_AsAbp_Crossbow_00                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbp_crossbow_00_C*          K2Node_DynamicCast_AsAbp_Crossbow_00_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ComposeTransforms_ReturnValue                           (IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbp_crossbow_00_C*          K2Node_DynamicCast_AsAbp_Crossbow_00_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfValid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCombinedAttachment_Damage_OutCombinedDamage          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCombinedAttachment_Range_OutCombinedRange            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_ComposeTransforms_ReturnValue_1                         (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_crossbowProjectile_00_C* CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFovValue_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFovValue_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_arrowColours        K2Node_MakeStruct_struct_arrowColours                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGCharacter*                K2Node_CustomEvent_InHitCharacter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               K2Node_CustomEvent_InActiveItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_UpgradeID                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetWeaponSkinByType_OutSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponSkinInfo             CallFunc_K2_GetWeaponSkinByType_ReturnValue                      (None)
// TSubclassOf<class ACGMovementState>K2Node_Event_InNewMovementState                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_crossbow_00_C::ExecuteUbergraph_ba_aa_crossbow_00(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, int32 Temp_int_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable_1, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, int32 Temp_int_Variable_2, float Temp_float_Variable_8, float Temp_float_Variable_9, float Temp_float_Variable_10, float Temp_float_Variable_11, int32 Temp_int_Variable_3, float Temp_float_Variable_12, float Temp_float_Variable_13, float Temp_float_Variable_14, float Temp_float_Variable_15, int32 Temp_int_Variable_4, float Temp_float_Variable_16, float Temp_float_Variable_17, float Temp_float_Variable_18, float Temp_float_Variable_19, int32 Temp_int_Variable_5, float Temp_float_Variable_20, float Temp_float_Variable_21, float Temp_float_Variable_22, float Temp_float_Variable_23, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_EqualEqual_NameName_ReturnValue_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName Temp_name_Variable_2, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, int32 Temp_int_Variable_6, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, int32 Temp_int_Variable_7, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, int32 Temp_int_Variable_8, const struct FLinearColor& Temp_struct_Variable_12, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool K2Node_Event_bInNoSwap, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, int32 CallFunc_GetCombinedAttachment_Recoil_OutCombinedRecoil, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_5, int32 CallFunc_FTrunc_ReturnValue, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, float K2Node_Select_Default_3, float K2Node_Select_Default_4, float K2Node_Select_Default_5, enum class EState K2Node_Event_OutTargetState, bool K2Node_SwitchEnum_CmpSuccess, class FName K2Node_Event_InEventName, float K2Node_Event_InEmitterTime, int32 K2Node_Event_InParticleTime, const struct FVector& K2Node_Event_InLocation, const struct FVector& K2Node_Event_InVelocity, const struct FVector& K2Node_Event_InDirection, const struct FVector& K2Node_Event_InNormal, class FName K2Node_Event_InBoneName, class UPhysicalMaterial* K2Node_Event_InPhysMat, bool K2Node_SwitchEnum_CmpSuccess_1, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_6, class UAbp_ch_igorfpp_01_C* K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_7, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_8, class UAbp_crossbow_00_C* K2Node_DynamicCast_AsAbp_Crossbow_00, bool K2Node_DynamicCast_bSuccess_1, class UAbp_crossbow_00_C* K2Node_DynamicCast_AsAbp_Crossbow_00_1, bool K2Node_DynamicCast_bSuccess_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_9, class UAbp_crossbow_00_C* K2Node_DynamicCast_AsAbp_Crossbow_00_2, bool K2Node_DynamicCast_bSuccess_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19, bool CallFunc_CheckIfValid_ReturnValue, float CallFunc_GetCombinedAttachment_Damage_OutCombinedDamage, float CallFunc_GetCombinedAttachment_Range_OutCombinedRange, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class Aba_crossbowProjectile_00_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetFovValue_ReturnValue, float CallFunc_GetFovValue_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_10, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21, const struct FLinearColor& K2Node_Select_Default_6, const struct FLinearColor& K2Node_Select_Default_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22, const struct FLinearColor& K2Node_Select_Default_8, const struct FStruct_arrowColours& K2Node_MakeStruct_struct_arrowColours, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23, class ACGCharacter* K2Node_CustomEvent_InHitCharacter, class ACGActiveItem* K2Node_CustomEvent_InActiveItem, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class FName K2Node_Event_UpgradeID, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_5, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_K2_GetWeaponSkinByType_OutSuccess, const struct FWeaponSkinInfo& CallFunc_K2_GetWeaponSkinByType_ReturnValue, TSubclassOf<class ACGMovementState> K2Node_Event_InNewMovementState, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "ExecuteUbergraph_ba_aa_crossbow_00");

	Params::Aba_aa_crossbow_00_C_ExecuteUbergraph_ba_aa_crossbow_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_float_Variable_8 = Temp_float_Variable_8;
	Parms.Temp_float_Variable_9 = Temp_float_Variable_9;
	Parms.Temp_float_Variable_10 = Temp_float_Variable_10;
	Parms.Temp_float_Variable_11 = Temp_float_Variable_11;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_float_Variable_12 = Temp_float_Variable_12;
	Parms.Temp_float_Variable_13 = Temp_float_Variable_13;
	Parms.Temp_float_Variable_14 = Temp_float_Variable_14;
	Parms.Temp_float_Variable_15 = Temp_float_Variable_15;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_float_Variable_16 = Temp_float_Variable_16;
	Parms.Temp_float_Variable_17 = Temp_float_Variable_17;
	Parms.Temp_float_Variable_18 = Temp_float_Variable_18;
	Parms.Temp_float_Variable_19 = Temp_float_Variable_19;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_float_Variable_20 = Temp_float_Variable_20;
	Parms.Temp_float_Variable_21 = Temp_float_Variable_21;
	Parms.Temp_float_Variable_22 = Temp_float_Variable_22;
	Parms.Temp_float_Variable_23 = Temp_float_Variable_23;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_struct_Variable_16 = Temp_struct_Variable_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_Event_bInNoSwap = K2Node_Event_bInNoSwap;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetAnimInstance_ReturnValue_3 = CallFunc_GetAnimInstance_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_4 = CallFunc_GetAnimInstance_ReturnValue_4;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1 = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_GetCombinedAttachment_Recoil_OutCombinedRecoil = CallFunc_GetCombinedAttachment_Recoil_OutCombinedRecoil;
	Parms.CallFunc_GetAnimInstance_ReturnValue_5 = CallFunc_GetAnimInstance_ReturnValue_5;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2 = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Event_OutTargetState = K2Node_Event_OutTargetState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_InEventName = K2Node_Event_InEventName;
	Parms.K2Node_Event_InEmitterTime = K2Node_Event_InEmitterTime;
	Parms.K2Node_Event_InParticleTime = K2Node_Event_InParticleTime;
	Parms.K2Node_Event_InLocation = K2Node_Event_InLocation;
	Parms.K2Node_Event_InVelocity = K2Node_Event_InVelocity;
	Parms.K2Node_Event_InDirection = K2Node_Event_InDirection;
	Parms.K2Node_Event_InNormal = K2Node_Event_InNormal;
	Parms.K2Node_Event_InBoneName = K2Node_Event_InBoneName;
	Parms.K2Node_Event_InPhysMat = K2Node_Event_InPhysMat;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.CallFunc_GetAnimInstance_ReturnValue_6 = CallFunc_GetAnimInstance_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01 = K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue_7 = CallFunc_GetAnimInstance_ReturnValue_7;
	Parms.CallFunc_GetAnimInstance_ReturnValue_8 = CallFunc_GetAnimInstance_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsAbp_Crossbow_00 = K2Node_DynamicCast_AsAbp_Crossbow_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsAbp_Crossbow_00_1 = K2Node_DynamicCast_AsAbp_Crossbow_00_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_ComposeTransforms_ReturnValue = CallFunc_ComposeTransforms_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_9 = CallFunc_GetAnimInstance_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsAbp_Crossbow_00_2 = K2Node_DynamicCast_AsAbp_Crossbow_00_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19;
	Parms.CallFunc_CheckIfValid_ReturnValue = CallFunc_CheckIfValid_ReturnValue;
	Parms.CallFunc_GetCombinedAttachment_Damage_OutCombinedDamage = CallFunc_GetCombinedAttachment_Damage_OutCombinedDamage;
	Parms.CallFunc_GetCombinedAttachment_Range_OutCombinedRange = CallFunc_GetCombinedAttachment_Range_OutCombinedRange;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_ComposeTransforms_ReturnValue_1 = CallFunc_ComposeTransforms_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFovValue_ReturnValue = CallFunc_GetFovValue_ReturnValue;
	Parms.CallFunc_GetFovValue_ReturnValue_1 = CallFunc_GetFovValue_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20;
	Parms.CallFunc_GetAnimInstance_ReturnValue_10 = CallFunc_GetAnimInstance_ReturnValue_10;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3 = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.K2Node_MakeStruct_struct_arrowColours = K2Node_MakeStruct_struct_arrowColours;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23;
	Parms.K2Node_CustomEvent_InHitCharacter = K2Node_CustomEvent_InHitCharacter;
	Parms.K2Node_CustomEvent_InActiveItem = K2Node_CustomEvent_InActiveItem;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Event_UpgradeID = K2Node_Event_UpgradeID;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_K2_GetWeaponSkinByType_OutSuccess = CallFunc_K2_GetWeaponSkinByType_OutSuccess;
	Parms.CallFunc_K2_GetWeaponSkinByType_ReturnValue = CallFunc_K2_GetWeaponSkinByType_ReturnValue;
	Parms.K2Node_Event_InNewMovementState = K2Node_Event_InNewMovementState;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_crossbow_00.ba_aa_crossbow_00_C.ShootFinishedReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_crossbow_00_C::ShootFinishedReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_crossbow_00_C", "ShootFinishedReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


