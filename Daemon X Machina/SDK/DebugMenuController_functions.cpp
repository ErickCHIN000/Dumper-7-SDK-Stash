#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DebugMenuController.DebugMenuController_C
// (Actor)

class UClass* ADebugMenuController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DebugMenuController_C");

	return Clss;
}


// DebugMenuController_C DebugMenuController.Default__DebugMenuController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADebugMenuController_C* ADebugMenuController_C::GetDefaultObj()
{
	static class ADebugMenuController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADebugMenuController_C*>(ADebugMenuController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DebugMenuController.DebugMenuController_C.GetCurrentMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDebugMenuListBox_C*         NewParam                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugMenuListBox_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::GetCurrentMenu(class UDebugMenuListBox_C** NewParam, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UDebugMenuListBox_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "GetCurrentMenu");

	Params::ADebugMenuController_C_GetCurrentMenu_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function DebugMenuController.DebugMenuController_C.CreateFolderByDataTable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTTLDebugMenuFolder         NewFolder                                                        (Parm, OutParm)
// TArray<int32>                      LinkTo                                                           (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_NamesToStrings_Strings                                  (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLDebugMenuFolder         K2Node_MakeStruct_TTLDebugMenuFolder                             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::CreateFolderByDataTable(class UDataTable* DataTable, const class FString& Name, struct FTTLDebugMenuFolder* NewFolder, const TArray<int32>& LinkTo, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_NamesToStrings_Strings, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FTTLDebugMenuFolder& K2Node_MakeStruct_TTLDebugMenuFolder, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "CreateFolderByDataTable");

	Params::ADebugMenuController_C_CreateFolderByDataTable_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.Name = Name;
	Parms.LinkTo = LinkTo;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_NamesToStrings_Strings = CallFunc_NamesToStrings_Strings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_TTLDebugMenuFolder = K2Node_MakeStruct_TTLDebugMenuFolder;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewFolder != nullptr)
		*NewFolder = std::move(Parms.NewFolder);

}


// Function DebugMenuController.DebugMenuController_C.SelectPageDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADebugMenuController_C::SelectPageDown(class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "SelectPageDown");

	Params::ADebugMenuController_C_SelectPageDown_Params Parms{};

	Parms.CallFunc_GetCurrentMenu_NewParam = CallFunc_GetCurrentMenu_NewParam;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.SelectPageUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADebugMenuController_C::SelectPageUp(class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "SelectPageUp");

	Params::ADebugMenuController_C_SelectPageUp_Params Parms{};

	Parms.CallFunc_GetCurrentMenu_NewParam = CallFunc_GetCurrentMenu_NewParam;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.SelectDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RepeatCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADebugMenuController_C::SelectDown(int32 RepeatCount, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "SelectDown");

	Params::ADebugMenuController_C_SelectDown_Params Parms{};

	Parms.RepeatCount = RepeatCount;
	Parms.CallFunc_GetCurrentMenu_NewParam = CallFunc_GetCurrentMenu_NewParam;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.SelectUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RepeatCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADebugMenuController_C::SelectUp(int32 RepeatCount, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "SelectUp");

	Params::ADebugMenuController_C_SelectUp_Params Parms{};

	Parms.RepeatCount = RepeatCount;
	Parms.CallFunc_GetCurrentMenu_NewParam = CallFunc_GetCurrentMenu_NewParam;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADebugMenuController_C::CloseMenu(class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "CloseMenu");

	Params::ADebugMenuController_C_CloseMenu_Params Parms{};

	Parms.CallFunc_GetCurrentMenu_NewParam = CallFunc_GetCurrentMenu_NewParam;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.OpenMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLDebugMenuFolder         Folder                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDebugMenuListBox_C*         Menu                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugMenuListBox_C*         CallFunc_AddMenu_Menu                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::OpenMenu(const struct FTTLDebugMenuFolder& Folder, class UDebugMenuListBox_C** Menu, class UDebugMenuListBox_C* CallFunc_AddMenu_Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "OpenMenu");

	Params::ADebugMenuController_C_OpenMenu_Params Parms{};

	Parms.Folder = Folder;
	Parms.CallFunc_AddMenu_Menu = CallFunc_AddMenu_Menu;

	UObject::ProcessEvent(Func, &Parms);

	if (Menu != nullptr)
		*Menu = Parms.Menu;

}


// Function DebugMenuController.DebugMenuController_C.AddMenuByDataTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ZeroConstructor, ReferenceParm)
// class UDebugMenuListBox_C*         CallFunc_AddMenu_Menu                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_NamesToStrings_Strings                                  (ZeroConstructor, ReferenceParm)

void ADebugMenuController_C::AddMenuByDataTable(class UDataTable* DataTable, int32 Index, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class UDebugMenuListBox_C* CallFunc_AddMenu_Menu, TArray<class FString>& CallFunc_NamesToStrings_Strings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "AddMenuByDataTable");

	Params::ADebugMenuController_C_AddMenuByDataTable_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.Index = Index;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_AddMenu_Menu = CallFunc_AddMenu_Menu;
	Parms.CallFunc_NamesToStrings_Strings = CallFunc_NamesToStrings_Strings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.NamesToStrings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Names                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FString>              Strings                                                          (Parm, OutParm, ZeroConstructor)
// TArray<class FString>              Values                                                           (Edit, BlueprintVisible, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::NamesToStrings(TArray<class FName>& Names, TArray<class FString>* Strings, const TArray<class FString>& Values, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "NamesToStrings");

	Params::ADebugMenuController_C_NamesToStrings_Params Parms{};

	Parms.Names = Names;
	Parms.Values = Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Strings != nullptr)
		*Strings = std::move(Parms.Strings);

}


// Function DebugMenuController.DebugMenuController_C.AddMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLDebugMenuFolder         Folder                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugMenuListBox_C*         Menu                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugMenuListBox_C*         NewWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugMenuListBox_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDebugMenuListBox_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::AddMenu(const struct FTTLDebugMenuFolder& Folder, int32 Index, class UDebugMenuListBox_C** Menu, class UDebugMenuListBox_C* NewWidget, class UDebugMenuListBox_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UDebugMenuListBox_C* CallFunc_Array_Get_Item, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, int32 CallFunc_Subtract_IntInt_ReturnValue2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_IntFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "AddMenu");

	Params::ADebugMenuController_C_AddMenu_Params Parms{};

	Parms.Folder = Folder;
	Parms.Index = Index;
	Parms.NewWidget = NewWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_LocalToViewport_PixelPosition = CallFunc_LocalToViewport_PixelPosition;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue1 = CallFunc_Multiply_IntFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Menu != nullptr)
		*Menu = Parms.Menu;

}


// Function DebugMenuController.DebugMenuController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADebugMenuController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Enter_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Enter_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Enter_K2Node_InputKeyEvent_15");

	Params::ADebugMenuController_C_InpActEvt_Enter_K2Node_InputKeyEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_BackSpace_K2Node_InputKeyEvent_14");

	Params::ADebugMenuController_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Up_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Up_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Up_K2Node_InputKeyEvent_13");

	Params::ADebugMenuController_C_InpActEvt_Up_K2Node_InputKeyEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Up_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Up_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Up_K2Node_InputKeyEvent_12");

	Params::ADebugMenuController_C_InpActEvt_Up_K2Node_InputKeyEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Down_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Down_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Down_K2Node_InputKeyEvent_11");

	Params::ADebugMenuController_C_InpActEvt_Down_K2Node_InputKeyEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Down_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Down_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Down_K2Node_InputKeyEvent_10");

	Params::ADebugMenuController_C_InpActEvt_Down_K2Node_InputKeyEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9");

	Params::ADebugMenuController_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8");

	Params::ADebugMenuController_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_7");

	Params::ADebugMenuController_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6");

	Params::ADebugMenuController_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5");

	Params::ADebugMenuController_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4");

	Params::ADebugMenuController_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Left_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Left_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Left_K2Node_InputKeyEvent_3");

	Params::ADebugMenuController_C_InpActEvt_Left_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2");

	Params::ADebugMenuController_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Right_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Right_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Right_K2Node_InputKeyEvent_1");

	Params::ADebugMenuController_C_InpActEvt_Right_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADebugMenuController_C::InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0");

	Params::ADebugMenuController_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADebugMenuController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DebugMenuController.DebugMenuController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "ReceiveEndPlay");

	Params::ADebugMenuController_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.OnMenuUpRepeat
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RepeatCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::OnMenuUpRepeat(int32 RepeatCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "OnMenuUpRepeat");

	Params::ADebugMenuController_C_OnMenuUpRepeat_Params Parms{};

	Parms.RepeatCount = RepeatCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.OnMenuDownRepeat
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RepeatCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::OnMenuDownRepeat(int32 RepeatCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "OnMenuDownRepeat");

	Params::ADebugMenuController_C_OnMenuDownRepeat_Params Parms{};

	Parms.RepeatCount = RepeatCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.ExecuteUbergraph_DebugMenuController
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key5                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key4                                        (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key3                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key2                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key1                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key6                                        (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key7                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key8                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key9                                        (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable1                                            (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key10                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key11                                       (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable2                                            (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key12                                       (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable3                                            (HasGetValueTypeHash)
// class UDebugMenuListBox_C*         CallFunc_OpenMenu_Menu                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDebugMenuListBox_C*         CallFunc_OpenMenu_Menu1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDebugMenuListBox_C*         CallFunc_GetCurrentMenu_NewParam4                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RepeatCount1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugMenuListBox_C*         CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RepeatCount                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key13                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key14                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key15                                       (HasGetValueTypeHash)

void ADebugMenuController_C::ExecuteUbergraph_DebugMenuController(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key5, const struct FKey& K2Node_InputKeyEvent_Key4, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key3, const struct FKey& K2Node_InputKeyEvent_Key2, const struct FKey& K2Node_InputKeyEvent_Key1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key6, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputKeyEvent_Key7, const struct FKey& K2Node_InputKeyEvent_Key8, const struct FKey& K2Node_InputKeyEvent_Key9, const struct FKey& Temp_struct_Variable1, const struct FKey& K2Node_InputKeyEvent_Key10, const struct FKey& K2Node_InputKeyEvent_Key11, const struct FKey& Temp_struct_Variable2, const struct FKey& K2Node_InputKeyEvent_Key12, const struct FKey& Temp_struct_Variable3, class UDebugMenuListBox_C* CallFunc_OpenMenu_Menu, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam1, int32 CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue1, class UDebugMenuListBox_C* CallFunc_OpenMenu_Menu1, bool CallFunc_Greater_IntInt_ReturnValue, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam2, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam3, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class UDebugMenuListBox_C* CallFunc_GetCurrentMenu_NewParam4, enum class EEndPlayReason K2Node_Event_EndPlayReason, int32 K2Node_Event_RepeatCount1, class UDebugMenuListBox_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, int32 K2Node_Event_RepeatCount, bool CallFunc_Less_IntInt_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key13, const struct FKey& K2Node_InputKeyEvent_Key14, const struct FKey& K2Node_InputKeyEvent_Key15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "ExecuteUbergraph_DebugMenuController");

	Params::ADebugMenuController_C_ExecuteUbergraph_DebugMenuController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputKeyEvent_Key5 = K2Node_InputKeyEvent_Key5;
	Parms.K2Node_InputKeyEvent_Key4 = K2Node_InputKeyEvent_Key4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputKeyEvent_Key3 = K2Node_InputKeyEvent_Key3;
	Parms.K2Node_InputKeyEvent_Key2 = K2Node_InputKeyEvent_Key2;
	Parms.K2Node_InputKeyEvent_Key1 = K2Node_InputKeyEvent_Key1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_InputKeyEvent_Key6 = K2Node_InputKeyEvent_Key6;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_InputKeyEvent_Key7 = K2Node_InputKeyEvent_Key7;
	Parms.K2Node_InputKeyEvent_Key8 = K2Node_InputKeyEvent_Key8;
	Parms.K2Node_InputKeyEvent_Key9 = K2Node_InputKeyEvent_Key9;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_InputKeyEvent_Key10 = K2Node_InputKeyEvent_Key10;
	Parms.K2Node_InputKeyEvent_Key11 = K2Node_InputKeyEvent_Key11;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.K2Node_InputKeyEvent_Key12 = K2Node_InputKeyEvent_Key12;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_OpenMenu_Menu = CallFunc_OpenMenu_Menu;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentMenu_NewParam = CallFunc_GetCurrentMenu_NewParam;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentMenu_NewParam1 = CallFunc_GetCurrentMenu_NewParam1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_OpenMenu_Menu1 = CallFunc_OpenMenu_Menu1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentMenu_NewParam2 = CallFunc_GetCurrentMenu_NewParam2;
	Parms.CallFunc_GetCurrentMenu_NewParam3 = CallFunc_GetCurrentMenu_NewParam3;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_GetCurrentMenu_NewParam4 = CallFunc_GetCurrentMenu_NewParam4;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Event_RepeatCount1 = K2Node_Event_RepeatCount1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.K2Node_Event_RepeatCount = K2Node_Event_RepeatCount;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key13 = K2Node_InputKeyEvent_Key13;
	Parms.K2Node_InputKeyEvent_Key14 = K2Node_InputKeyEvent_Key14;
	Parms.K2Node_InputKeyEvent_Key15 = K2Node_InputKeyEvent_Key15;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.OnMenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugMenuListBox_C*         CurrentMenu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::OnMenuClosed__DelegateSignature(class UDebugMenuListBox_C* CurrentMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "OnMenuClosed__DelegateSignature");

	Params::ADebugMenuController_C_OnMenuClosed__DelegateSignature_Params Parms{};

	Parms.CurrentMenu = CurrentMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DebugMenuController.DebugMenuController_C.OnMenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugMenuListBox_C*         Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADebugMenuController_C::OnMenuOpened__DelegateSignature(class UDebugMenuListBox_C* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugMenuController_C", "OnMenuOpened__DelegateSignature");

	Params::ADebugMenuController_C_OnMenuOpened__DelegateSignature_Params Parms{};

	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}

}


