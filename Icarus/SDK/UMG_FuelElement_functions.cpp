#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FuelElement.UMG_FuelElement_C
// (None)

class UClass* UUMG_FuelElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FuelElement_C");

	return Clss;
}


// UMG_FuelElement_C UMG_FuelElement.Default__UMG_FuelElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FuelElement_C* UUMG_FuelElement_C::GetDefaultObj()
{
	static class UUMG_FuelElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FuelElement_C*>(UUMG_FuelElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FuelElement.UMG_FuelElement_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProcessorPreview       Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RecipeElementTooltip_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FuelElement_C::UpdateState(enum class EProcessorPreview Selected, class UTexture2D* Texture, class UUMG_RecipeElementTooltip_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FuelElement_C", "UpdateState");

	Params::UUMG_FuelElement_C_UpdateState_Params Parms{};

	Parms.Selected = Selected;
	Parms.Texture = Texture;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FuelElement.UMG_FuelElement_C.Intialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// enum class EIcarusResourceType     NewResourceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable_1                            (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_BasicTooltip_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FuelElement_C::Intialise(const struct FItemData& NewItem, enum class EIcarusResourceType NewResourceType, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemableData& CallFunc_GetItemableStruct_Itemable_1, enum class EValid CallFunc_GetItemableStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UUMG_BasicTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FuelElement_C", "Intialise");

	Params::UUMG_FuelElement_C_Intialise_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.NewResourceType = NewResourceType;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetItemableStruct_Itemable_1 = CallFunc_GetItemableStruct_Itemable_1;
	Parms.CallFunc_GetItemableStruct_Paths_1 = CallFunc_GetItemableStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FuelElement.UMG_FuelElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FuelElement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FuelElement_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FuelElement.UMG_FuelElement_C.ExecuteUbergraph_UMG_FuelElement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FuelElement_C::ExecuteUbergraph_UMG_FuelElement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FuelElement_C", "ExecuteUbergraph_UMG_FuelElement");

	Params::UUMG_FuelElement_C_ExecuteUbergraph_UMG_FuelElement_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FuelElement.UMG_FuelElement_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_RecipeInput_C*          SelectedRecipe                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FuelElement_C::Selected__DelegateSignature(class UUMG_RecipeInput_C* SelectedRecipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FuelElement_C", "Selected__DelegateSignature");

	Params::UUMG_FuelElement_C_Selected__DelegateSignature_Params Parms{};

	Parms.SelectedRecipe = SelectedRecipe;

	UObject::ProcessEvent(Func, &Parms);

}

}


