#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemDragImage.ItemDragImage_C
// (None)

class UClass* UItemDragImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemDragImage_C");

	return Clss;
}


// ItemDragImage_C ItemDragImage.Default__ItemDragImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemDragImage_C* UItemDragImage_C::GetDefaultObj()
{
	static class UItemDragImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemDragImage_C*>(UItemDragImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemDragImage.ItemDragImage_C.SetBossGlimpse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDragImage_C::SetBossGlimpse(int32 Local_Index, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FLinearColor& Temp_struct_Variable_4, int32 Temp_int_Variable, const struct FLinearColor& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDragImage_C", "SetBossGlimpse");

	Params::UItemDragImage_C_SetBossGlimpse_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDragImage.ItemDragImage_C.SetDraggedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UItemDragImage_C::SetDraggedItem(const struct FInventoryItem& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDragImage_C", "SetDraggedItem");

	Params::UItemDragImage_C_SetDraggedItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDragImage.ItemDragImage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemDragImage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDragImage_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemDragImage.ItemDragImage_C.ExecuteUbergraph_ItemDragImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              K2Node_CustomEvent_Item                                          (HasGetValueTypeHash)

void UItemDragImage_C::ExecuteUbergraph_ItemDragImage(int32 EntryPoint, const struct FInventoryItem& K2Node_CustomEvent_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDragImage_C", "ExecuteUbergraph_ItemDragImage");

	Params::UItemDragImage_C_ExecuteUbergraph_ItemDragImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


