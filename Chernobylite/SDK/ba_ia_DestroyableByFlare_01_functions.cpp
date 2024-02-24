#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C
// (Actor)

class UClass* Aba_ia_DestroyableByFlare_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_ia_DestroyableByFlare_01_C");

	return Clss;
}


// ba_ia_DestroyableByFlare_01_C ba_ia_DestroyableByFlare_01.Default__ba_ia_DestroyableByFlare_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_ia_DestroyableByFlare_01_C* Aba_ia_DestroyableByFlare_01_C::GetDefaultObj()
{
	static class Aba_ia_DestroyableByFlare_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_ia_DestroyableByFlare_01_C*>(Aba_ia_DestroyableByFlare_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.GetQuestMarkerActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Aba_QuestMarker_C*           AsBa_Quest_Marker                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_QuestMarker_C*           K2Node_DynamicCast_AsBa_Quest_Marker                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_DestroyableByFlare_01_C::GetQuestMarkerActor(class Aba_QuestMarker_C** AsBa_Quest_Marker, class Aba_QuestMarker_C* K2Node_DynamicCast_AsBa_Quest_Marker, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "GetQuestMarkerActor");

	Params::Aba_ia_DestroyableByFlare_01_C_GetQuestMarkerActor_Params Parms{};

	Parms.K2Node_DynamicCast_AsBa_Quest_Marker = K2Node_DynamicCast_AsBa_Quest_Marker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBa_Quest_Marker != nullptr)
		*AsBa_Quest_Marker = Parms.AsBa_Quest_Marker;

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.UpdateWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasFlare                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FlareCount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*WidgetObject                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ContextObjectUsage      ObjectInfo                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FSt_ContextObjectUsage      CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_DestroyableByFlare_01_C::UpdateWidget(bool HasFlare, float FlareCount, class UWid_col_ViewableObjectInteractivePoint_01_C* WidgetObject, const struct FSt_ContextObjectUsage& ObjectInfo, const struct FSt_ContextObjectUsage& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Count_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UTexture2D* K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "UpdateWidget");

	Params::Aba_ia_DestroyableByFlare_01_C_UpdateWidget_Params Parms{};

	Parms.HasFlare = HasFlare;
	Parms.FlareCount = FlareCount;
	Parms.WidgetObject = WidgetObject;
	Parms.ObjectInfo = ObjectInfo;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.CacheInitialLightSensitivity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULightComponent*             CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_DestroyableByFlare_01_C::CacheInitialLightSensitivity(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float Temp_float_Variable, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ULightComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "CacheInitialLightSensitivity");

	Params::Aba_ia_DestroyableByFlare_01_C_CacheInitialLightSensitivity_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.TickLightSensitivity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Multiplier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULightComponent*             CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_DestroyableByFlare_01_C::TickLightSensitivity(float Multiplier, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class ULightComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "TickLightSensitivity");

	Params::Aba_ia_DestroyableByFlare_01_C_TickLightSensitivity_Params Parms{};

	Parms.Multiplier = Multiplier;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.IsCrystalDestroyed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsDestroyed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_DestroyableByFlare_01_C::IsCrystalDestroyed(bool* IsDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "IsCrystalDestroyed");

	Params::Aba_ia_DestroyableByFlare_01_C_IsCrystalDestroyed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDestroyed != nullptr)
		*IsDestroyed = Parms.IsDestroyed;

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.DestroyActors
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABlockingVolume*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_DestroyableByFlare_01_C::DestroyActors(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class ABlockingVolume* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "DestroyActors");

	Params::Aba_ia_DestroyableByFlare_01_C_DestroyActors_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.InitHISMAActors
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                LocalTags                                                        (Edit, BlueprintVisible)
// TArray<class AActor*>              AllActors                                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHierarchicalInstancedStaticMeshComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_DestroyableByFlare_01_C::InitHISMAActors(const TArray<class FName>& LocalTags, const TArray<class AActor*>& AllActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UHierarchicalInstancedStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "InitHISMAActors");

	Params::Aba_ia_DestroyableByFlare_01_C_InitHISMAActors_Params Parms{};

	Parms.LocalTags = LocalTags;
	Parms.AllActors = AllActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.SetSaveState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDestroyed                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_DestroyableByFlare_01_C::SetSaveState(bool IsDestroyed, bool CallFunc_NotEqual_NameName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "SetSaveState");

	Params::Aba_ia_DestroyableByFlare_01_C_SetSaveState_Params Parms{};

	Parms.IsDestroyed = IsDestroyed;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.CanBeDestroyed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_DestroyableByFlare_01_C::CanBeDestroyed(bool* Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "CanBeDestroyed");

	Params::Aba_ia_DestroyableByFlare_01_C_CanBeDestroyed_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_DestroyableByFlare_01_C::UserConstructionScript(const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "UserConstructionScript");

	Params::Aba_ia_DestroyableByFlare_01_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.BeginDestruction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::BeginDestruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "BeginDestruction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.OnSaveFullyLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::OnSaveFullyLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "OnSaveFullyLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.HitByFlare
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_Flare_00_C*              Flare                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Aba_ia_DestroyableByFlare_01_C::HitByFlare(class Aba_Flare_00_C* Flare, const struct FHitResult& HitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "HitByFlare");

	Params::Aba_ia_DestroyableByFlare_01_C_HitByFlare_Params Parms{};

	Parms.Flare = Flare;
	Parms.HitInfo = HitInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.FlareIsNearby
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_Flare_00_C*              Flare                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_DestroyableByFlare_01_C::FlareIsNearby(class Aba_Flare_00_C* Flare)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "FlareIsNearby");

	Params::Aba_ia_DestroyableByFlare_01_C_FlareIsNearby_Params Parms{};

	Parms.Flare = Flare;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_DestroyableByFlare_01_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "OnInteractionPressedComponent");

	Params::Aba_ia_DestroyableByFlare_01_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.TryDestroyByInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::TryDestroyByInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "TryDestroyByInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.ChernobyliteCrystalsDisintegrate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeToDisappear                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseScaling                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseCollapse                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseOpacityDissolve                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ScaleBrightness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_DestroyableByFlare_01_C::ChernobyliteCrystalsDisintegrate(float TimeToDisappear, bool UseScaling, bool UseCollapse, bool UseOpacityDissolve, bool ScaleBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "ChernobyliteCrystalsDisintegrate");

	Params::Aba_ia_DestroyableByFlare_01_C_ChernobyliteCrystalsDisintegrate_Params Parms{};

	Parms.TimeToDisappear = TimeToDisappear;
	Parms.UseScaling = UseScaling;
	Parms.UseCollapse = UseCollapse;
	Parms.UseOpacityDissolve = UseOpacityDissolve;
	Parms.ScaleBrightness = ScaleBrightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.ChernobyliteCrystalsPowerOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reverse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_DestroyableByFlare_01_C::ChernobyliteCrystalsPowerOff(bool Reverse, float Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "ChernobyliteCrystalsPowerOff");

	Params::Aba_ia_DestroyableByFlare_01_C_ChernobyliteCrystalsPowerOff_Params Parms{};

	Parms.Reverse = Reverse;
	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.CreateChernobyliteCrystalsMDI
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Actor                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Aba_ia_DestroyableByFlare_01_C::CreateChernobyliteCrystalsMDI(TArray<class AActor*>& Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "CreateChernobyliteCrystalsMDI");

	Params::Aba_ia_DestroyableByFlare_01_C_CreateChernobyliteCrystalsMDI_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.DestructionAnimationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::DestructionAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "DestructionAnimationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.UnbindUpdateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::UnbindUpdateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "UnbindUpdateWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Aba_ia_DestroyableByFlare_01_C::BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Aba_ia_DestroyableByFlare_01_C_BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.BndEvt__SoundSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_DestroyableByFlare_01_C::BndEvt__SoundSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "BndEvt__SoundSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::Aba_ia_DestroyableByFlare_01_C_BndEvt__SoundSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.InitQuestMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::InitQuestMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "InitQuestMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.ResolveQuestMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::ResolveQuestMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "ResolveQuestMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.ActivateQuestMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::ActivateQuestMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "ActivateQuestMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.ExecuteUbergraph_ba_ia_DestroyableByFlare_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_Flare_00_C*              K2Node_CustomEvent_Flare_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_HitInfo                                       (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class Aba_Flare_00_C*              K2Node_CustomEvent_Flare                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeDestroyed_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeDestroyed_Result_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeDestroyed_Result_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeDestroyed_Result_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeToDisappear                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseScaling                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_UseCollapse                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_UseOpacityDissolve                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ScaleBrightness                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Reverse                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Speed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_CustomEvent_Actor                                         (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetDecalMaterial_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_DestroyableByFlare_01_C::ExecuteUbergraph_ba_ia_DestroyableByFlare_01(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class Aba_Flare_00_C* K2Node_CustomEvent_Flare_1, const struct FHitResult& K2Node_CustomEvent_HitInfo, class Aba_Flare_00_C* K2Node_CustomEvent_Flare, bool CallFunc_CanBeDestroyed_Result, bool CallFunc_CanBeDestroyed_Result_1, int32 Temp_int_Array_Index_Variable, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, bool CallFunc_CanBeDestroyed_Result_2, bool CallFunc_CanBeDestroyed_Result_3, int32 Temp_int_Array_Index_Variable_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, float CallFunc_Count_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Remove_ReturnValue, float K2Node_CustomEvent_TimeToDisappear, bool K2Node_CustomEvent_UseScaling, bool K2Node_CustomEvent_UseCollapse, bool K2Node_CustomEvent_UseOpacityDissolve, bool K2Node_CustomEvent_ScaleBrightness, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool K2Node_CustomEvent_Reverse, float K2Node_CustomEvent_Speed, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class AActor*>& K2Node_CustomEvent_Actor, class AActor* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_3, class UDecalComponent* CallFunc_GetComponentByClass_ReturnValue, class UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UHierarchicalInstancedStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_PostAkEvent_ReturnValue, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "ExecuteUbergraph_ba_ia_DestroyableByFlare_01");

	Params::Aba_ia_DestroyableByFlare_01_C_ExecuteUbergraph_ba_ia_DestroyableByFlare_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CustomEvent_Flare_1 = K2Node_CustomEvent_Flare_1;
	Parms.K2Node_CustomEvent_HitInfo = K2Node_CustomEvent_HitInfo;
	Parms.K2Node_CustomEvent_Flare = K2Node_CustomEvent_Flare;
	Parms.CallFunc_CanBeDestroyed_Result = CallFunc_CanBeDestroyed_Result;
	Parms.CallFunc_CanBeDestroyed_Result_1 = CallFunc_CanBeDestroyed_Result_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;
	Parms.CallFunc_CanBeDestroyed_Result_2 = CallFunc_CanBeDestroyed_Result_2;
	Parms.CallFunc_CanBeDestroyed_Result_3 = CallFunc_CanBeDestroyed_Result_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_1 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.K2Node_CustomEvent_TimeToDisappear = K2Node_CustomEvent_TimeToDisappear;
	Parms.K2Node_CustomEvent_UseScaling = K2Node_CustomEvent_UseScaling;
	Parms.K2Node_CustomEvent_UseCollapse = K2Node_CustomEvent_UseCollapse;
	Parms.K2Node_CustomEvent_UseOpacityDissolve = K2Node_CustomEvent_UseOpacityDissolve;
	Parms.K2Node_CustomEvent_ScaleBrightness = K2Node_CustomEvent_ScaleBrightness;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_CustomEvent_Reverse = K2Node_CustomEvent_Reverse;
	Parms.K2Node_CustomEvent_Speed = K2Node_CustomEvent_Speed;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetDecalMaterial_ReturnValue = CallFunc_GetDecalMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCh_Hero_00_1 = K2Node_DynamicCast_AsCh_Hero_00_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1 = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2 = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.OnCrystalDestroyAnimationStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_DestroyableByFlare_01_C::OnCrystalDestroyAnimationStarted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "OnCrystalDestroyAnimationStarted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C.OnCrystalFullyDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasFromSave                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_DestroyableByFlare_01_C::OnCrystalFullyDestroyed__DelegateSignature(bool WasFromSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_DestroyableByFlare_01_C", "OnCrystalFullyDestroyed__DelegateSignature");

	Params::Aba_ia_DestroyableByFlare_01_C_OnCrystalFullyDestroyed__DelegateSignature_Params Parms{};

	Parms.WasFromSave = WasFromSave;

	UObject::ProcessEvent(Func, &Parms);

}

}


