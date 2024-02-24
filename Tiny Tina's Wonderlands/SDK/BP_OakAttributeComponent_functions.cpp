#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OakAttributeComponent.BP_OakAttributeComponent_C
// (None)

class UClass* UBP_OakAttributeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OakAttributeComponent_C");

	return Clss;
}


// BP_OakAttributeComponent_C BP_OakAttributeComponent.Default__BP_OakAttributeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OakAttributeComponent_C* UBP_OakAttributeComponent_C::GetDefaultObj()
{
	static class UBP_OakAttributeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OakAttributeComponent_C*>(UBP_OakAttributeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ClearElementalAffinity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OakAttributeComponent_C::ClearElementalAffinity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakAttributeComponent_C", "ClearElementalAffinity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.InitElementAffinity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_OakAttributeComponent_C::InitElementAffinity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakAttributeComponent_C", "InitElementAffinity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.SetElementAffinity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakElementalType       Element                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ElementalAffinity  Affinity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ElementalAffinity  MyAffinity                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       MyElement                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxAttributeModifierHandle>MyNewAttributeEffects                                            (Edit, BlueprintVisible, ZeroConstructor)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ElementalAffinity  Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable13                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable14                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable15                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable16                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable17                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    Temp_object_Variable18                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_AttributeEffectSet_C*    K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGbxAttributeModifierHandle>K2Node_Select4_Default                                           (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_Array_Get_Item1                                         (None)
// TArray<struct FGbxAttributeModifierHandle>CallFunc_ApplyAttributeEffectSet_AppliedAttributeEffects         (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAttributeModifierHandle CallFunc_Array_Get_Item2                                         (None)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxAttributeModifierHandle>K2Node_Select5_Default                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OakAttributeComponent_C::SetElementAffinity(enum class EOakElementalType Element, enum class Enum_ElementalAffinity Affinity, enum class Enum_ElementalAffinity MyAffinity, enum class EOakElementalType MyElement, const TArray<struct FGbxAttributeModifierHandle>& MyNewAttributeEffects, class UDA_AttributeEffectSet_C* Temp_object_Variable, class UDA_AttributeEffectSet_C* Temp_object_Variable1, class UDA_AttributeEffectSet_C* Temp_object_Variable2, class UDA_AttributeEffectSet_C* Temp_object_Variable3, class UDA_AttributeEffectSet_C* Temp_object_Variable4, class UDA_AttributeEffectSet_C* Temp_object_Variable5, enum class EOakElementalType Temp_byte_Variable, class UDA_AttributeEffectSet_C* Temp_object_Variable6, class UDA_AttributeEffectSet_C* Temp_object_Variable7, class UDA_AttributeEffectSet_C* Temp_object_Variable8, class UDA_AttributeEffectSet_C* Temp_object_Variable9, class UDA_AttributeEffectSet_C* Temp_object_Variable10, class UDA_AttributeEffectSet_C* Temp_object_Variable11, enum class Enum_ElementalAffinity Temp_byte_Variable1, class UDA_AttributeEffectSet_C* Temp_object_Variable12, enum class EOakElementalType Temp_byte_Variable2, class UDA_AttributeEffectSet_C* Temp_object_Variable13, class UDA_AttributeEffectSet_C* Temp_object_Variable14, class UDA_AttributeEffectSet_C* Temp_object_Variable15, class UDA_AttributeEffectSet_C* Temp_object_Variable16, class UDA_AttributeEffectSet_C* Temp_object_Variable17, class UDA_AttributeEffectSet_C* Temp_object_Variable18, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable, enum class EOakElementalType Temp_byte_Variable3, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, const struct FGbxAttributeModifierHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EOakElementalType Temp_byte_Variable4, class UDA_AttributeEffectSet_C* K2Node_Select_Default, class UDA_AttributeEffectSet_C* K2Node_Select1_Default, class UDA_AttributeEffectSet_C* K2Node_Select2_Default, class UDA_AttributeEffectSet_C* K2Node_Select3_Default, bool CallFunc_IsValid_ReturnValue, TArray<struct FGbxAttributeModifierHandle>& K2Node_Select4_Default, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGbxAttributeModifierHandle& CallFunc_Array_Get_Item1, TArray<struct FGbxAttributeModifierHandle>& CallFunc_ApplyAttributeEffectSet_AppliedAttributeEffects, bool CallFunc_RemoveAttributeModifier_ReturnValue, const struct FGbxAttributeModifierHandle& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, enum class EOakElementalType Temp_byte_Variable5, TArray<struct FGbxAttributeModifierHandle>& K2Node_Select5_Default, int32 CallFunc_Array_Add_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakAttributeComponent_C", "SetElementAffinity");

	Params::UBP_OakAttributeComponent_C_SetElementAffinity_Params Parms{};

	Parms.Element = Element;
	Parms.Affinity = Affinity;
	Parms.MyAffinity = MyAffinity;
	Parms.MyElement = MyElement;
	Parms.MyNewAttributeEffects = MyNewAttributeEffects;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.Temp_object_Variable11 = Temp_object_Variable11;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_object_Variable13 = Temp_object_Variable13;
	Parms.Temp_object_Variable14 = Temp_object_Variable14;
	Parms.Temp_object_Variable15 = Temp_object_Variable15;
	Parms.Temp_object_Variable16 = Temp_object_Variable16;
	Parms.Temp_object_Variable17 = Temp_object_Variable17;
	Parms.Temp_object_Variable18 = Temp_object_Variable18;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.Temp_int_Loop_Counter_Variable2 = Temp_int_Loop_Counter_Variable2;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Array_Index_Variable2 = Temp_int_Array_Index_Variable2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_ApplyAttributeEffectSet_AppliedAttributeEffects = CallFunc_ApplyAttributeEffectSet_AppliedAttributeEffects;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue2 = CallFunc_Less_IntInt_ReturnValue2;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_OakAttributeComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakAttributeComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ExecuteUbergraph_BP_OakAttributeComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OakAttributeComponent_C::ExecuteUbergraph_BP_OakAttributeComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakAttributeComponent_C", "ExecuteUbergraph_BP_OakAttributeComponent");

	Params::UBP_OakAttributeComponent_C_ExecuteUbergraph_BP_OakAttributeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


