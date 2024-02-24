#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterStateEffects.BP_CharacterStateEffects_C
// (Actor)

class UClass* ABP_CharacterStateEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterStateEffects_C");

	return Clss;
}


// BP_CharacterStateEffects_C BP_CharacterStateEffects.Default__BP_CharacterStateEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharacterStateEffects_C* ABP_CharacterStateEffects_C::GetDefaultObj()
{
	static class ABP_CharacterStateEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharacterStateEffects_C*>(ABP_CharacterStateEffects_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.InterpPoisonAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBlendableInterface>CallFunc_RemoveBlendable_InBlendableObject_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterStateEffects_C::InterpPoisonAmount(float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_1, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "InterpPoisonAmount");

	Params::ABP_CharacterStateEffects_C_InterpPoisonAmount_Params Parms{};

	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_RemoveBlendable_InBlendableObject_CastInput = CallFunc_RemoveBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.InterpFreezeAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_RemoveBlendable_InBlendableObject_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterStateEffects_C::InterpFreezeAmount(float DeltaTime, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "InterpFreezeAmount");

	Params::ABP_CharacterStateEffects_C_InterpFreezeAmount_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_RemoveBlendable_InBlendableObject_CastInput = CallFunc_RemoveBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.Timeline_AddDreamPP__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CharacterStateEffects_C::Timeline_AddDreamPP__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "Timeline_AddDreamPP__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.Timeline_AddDreamPP__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CharacterStateEffects_C::Timeline_AddDreamPP__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "Timeline_AddDreamPP__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.Timeline_RemoveDreamPP__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CharacterStateEffects_C::Timeline_RemoveDreamPP__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "Timeline_RemoveDreamPP__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.Timeline_RemoveDreamPP__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CharacterStateEffects_C::Timeline_RemoveDreamPP__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "Timeline_RemoveDreamPP__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CharacterStateEffects_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterStateEffects_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "ReceiveTick");

	Params::ABP_CharacterStateEffects_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.SetFreezeAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DesiredFreezeAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterStateEffects_C::SetFreezeAmount(float DesiredFreezeAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "SetFreezeAmount");

	Params::ABP_CharacterStateEffects_C_SetFreezeAmount_Params Parms{};

	Parms.DesiredFreezeAmount = DesiredFreezeAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.AddDreamPP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharacterStateEffects_C::AddDreamPP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "AddDreamPP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.RemoveDreamPP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharacterStateEffects_C::RemoveDreamPP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "RemoveDreamPP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.CheckForPoison
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharacterStateEffects_C::CheckForPoison()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "CheckForPoison");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.ExecuteUbergraph_BP_CharacterStateEffects
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DesiredFreezeAmount                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBlendableInterface>CallFunc_RemoveBlendable_InBlendableObject_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffObject_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObjectPoisonDPS_C*      K2Node_DynamicCast_AsBuff_Object_Poison_DPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CharacterStateEffects_C::ExecuteUbergraph_BP_CharacterStateEffects(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaSeconds, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_DesiredFreezeAmount, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class UBuffObject_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBuffObjectPoisonDPS_C* K2Node_DynamicCast_AsBuff_Object_Poison_DPS, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterStateEffects_C", "ExecuteUbergraph_BP_CharacterStateEffects");

	Params::ABP_CharacterStateEffects_C_ExecuteUbergraph_BP_CharacterStateEffects_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_DesiredFreezeAmount = K2Node_CustomEvent_DesiredFreezeAmount;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1 = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1;
	Parms.CallFunc_RemoveBlendable_InBlendableObject_CastInput = CallFunc_RemoveBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Object_Poison_DPS = K2Node_DynamicCast_AsBuff_Object_Poison_DPS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


