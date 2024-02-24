#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RecipeElementBase.UMG_RecipeElementBase_C
// (None)

class UClass* UUMG_RecipeElementBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RecipeElementBase_C");

	return Clss;
}


// UMG_RecipeElementBase_C UMG_RecipeElementBase.Default__UMG_RecipeElementBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RecipeElementBase_C* UUMG_RecipeElementBase_C::GetDefaultObj()
{
	static class UUMG_RecipeElementBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RecipeElementBase_C*>(UUMG_RecipeElementBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.GetPlayerInventories
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UInventory*>          Array                                                            (Parm, OutParm, ContainsInstancedReference)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UUMG_RecipeElementBase_C::GetPlayerInventories(TArray<class UInventory*>* Array, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, TArray<class UInventory*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementBase_C", "GetPlayerInventories");

	Params::UUMG_RecipeElementBase_C_GetPlayerInventories_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.IsOutput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_RecipeElementBase_C::IsOutput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementBase_C", "IsOutput");

	Params::UUMG_RecipeElementBase_C_IsOutput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.IsResource
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUMG_RecipeElementBase_C::IsResource(bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementBase_C", "IsResource");

	Params::UUMG_RecipeElementBase_C_IsResource_Params Parms{};

	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.CurrentAmountUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_RecipeElementBase_C::CurrentAmountUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementBase_C", "CurrentAmountUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.SetCurrentAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentAmount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RecipeElementBase_C::SetCurrentAmount(int32 CurrentAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementBase_C", "SetCurrentAmount");

	Params::UUMG_RecipeElementBase_C_SetCurrentAmount_Params Parms{};

	Parms.CurrentAmount = CurrentAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.UpdateBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProcessorPreview       Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RecipeElementBase_C::UpdateBackgroundImage(class UTexture2D* Texture, enum class EProcessorPreview Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementBase_C", "UpdateBackgroundImage");

	Params::UUMG_RecipeElementBase_C_UpdateBackgroundImage_Params Parms{};

	Parms.Texture = Texture;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementBase.UMG_RecipeElementBase_C.UpdateStateRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProcessorPreview       NewState                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory*>          CallFunc_GetPlayerInventories_Array                              (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsOutput_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_RecipeElementTooltip_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOutput_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UInventory*>          CallFunc_GetPlayerInventories_Array_1                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProcessingComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsResource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetResourceRecipeValidility_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProcessingComponent*        CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CheckRecipeValidityItems_CurrentAmount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckRecipeValidityItems_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementBase_C::UpdateStateRecipe(enum class EProcessorPreview NewState, class UTexture2D* Texture, TArray<class UInventory*>& CallFunc_GetPlayerInventories_Array, bool CallFunc_IsOutput_ReturnValue, class UUMG_RecipeElementTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsOutput_ReturnValue_1, TArray<class UInventory*>& CallFunc_GetPlayerInventories_Array_1, int32 CallFunc_Multiply_IntInt_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UProcessingComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsResource_ReturnValue, int32 CallFunc_GetResourceRecipeValidility_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetTrait_Paths_1, class UProcessingComponent* CallFunc_GetTrait_ReturnValue_1, int32 CallFunc_CheckRecipeValidityItems_CurrentAmount, bool CallFunc_CheckRecipeValidityItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementBase_C", "UpdateStateRecipe");

	Params::UUMG_RecipeElementBase_C_UpdateStateRecipe_Params Parms{};

	Parms.NewState = NewState;
	Parms.Texture = Texture;
	Parms.CallFunc_GetPlayerInventories_Array = CallFunc_GetPlayerInventories_Array;
	Parms.CallFunc_IsOutput_ReturnValue = CallFunc_IsOutput_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsOutput_ReturnValue_1 = CallFunc_IsOutput_ReturnValue_1;
	Parms.CallFunc_GetPlayerInventories_Array_1 = CallFunc_GetPlayerInventories_Array_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsResource_ReturnValue = CallFunc_IsResource_ReturnValue;
	Parms.CallFunc_GetResourceRecipeValidility_ReturnValue = CallFunc_GetResourceRecipeValidility_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.CallFunc_CheckRecipeValidityItems_CurrentAmount = CallFunc_CheckRecipeValidityItems_CurrentAmount;
	Parms.CallFunc_CheckRecipeValidityItems_ReturnValue = CallFunc_CheckRecipeValidityItems_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


