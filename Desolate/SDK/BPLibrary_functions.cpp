#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPLibrary.BPLibrary_C
// (None)

class UClass* UBPLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPLibrary_C");

	return Clss;
}


// BPLibrary_C BPLibrary.Default__BPLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPLibrary_C* UBPLibrary_C::GetDefaultObj()
{
	static class UBPLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPLibrary_C*>(UBPLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPLibrary.BPLibrary_C.CalcResistsTemp
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Bool                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBPLibrary_C::CalcResistsTemp(float Stat, bool Bool, class UObject* __WorldContext, class FText* Result, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, float Temp_float_Variable_2, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default_1, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "CalcResistsTemp");

	Params::UBPLibrary_C_CalcResistsTemp_Params Parms{};

	Parms.Stat = Stat;
	Parms.Bool = Bool;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPLibrary.BPLibrary_C.GetStatByEnumLegacy
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPerkType               Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// enum class EPerkType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        Temp_text_Variable_17                                            (None)
// class FText                        Temp_text_Variable_18                                            (None)
// class FText                        Temp_text_Variable_19                                            (None)
// class FText                        Temp_text_Variable_20                                            (None)
// class FText                        Temp_text_Variable_21                                            (None)
// class FText                        Temp_text_Variable_22                                            (None)
// class FText                        Temp_text_Variable_23                                            (None)
// class FText                        Temp_text_Variable_24                                            (None)
// class FText                        Temp_text_Variable_25                                            (None)
// class FText                        Temp_text_Variable_26                                            (None)
// class FText                        Temp_text_Variable_27                                            (None)
// class FText                        Temp_text_Variable_28                                            (None)
// class FText                        Temp_text_Variable_29                                            (None)
// class FText                        Temp_text_Variable_30                                            (None)
// class FText                        Temp_text_Variable_31                                            (None)
// class FText                        Temp_text_Variable_32                                            (None)
// class FText                        Temp_text_Variable_33                                            (None)
// class FText                        Temp_text_Variable_34                                            (None)
// class FText                        Temp_text_Variable_35                                            (None)
// class FText                        Temp_text_Variable_36                                            (None)
// class FText                        Temp_text_Variable_37                                            (None)
// class FText                        Temp_text_Variable_38                                            (None)
// class FText                        Temp_text_Variable_39                                            (None)
// class FText                        Temp_text_Variable_40                                            (None)
// class FText                        Temp_text_Variable_41                                            (None)
// class FText                        Temp_text_Variable_42                                            (None)
// class FText                        Temp_text_Variable_43                                            (None)
// class FText                        Temp_text_Variable_44                                            (None)
// class FText                        Temp_text_Variable_45                                            (None)
// class FText                        Temp_text_Variable_46                                            (None)
// class FText                        Temp_text_Variable_47                                            (None)
// class FText                        Temp_text_Variable_48                                            (None)
// class FText                        Temp_text_Variable_49                                            (None)
// class FText                        Temp_text_Variable_50                                            (None)
// class FText                        Temp_text_Variable_51                                            (None)
// class FText                        Temp_text_Variable_52                                            (None)
// class FText                        Temp_text_Variable_53                                            (None)
// class FText                        Temp_text_Variable_54                                            (None)
// class FText                        Temp_text_Variable_55                                            (None)
// class FText                        Temp_text_Variable_56                                            (None)
// class FText                        Temp_text_Variable_57                                            (None)
// class FText                        Temp_text_Variable_58                                            (None)
// class FText                        Temp_text_Variable_59                                            (None)
// class FText                        Temp_text_Variable_60                                            (None)
// class FText                        Temp_text_Variable_61                                            (None)
// class FText                        Temp_text_Variable_62                                            (None)
// class FText                        Temp_text_Variable_63                                            (None)
// class FText                        Temp_text_Variable_64                                            (None)
// class FText                        Temp_text_Variable_65                                            (None)
// class FText                        Temp_text_Variable_66                                            (None)
// class FText                        Temp_text_Variable_67                                            (None)
// class FText                        Temp_text_Variable_68                                            (None)
// class FText                        Temp_text_Variable_69                                            (None)
// class FText                        Temp_text_Variable_70                                            (None)
// class FText                        Temp_text_Variable_71                                            (None)
// class FText                        Temp_text_Variable_72                                            (None)
// class FText                        Temp_text_Variable_73                                            (None)
// class FText                        Temp_text_Variable_74                                            (None)
// class FText                        Temp_text_Variable_75                                            (None)
// class FText                        Temp_text_Variable_76                                            (None)
// class FText                        Temp_text_Variable_77                                            (None)
// class FText                        Temp_text_Variable_78                                            (None)
// class FText                        Temp_text_Variable_79                                            (None)
// class FText                        Temp_text_Variable_80                                            (None)
// class FText                        Temp_text_Variable_81                                            (None)
// class FText                        Temp_text_Variable_82                                            (None)
// class FText                        Temp_text_Variable_83                                            (None)
// class FText                        Temp_text_Variable_84                                            (None)
// class FText                        Temp_text_Variable_85                                            (None)
// class FText                        Temp_text_Variable_86                                            (None)
// class FText                        Temp_text_Variable_87                                            (None)
// class FText                        Temp_text_Variable_88                                            (None)
// class FText                        Temp_text_Variable_89                                            (None)
// class FText                        Temp_text_Variable_90                                            (None)
// class FText                        Temp_text_Variable_91                                            (None)
// class FText                        Temp_text_Variable_92                                            (None)
// class FText                        Temp_text_Variable_93                                            (None)
// class FText                        Temp_text_Variable_94                                            (None)
// class FText                        Temp_text_Variable_95                                            (None)
// class FText                        Temp_text_Variable_96                                            (None)
// class FText                        Temp_text_Variable_97                                            (None)
// class FText                        Temp_text_Variable_98                                            (None)
// class FText                        Temp_text_Variable_99                                            (None)
// class FText                        Temp_text_Variable_100                                           (None)
// class FText                        Temp_text_Variable_101                                           (None)
// class FText                        Temp_text_Variable_102                                           (None)
// class FText                        Temp_text_Variable_103                                           (None)
// class FText                        Temp_text_Variable_104                                           (None)
// class FText                        Temp_text_Variable_105                                           (None)
// class FText                        Temp_text_Variable_106                                           (None)
// class FText                        Temp_text_Variable_107                                           (None)
// class FText                        Temp_text_Variable_108                                           (None)
// class FText                        Temp_text_Variable_109                                           (None)
// class FText                        Temp_text_Variable_110                                           (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBPLibrary_C::GetStatByEnumLegacy(enum class EPerkType Enum, class UObject* __WorldContext, class FText* Text, enum class EPerkType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, class FText Temp_text_Variable_40, class FText Temp_text_Variable_41, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, class FText Temp_text_Variable_44, class FText Temp_text_Variable_45, class FText Temp_text_Variable_46, class FText Temp_text_Variable_47, class FText Temp_text_Variable_48, class FText Temp_text_Variable_49, class FText Temp_text_Variable_50, class FText Temp_text_Variable_51, class FText Temp_text_Variable_52, class FText Temp_text_Variable_53, class FText Temp_text_Variable_54, class FText Temp_text_Variable_55, class FText Temp_text_Variable_56, class FText Temp_text_Variable_57, class FText Temp_text_Variable_58, class FText Temp_text_Variable_59, class FText Temp_text_Variable_60, class FText Temp_text_Variable_61, class FText Temp_text_Variable_62, class FText Temp_text_Variable_63, class FText Temp_text_Variable_64, class FText Temp_text_Variable_65, class FText Temp_text_Variable_66, class FText Temp_text_Variable_67, class FText Temp_text_Variable_68, class FText Temp_text_Variable_69, class FText Temp_text_Variable_70, class FText Temp_text_Variable_71, class FText Temp_text_Variable_72, class FText Temp_text_Variable_73, class FText Temp_text_Variable_74, class FText Temp_text_Variable_75, class FText Temp_text_Variable_76, class FText Temp_text_Variable_77, class FText Temp_text_Variable_78, class FText Temp_text_Variable_79, class FText Temp_text_Variable_80, class FText Temp_text_Variable_81, class FText Temp_text_Variable_82, class FText Temp_text_Variable_83, class FText Temp_text_Variable_84, class FText Temp_text_Variable_85, class FText Temp_text_Variable_86, class FText Temp_text_Variable_87, class FText Temp_text_Variable_88, class FText Temp_text_Variable_89, class FText Temp_text_Variable_90, class FText Temp_text_Variable_91, class FText Temp_text_Variable_92, class FText Temp_text_Variable_93, class FText Temp_text_Variable_94, class FText Temp_text_Variable_95, class FText Temp_text_Variable_96, class FText Temp_text_Variable_97, class FText Temp_text_Variable_98, class FText Temp_text_Variable_99, class FText Temp_text_Variable_100, class FText Temp_text_Variable_101, class FText Temp_text_Variable_102, class FText Temp_text_Variable_103, class FText Temp_text_Variable_104, class FText Temp_text_Variable_105, class FText Temp_text_Variable_106, class FText Temp_text_Variable_107, class FText Temp_text_Variable_108, class FText Temp_text_Variable_109, class FText Temp_text_Variable_110, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "GetStatByEnumLegacy");

	Params::UBPLibrary_C_GetStatByEnumLegacy_Params Parms{};

	Parms.Enum = Enum;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.Temp_text_Variable_27 = Temp_text_Variable_27;
	Parms.Temp_text_Variable_28 = Temp_text_Variable_28;
	Parms.Temp_text_Variable_29 = Temp_text_Variable_29;
	Parms.Temp_text_Variable_30 = Temp_text_Variable_30;
	Parms.Temp_text_Variable_31 = Temp_text_Variable_31;
	Parms.Temp_text_Variable_32 = Temp_text_Variable_32;
	Parms.Temp_text_Variable_33 = Temp_text_Variable_33;
	Parms.Temp_text_Variable_34 = Temp_text_Variable_34;
	Parms.Temp_text_Variable_35 = Temp_text_Variable_35;
	Parms.Temp_text_Variable_36 = Temp_text_Variable_36;
	Parms.Temp_text_Variable_37 = Temp_text_Variable_37;
	Parms.Temp_text_Variable_38 = Temp_text_Variable_38;
	Parms.Temp_text_Variable_39 = Temp_text_Variable_39;
	Parms.Temp_text_Variable_40 = Temp_text_Variable_40;
	Parms.Temp_text_Variable_41 = Temp_text_Variable_41;
	Parms.Temp_text_Variable_42 = Temp_text_Variable_42;
	Parms.Temp_text_Variable_43 = Temp_text_Variable_43;
	Parms.Temp_text_Variable_44 = Temp_text_Variable_44;
	Parms.Temp_text_Variable_45 = Temp_text_Variable_45;
	Parms.Temp_text_Variable_46 = Temp_text_Variable_46;
	Parms.Temp_text_Variable_47 = Temp_text_Variable_47;
	Parms.Temp_text_Variable_48 = Temp_text_Variable_48;
	Parms.Temp_text_Variable_49 = Temp_text_Variable_49;
	Parms.Temp_text_Variable_50 = Temp_text_Variable_50;
	Parms.Temp_text_Variable_51 = Temp_text_Variable_51;
	Parms.Temp_text_Variable_52 = Temp_text_Variable_52;
	Parms.Temp_text_Variable_53 = Temp_text_Variable_53;
	Parms.Temp_text_Variable_54 = Temp_text_Variable_54;
	Parms.Temp_text_Variable_55 = Temp_text_Variable_55;
	Parms.Temp_text_Variable_56 = Temp_text_Variable_56;
	Parms.Temp_text_Variable_57 = Temp_text_Variable_57;
	Parms.Temp_text_Variable_58 = Temp_text_Variable_58;
	Parms.Temp_text_Variable_59 = Temp_text_Variable_59;
	Parms.Temp_text_Variable_60 = Temp_text_Variable_60;
	Parms.Temp_text_Variable_61 = Temp_text_Variable_61;
	Parms.Temp_text_Variable_62 = Temp_text_Variable_62;
	Parms.Temp_text_Variable_63 = Temp_text_Variable_63;
	Parms.Temp_text_Variable_64 = Temp_text_Variable_64;
	Parms.Temp_text_Variable_65 = Temp_text_Variable_65;
	Parms.Temp_text_Variable_66 = Temp_text_Variable_66;
	Parms.Temp_text_Variable_67 = Temp_text_Variable_67;
	Parms.Temp_text_Variable_68 = Temp_text_Variable_68;
	Parms.Temp_text_Variable_69 = Temp_text_Variable_69;
	Parms.Temp_text_Variable_70 = Temp_text_Variable_70;
	Parms.Temp_text_Variable_71 = Temp_text_Variable_71;
	Parms.Temp_text_Variable_72 = Temp_text_Variable_72;
	Parms.Temp_text_Variable_73 = Temp_text_Variable_73;
	Parms.Temp_text_Variable_74 = Temp_text_Variable_74;
	Parms.Temp_text_Variable_75 = Temp_text_Variable_75;
	Parms.Temp_text_Variable_76 = Temp_text_Variable_76;
	Parms.Temp_text_Variable_77 = Temp_text_Variable_77;
	Parms.Temp_text_Variable_78 = Temp_text_Variable_78;
	Parms.Temp_text_Variable_79 = Temp_text_Variable_79;
	Parms.Temp_text_Variable_80 = Temp_text_Variable_80;
	Parms.Temp_text_Variable_81 = Temp_text_Variable_81;
	Parms.Temp_text_Variable_82 = Temp_text_Variable_82;
	Parms.Temp_text_Variable_83 = Temp_text_Variable_83;
	Parms.Temp_text_Variable_84 = Temp_text_Variable_84;
	Parms.Temp_text_Variable_85 = Temp_text_Variable_85;
	Parms.Temp_text_Variable_86 = Temp_text_Variable_86;
	Parms.Temp_text_Variable_87 = Temp_text_Variable_87;
	Parms.Temp_text_Variable_88 = Temp_text_Variable_88;
	Parms.Temp_text_Variable_89 = Temp_text_Variable_89;
	Parms.Temp_text_Variable_90 = Temp_text_Variable_90;
	Parms.Temp_text_Variable_91 = Temp_text_Variable_91;
	Parms.Temp_text_Variable_92 = Temp_text_Variable_92;
	Parms.Temp_text_Variable_93 = Temp_text_Variable_93;
	Parms.Temp_text_Variable_94 = Temp_text_Variable_94;
	Parms.Temp_text_Variable_95 = Temp_text_Variable_95;
	Parms.Temp_text_Variable_96 = Temp_text_Variable_96;
	Parms.Temp_text_Variable_97 = Temp_text_Variable_97;
	Parms.Temp_text_Variable_98 = Temp_text_Variable_98;
	Parms.Temp_text_Variable_99 = Temp_text_Variable_99;
	Parms.Temp_text_Variable_100 = Temp_text_Variable_100;
	Parms.Temp_text_Variable_101 = Temp_text_Variable_101;
	Parms.Temp_text_Variable_102 = Temp_text_Variable_102;
	Parms.Temp_text_Variable_103 = Temp_text_Variable_103;
	Parms.Temp_text_Variable_104 = Temp_text_Variable_104;
	Parms.Temp_text_Variable_105 = Temp_text_Variable_105;
	Parms.Temp_text_Variable_106 = Temp_text_Variable_106;
	Parms.Temp_text_Variable_107 = Temp_text_Variable_107;
	Parms.Temp_text_Variable_108 = Temp_text_Variable_108;
	Parms.Temp_text_Variable_109 = Temp_text_Variable_109;
	Parms.Temp_text_Variable_110 = Temp_text_Variable_110;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BPLibrary.BPLibrary_C.CalcLegacyPerksDesc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPerkType               PerkType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CompiledText                                                     (Parm, OutParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_GetStatByEnumLegacy_Text                                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBPLibrary_C::CalcLegacyPerksDesc(enum class EPerkType PerkType, class FText Text, class UObject* __WorldContext, class FText* CompiledText, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_GetStatByEnumLegacy_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "CalcLegacyPerksDesc");

	Params::UBPLibrary_C_CalcLegacyPerksDesc_Params Parms{};

	Parms.PerkType = PerkType;
	Parms.Text = Text;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetStatByEnumLegacy_Text = CallFunc_GetStatByEnumLegacy_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CompiledText != nullptr)
		*CompiledText = Parms.CompiledText;

}


// Function BPLibrary.BPLibrary_C.GetUINpcColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPLibrary_C::GetUINpcColor(class UClass* NPC, class UObject* __WorldContext, int32* ID, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "GetUINpcColor");

	Params::UBPLibrary_C_GetUINpcColor_Params Parms{};

	Parms.NPC = NPC;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function BPLibrary.BPLibrary_C.CalculateEffectsLine
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDebuffProperties           DebuffProperty                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// float                              Value__                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Positive_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               StaticValue_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InvertPositiveIcon                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Possitive_                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_10                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_11                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_12                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_13                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_14                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_15                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_16                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_17                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_18                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_19                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_20                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_21                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_22                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_23                          (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_24                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_25                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_26                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_27                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_28                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_29                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_30                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_31                          (None)

void UBPLibrary_C::CalculateEffectsLine(const struct FDebuffProperties& DebuffProperty, class ACharacter* Player, class UObject* __WorldContext, class FText* Text, float* Value__, bool* Positive_, bool* StaticValue_, class UTexture2D** Icon, bool* InvertPositiveIcon, bool Possitive_, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_Not_PreBool_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_13, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_14, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_15, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_16, bool CallFunc_Not_PreBool_ReturnValue_17, bool CallFunc_Not_PreBool_ReturnValue_18, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_8, class FText CallFunc_MakeLiteralText_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_10, class FText CallFunc_MakeLiteralText_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_12, class FText CallFunc_MakeLiteralText_ReturnValue_13, class FText CallFunc_MakeLiteralText_ReturnValue_14, class FText CallFunc_MakeLiteralText_ReturnValue_15, class FText CallFunc_MakeLiteralText_ReturnValue_16, class FText CallFunc_MakeLiteralText_ReturnValue_17, class FText CallFunc_MakeLiteralText_ReturnValue_18, class FText CallFunc_MakeLiteralText_ReturnValue_19, class FText CallFunc_MakeLiteralText_ReturnValue_20, class FText CallFunc_MakeLiteralText_ReturnValue_21, class FText CallFunc_MakeLiteralText_ReturnValue_22, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_MakeLiteralText_ReturnValue_23, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_24, class FText CallFunc_MakeLiteralText_ReturnValue_25, class FText CallFunc_MakeLiteralText_ReturnValue_26, class FText CallFunc_MakeLiteralText_ReturnValue_27, class FText CallFunc_MakeLiteralText_ReturnValue_28, class FText CallFunc_MakeLiteralText_ReturnValue_29, class FText CallFunc_MakeLiteralText_ReturnValue_30, class FText CallFunc_MakeLiteralText_ReturnValue_31)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "CalculateEffectsLine");

	Params::UBPLibrary_C_CalculateEffectsLine_Params Parms{};

	Parms.DebuffProperty = DebuffProperty;
	Parms.Player = Player;
	Parms.__WorldContext = __WorldContext;
	Parms.Possitive_ = Possitive_;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_14 = CallFunc_Not_PreBool_ReturnValue_14;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_15 = CallFunc_Not_PreBool_ReturnValue_15;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_16 = CallFunc_Not_PreBool_ReturnValue_16;
	Parms.CallFunc_Not_PreBool_ReturnValue_17 = CallFunc_Not_PreBool_ReturnValue_17;
	Parms.CallFunc_Not_PreBool_ReturnValue_18 = CallFunc_Not_PreBool_ReturnValue_18;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_10 = CallFunc_MakeLiteralText_ReturnValue_10;
	Parms.CallFunc_MakeLiteralText_ReturnValue_11 = CallFunc_MakeLiteralText_ReturnValue_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_12 = CallFunc_MakeLiteralText_ReturnValue_12;
	Parms.CallFunc_MakeLiteralText_ReturnValue_13 = CallFunc_MakeLiteralText_ReturnValue_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_14 = CallFunc_MakeLiteralText_ReturnValue_14;
	Parms.CallFunc_MakeLiteralText_ReturnValue_15 = CallFunc_MakeLiteralText_ReturnValue_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_16 = CallFunc_MakeLiteralText_ReturnValue_16;
	Parms.CallFunc_MakeLiteralText_ReturnValue_17 = CallFunc_MakeLiteralText_ReturnValue_17;
	Parms.CallFunc_MakeLiteralText_ReturnValue_18 = CallFunc_MakeLiteralText_ReturnValue_18;
	Parms.CallFunc_MakeLiteralText_ReturnValue_19 = CallFunc_MakeLiteralText_ReturnValue_19;
	Parms.CallFunc_MakeLiteralText_ReturnValue_20 = CallFunc_MakeLiteralText_ReturnValue_20;
	Parms.CallFunc_MakeLiteralText_ReturnValue_21 = CallFunc_MakeLiteralText_ReturnValue_21;
	Parms.CallFunc_MakeLiteralText_ReturnValue_22 = CallFunc_MakeLiteralText_ReturnValue_22;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_23 = CallFunc_MakeLiteralText_ReturnValue_23;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_24 = CallFunc_MakeLiteralText_ReturnValue_24;
	Parms.CallFunc_MakeLiteralText_ReturnValue_25 = CallFunc_MakeLiteralText_ReturnValue_25;
	Parms.CallFunc_MakeLiteralText_ReturnValue_26 = CallFunc_MakeLiteralText_ReturnValue_26;
	Parms.CallFunc_MakeLiteralText_ReturnValue_27 = CallFunc_MakeLiteralText_ReturnValue_27;
	Parms.CallFunc_MakeLiteralText_ReturnValue_28 = CallFunc_MakeLiteralText_ReturnValue_28;
	Parms.CallFunc_MakeLiteralText_ReturnValue_29 = CallFunc_MakeLiteralText_ReturnValue_29;
	Parms.CallFunc_MakeLiteralText_ReturnValue_30 = CallFunc_MakeLiteralText_ReturnValue_30;
	Parms.CallFunc_MakeLiteralText_ReturnValue_31 = CallFunc_MakeLiteralText_ReturnValue_31;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	if (Value__ != nullptr)
		*Value__ = Parms.Value__;

	if (Positive_ != nullptr)
		*Positive_ = Parms.Positive_;

	if (StaticValue_ != nullptr)
		*StaticValue_ = Parms.StaticValue_;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (InvertPositiveIcon != nullptr)
		*InvertPositiveIcon = Parms.InvertPositiveIcon;

}


// Function BPLibrary.BPLibrary_C.FloatText
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPaused                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsReversed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FloatingValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocalValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MoveValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Paused                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Reverse                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPLibrary_C::FloatText(bool IsPaused, bool IsReversed, float Delta, float FloatingValue, float LocalValue, float Time, class UObject* __WorldContext, float* MoveValue, bool* Paused, bool* Reverse, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "FloatText");

	Params::UBPLibrary_C_FloatText_Params Parms{};

	Parms.IsPaused = IsPaused;
	Parms.IsReversed = IsReversed;
	Parms.Delta = Delta;
	Parms.FloatingValue = FloatingValue;
	Parms.LocalValue = LocalValue;
	Parms.Time = Time;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MoveValue != nullptr)
		*MoveValue = Parms.MoveValue;

	if (Paused != nullptr)
		*Paused = Parms.Paused;

	if (Reverse != nullptr)
		*Reverse = Parms.Reverse;

}


// Function BPLibrary.BPLibrary_C.CalcResists
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBPLibrary_C::CalcResists(float Stat, class UObject* __WorldContext, class FText* Result, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "CalcResists");

	Params::UBPLibrary_C_CalcResists_Params Parms{};

	Parms.Stat = Stat;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPLibrary.BPLibrary_C.CalcStatisticsDesc
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIStatisticsType       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)
// bool                               IsNegative_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetLongestRealTimeSurvived_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerState*              K2Node_DynamicCast_AsSHPlayer_State_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_1                          (None)
// bool                               CallFunc_IsHotBloodLearned_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActualLevel_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActualLevel_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_5                            (None)
// TArray<int32>                      CallFunc_GetAllLearnedRecipes_ReturnValue                        (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLearned_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_2                          (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_3                          (None)
// class FText                        CallFunc_Format_ReturnValue_6                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_7                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_7                                    (None)
// bool                               CallFunc_IsLearned_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_4                          (None)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_5                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_8                                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_8                                    (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_6                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_9                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_9                                    (None)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_7                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_12                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_10                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_10                                   (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_8                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_13                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_11                                        (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_11                                   (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_9                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_14                          (HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_12                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_10                         (None)
// class FText                        CallFunc_Format_ReturnValue_12                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_15                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_13                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_13                                   (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_11                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_16                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_14                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_14                                   (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFistDamageModifier_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_12                         (None)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_17                          (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_13                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_15                                        (ReferenceParm, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_18                          (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_15                                   (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_16                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_16                                   (None)
// float                              CallFunc_GetFistDamageModifier_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_14                         (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_15                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_19                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_20                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_17                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_18                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_17                                   (None)
// class FText                        CallFunc_Format_ReturnValue_18                                   (None)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_16                         (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_21                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_19                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_17                         (None)
// class FText                        CallFunc_Format_ReturnValue_19                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_22                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_20                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_20                                   (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_18                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_23                          (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_19                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_21                                        (ReferenceParm, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_24                          (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_21                                   (None)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_20                         (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_21                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_25                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_26                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_22                                        (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_23                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_22                                   (None)
// class FText                        CallFunc_Format_ReturnValue_23                                   (None)
// float                              CallFunc_GetMaxValue_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultValue_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_22                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_27                          (HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_24                                        (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_24                                   (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_23                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_28                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_25                                        (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_25                                   (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_24                         (None)
// float                              CallFunc_GetMaxValue_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPsyDamageReduction_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_25                         (None)
// class FText                        CallFunc_CalcResists_Result                                      (None)
// float                              CallFunc_GetAnomalyDamageReduction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CalcResists_Result_1                                    (None)
// class FText                        CallFunc_CalcResists_Result_2                                    (None)
// float                              CallFunc_GetTemperatureDamageReduction_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CalcResistsTemp_Result                                  (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        Temp_text_Variable_3                                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_29                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_26                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        CallFunc_Format_ReturnValue_26                                   (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_5                                             (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReputationInfo             CallFunc_Array_Get_Item                                          (None)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_26                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_6                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_30                          (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_27                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_27                                   (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStorylineView              CallFunc_Array_Get_Item_1                                        (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReputationInfo             CallFunc_Array_Get_Item_2                                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_31                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_28                                        (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_28                                   (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_7                            (None)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStorylineView              CallFunc_Array_Get_Item_3                                        (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStorylineView              CallFunc_Array_Get_Item_4                                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_32                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_29                                        (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_29                                   (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_33                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_30                                        (ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_30                                   (None)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_27                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_34                          (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_7                                             (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_31                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_31                                   (None)
// class FText                        Temp_text_Variable_8                                             (None)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_6                                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_35                          (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        K2Node_Select_Default_7                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_36                          (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_9                                             (None)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStorylineView              CallFunc_Array_Get_Item_5                                        (None)
// class FText                        Temp_text_Variable_10                                            (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_8                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_37                          (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_11                                            (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_32                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_32                                   (None)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_9                                          (None)
// class FText                        K2Node_Select_Default_10                                         (None)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_12                                            (None)
// struct FStorylineView              CallFunc_Array_Get_Item_6                                        (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FCeil_ReturnValue_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_38                          (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_11                                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_33                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_Format_ReturnValue_33                                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_39                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_34                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        CallFunc_Format_ReturnValue_34                                   (None)
// class FText                        Temp_text_Variable_14                                            (None)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_12                                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_40                          (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_13                                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_35                                        (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_35                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_15                                            (None)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        K2Node_Select_Default_14                                         (None)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_17                                            (None)
// class FText                        K2Node_Select_Default_15                                         (None)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_41                          (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_36                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_36                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// struct FStorylineView              CallFunc_Array_Get_Item_7                                        (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_42                          (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_37                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_37                                   (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_43                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_38                                        (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_38                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStorylineView              CallFunc_Array_Get_Item_8                                        (None)
// struct FReputationInfo             CallFunc_Array_Get_Item_9                                        (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_8                            (None)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_16                                         (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_6                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_44                          (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_39                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_39                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStorylineView              CallFunc_Array_Get_Item_10                                       (None)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue_7                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_45                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_40                                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_40                                   (None)

void UBPLibrary_C::CalcStatisticsDesc(class ASHPlayerCharacter* Player, enum class EUIStatisticsType Type, class UObject* __WorldContext, class FText* Result, bool* IsNegative_, float Temp_float_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State, bool K2Node_DynamicCast_bSuccess, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_2, bool K2Node_DynamicCast_bSuccess_2, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_3, bool K2Node_DynamicCast_bSuccess_3, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_4, bool K2Node_DynamicCast_bSuccess_4, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_5, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_GetLongestRealTimeSurvived_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, float CallFunc_Divide_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Format_ReturnValue_4, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_6, bool K2Node_DynamicCast_bSuccess_6, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_7, bool K2Node_DynamicCast_bSuccess_7, class FText CallFunc_Conv_IntToText_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue_1, bool CallFunc_IsHotBloodLearned_ReturnValue, int32 CallFunc_GetActualLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_6, int32 CallFunc_GetActualLevel_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_7, class FText CallFunc_Conv_IntToText_ReturnValue_5, TArray<int32>& CallFunc_GetAllLearnedRecipes_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, class FText CallFunc_Format_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_11, int32 CallFunc_Array_Length_ReturnValue_12, bool CallFunc_IsLearned_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Conv_FloatToText_ReturnValue_3, class FText CallFunc_Format_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_7, class FText CallFunc_Format_ReturnValue_7, bool CallFunc_IsLearned_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, class FText CallFunc_Conv_FloatToText_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_8, bool CallFunc_Greater_FloatFloat_ReturnValue_3, class FText CallFunc_Format_ReturnValue_8, class FText CallFunc_Conv_FloatToText_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_9, class FText CallFunc_Format_ReturnValue_9, bool CallFunc_Greater_FloatFloat_ReturnValue_4, class FText CallFunc_Conv_FloatToText_ReturnValue_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_10, class FText CallFunc_Format_ReturnValue_10, float CallFunc_Add_FloatFloat_ReturnValue_3, class FText CallFunc_Conv_FloatToText_ReturnValue_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_13, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_11, float CallFunc_Add_FloatFloat_ReturnValue_4, class FText CallFunc_Format_ReturnValue_11, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class FText CallFunc_Conv_FloatToText_ReturnValue_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_14, float CallFunc_Multiply_FloatFloat_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_12, class FText CallFunc_Conv_FloatToText_ReturnValue_10, class FText CallFunc_Format_ReturnValue_12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_15, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_13, class FText CallFunc_Format_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_4, class FText CallFunc_Conv_FloatToText_ReturnValue_11, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_16, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_14, class FText CallFunc_Format_ReturnValue_14, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_GetFistDamageModifier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, class FText CallFunc_Conv_FloatToText_ReturnValue_12, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_17, class FText CallFunc_Conv_FloatToText_ReturnValue_13, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_15, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_18, class FText CallFunc_Format_ReturnValue_15, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_16, class FText CallFunc_Format_ReturnValue_16, float CallFunc_GetFistDamageModifier_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_7, class FText CallFunc_Conv_FloatToText_ReturnValue_14, class FText CallFunc_Conv_FloatToText_ReturnValue_15, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_19, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_20, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_17, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_18, class FText CallFunc_Format_ReturnValue_17, class FText CallFunc_Format_ReturnValue_18, bool CallFunc_Greater_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_8, class FText CallFunc_Conv_FloatToText_ReturnValue_16, float CallFunc_Multiply_FloatFloat_ReturnValue_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_21, bool CallFunc_Less_FloatFloat_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_19, class FText CallFunc_Conv_FloatToText_ReturnValue_17, class FText CallFunc_Format_ReturnValue_19, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_22, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_20, class FText CallFunc_Format_ReturnValue_20, float CallFunc_Multiply_FloatFloat_ReturnValue_10, bool CallFunc_Less_FloatFloat_ReturnValue_3, class FText CallFunc_Conv_FloatToText_ReturnValue_18, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_23, class FText CallFunc_Conv_FloatToText_ReturnValue_19, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_21, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_24, class FText CallFunc_Format_ReturnValue_21, bool CallFunc_Less_FloatFloat_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_11, float CallFunc_Multiply_FloatFloat_ReturnValue_12, class FText CallFunc_Conv_FloatToText_ReturnValue_20, class FText CallFunc_Conv_FloatToText_ReturnValue_21, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_25, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_26, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_22, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_23, class FText CallFunc_Format_ReturnValue_22, class FText CallFunc_Format_ReturnValue_23, float CallFunc_GetMaxValue_ReturnValue, float CallFunc_GetMaxValue_ReturnValue_1, float CallFunc_GetDefaultValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_GetDefaultValue_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_Multiply_FloatFloat_ReturnValue_15, class FText CallFunc_Conv_FloatToText_ReturnValue_22, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_27, float CallFunc_Divide_FloatFloat_ReturnValue_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_24, bool CallFunc_Less_FloatFloat_ReturnValue_5, class FText CallFunc_Format_ReturnValue_24, class FText CallFunc_Conv_FloatToText_ReturnValue_23, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_28, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_25, float CallFunc_GetMaxValue_ReturnValue_2, class FText CallFunc_Format_ReturnValue_25, class FText CallFunc_Conv_FloatToText_ReturnValue_24, float CallFunc_GetMaxValue_ReturnValue_3, float CallFunc_GetPsyDamageReduction_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_25, class FText CallFunc_CalcResists_Result, float CallFunc_GetAnomalyDamageReduction_ReturnValue, class FText CallFunc_CalcResists_Result_1, class FText CallFunc_CalcResists_Result_2, float CallFunc_GetTemperatureDamageReduction_ReturnValue, float Temp_float_Variable_1, class FText CallFunc_CalcResistsTemp_Result, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, class FText Temp_text_Variable_2, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_1, class FText Temp_text_Variable_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_29, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_26, class FText Temp_text_Variable_4, class FText CallFunc_Format_ReturnValue_26, class FText K2Node_Select_Default_2, bool Temp_bool_Variable_3, class FText Temp_text_Variable_5, int32 Temp_int_Loop_Counter_Variable, class FText K2Node_Select_Default_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_4, const struct FReputationInfo& CallFunc_Array_Get_Item, float K2Node_Select_Default_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_6, class FText CallFunc_Conv_FloatToText_ReturnValue_26, class FText CallFunc_Conv_IntToText_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_30, bool CallFunc_EqualEqual_ClassClass_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_27, class FText CallFunc_Format_ReturnValue_27, int32 Temp_int_Array_Index_Variable_1, const struct FStorylineView& CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_FCeil_ReturnValue, const struct FReputationInfo& CallFunc_Array_Get_Item_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_31, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_28, bool CallFunc_GreaterEqual_IntInt_ReturnValue_7, class FText CallFunc_Format_ReturnValue_28, class FText CallFunc_Conv_IntToText_ReturnValue_7, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, float Temp_float_Variable_2, const struct FStorylineView& CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_1, int32 Temp_int_Array_Index_Variable_4, int32 CallFunc_FCeil_ReturnValue_1, const struct FStorylineView& CallFunc_Array_Get_Item_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_32, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_29, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class FText CallFunc_Format_ReturnValue_29, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_MapRangeClamped_ReturnValue_2, float Temp_float_Variable_3, int32 CallFunc_FCeil_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_33, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_30, bool Temp_bool_Variable_5, class FText CallFunc_Format_ReturnValue_30, float K2Node_Select_Default_5, class FText Temp_text_Variable_6, class FText CallFunc_Conv_FloatToText_ReturnValue_27, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_34, class FText Temp_text_Variable_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_31, class FText CallFunc_Format_ReturnValue_31, class FText Temp_text_Variable_8, int32 Temp_int_Loop_Counter_Variable_4, bool Temp_bool_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_4, class FText K2Node_Select_Default_6, int32 CallFunc_Add_IntInt_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_35, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText K2Node_Select_Default_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_36, class FText Temp_text_Variable_9, int32 Temp_int_Array_Index_Variable_5, const struct FStorylineView& CallFunc_Array_Get_Item_5, class FText Temp_text_Variable_10, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Conv_IntToFloat_ReturnValue_7, bool Temp_bool_Variable_8, float CallFunc_MapRangeClamped_ReturnValue_3, int32 CallFunc_FCeil_ReturnValue_3, class FText K2Node_Select_Default_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_37, class FText Temp_text_Variable_11, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_32, class FText CallFunc_Format_ReturnValue_32, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, class FText K2Node_Select_Default_9, class FText K2Node_Select_Default_10, int32 Temp_int_Array_Index_Variable_6, class FText Temp_text_Variable_12, const struct FStorylineView& CallFunc_Array_Get_Item_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_8, float CallFunc_Conv_IntToFloat_ReturnValue_9, float CallFunc_MapRangeClamped_ReturnValue_4, bool Temp_bool_Variable_11, int32 CallFunc_FCeil_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_38, class FText K2Node_Select_Default_11, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_33, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_Format_ReturnValue_33, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_39, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_34, class FText Temp_text_Variable_13, class FText CallFunc_Format_ReturnValue_34, class FText Temp_text_Variable_14, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, class FText K2Node_Select_Default_12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_40, class FText K2Node_Select_Default_13, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_35, int32 Temp_int_Loop_Counter_Variable_5, class FText CallFunc_Format_ReturnValue_35, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, class FText Temp_text_Variable_15, bool Temp_bool_Variable_14, class FText Temp_text_Variable_16, class FText K2Node_Select_Default_14, bool Temp_bool_Variable_15, class FText Temp_text_Variable_17, class FText K2Node_Select_Default_15, bool Temp_bool_Variable_16, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_41, int32 Temp_int_Loop_Counter_Variable_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_36, class FText CallFunc_Format_ReturnValue_36, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_7, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FStorylineView& CallFunc_Array_Get_Item_7, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_42, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_37, class FText CallFunc_Format_ReturnValue_37, float CallFunc_Conv_IntToFloat_ReturnValue_10, float CallFunc_Conv_IntToFloat_ReturnValue_11, float CallFunc_MapRangeClamped_ReturnValue_5, int32 CallFunc_FCeil_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_43, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_38, bool CallFunc_Less_IntInt_ReturnValue_7, class FText CallFunc_Format_ReturnValue_38, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_8, int32 Temp_int_Array_Index_Variable_9, const struct FStorylineView& CallFunc_Array_Get_Item_8, const struct FReputationInfo& CallFunc_Array_Get_Item_9, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue_8, class FText CallFunc_Conv_IntToText_ReturnValue_8, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, class FText K2Node_Select_Default_16, float CallFunc_Conv_IntToFloat_ReturnValue_12, float CallFunc_Conv_IntToFloat_ReturnValue_13, float CallFunc_MapRangeClamped_ReturnValue_6, int32 CallFunc_FCeil_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_44, int32 Temp_int_Loop_Counter_Variable_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_39, class FText CallFunc_Format_ReturnValue_39, bool CallFunc_Less_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 Temp_int_Array_Index_Variable_10, const struct FStorylineView& CallFunc_Array_Get_Item_10, int32 Temp_int_Loop_Counter_Variable_9, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_9, float CallFunc_Conv_IntToFloat_ReturnValue_14, float CallFunc_Conv_IntToFloat_ReturnValue_15, int32 Temp_int_Loop_Counter_Variable_10, float CallFunc_MapRangeClamped_ReturnValue_7, int32 CallFunc_FCeil_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_10, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_45, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_40, int32 CallFunc_Add_IntInt_ReturnValue_10, class FText CallFunc_Format_ReturnValue_40)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "CalcStatisticsDesc");

	Params::UBPLibrary_C_CalcStatisticsDesc_Params Parms{};

	Parms.Player = Player;
	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsSHPlayer_State = K2Node_DynamicCast_AsSHPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSHPlayer_State_1 = K2Node_DynamicCast_AsSHPlayer_State_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSHPlayer_State_2 = K2Node_DynamicCast_AsSHPlayer_State_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsSHPlayer_State_3 = K2Node_DynamicCast_AsSHPlayer_State_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsSHPlayer_State_4 = K2Node_DynamicCast_AsSHPlayer_State_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsSHPlayer_State_5 = K2Node_DynamicCast_AsSHPlayer_State_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetLongestRealTimeSurvived_ReturnValue = CallFunc_GetLongestRealTimeSurvived_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsSHPlayer_State_6 = K2Node_DynamicCast_AsSHPlayer_State_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsSHPlayer_State_7 = K2Node_DynamicCast_AsSHPlayer_State_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_1 = CallFunc_Conv_FloatToText_ReturnValue_1;
	Parms.CallFunc_IsHotBloodLearned_ReturnValue = CallFunc_IsHotBloodLearned_ReturnValue;
	Parms.CallFunc_GetActualLevel_ReturnValue = CallFunc_GetActualLevel_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_4 = CallFunc_GreaterEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_5 = CallFunc_GreaterEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_GetActualLevel_ReturnValue_1 = CallFunc_GetActualLevel_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Conv_IntToText_ReturnValue_5 = CallFunc_Conv_IntToText_ReturnValue_5;
	Parms.CallFunc_GetAllLearnedRecipes_ReturnValue = CallFunc_GetAllLearnedRecipes_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.CallFunc_Array_Length_ReturnValue_12 = CallFunc_Array_Length_ReturnValue_12;
	Parms.CallFunc_IsLearned_ReturnValue = CallFunc_IsLearned_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_2 = CallFunc_Conv_FloatToText_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_3 = CallFunc_Conv_FloatToText_ReturnValue_3;
	Parms.CallFunc_Format_ReturnValue_6 = CallFunc_Format_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Format_ReturnValue_7 = CallFunc_Format_ReturnValue_7;
	Parms.CallFunc_IsLearned_ReturnValue_1 = CallFunc_IsLearned_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_4 = CallFunc_Conv_FloatToText_ReturnValue_4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_5 = CallFunc_Conv_FloatToText_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Format_ReturnValue_8 = CallFunc_Format_ReturnValue_8;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_6 = CallFunc_Conv_FloatToText_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_Format_ReturnValue_9 = CallFunc_Format_ReturnValue_9;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_7 = CallFunc_Conv_FloatToText_ReturnValue_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_12 = K2Node_MakeStruct_FormatArgumentData_12;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.CallFunc_Format_ReturnValue_10 = CallFunc_Format_ReturnValue_10;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_8 = CallFunc_Conv_FloatToText_ReturnValue_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_13 = K2Node_MakeStruct_FormatArgumentData_13;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Format_ReturnValue_11 = CallFunc_Format_ReturnValue_11;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_9 = CallFunc_Conv_FloatToText_ReturnValue_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_14 = K2Node_MakeStruct_FormatArgumentData_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_12 = K2Node_MakeArray_Array_12;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_10 = CallFunc_Conv_FloatToText_ReturnValue_10;
	Parms.CallFunc_Format_ReturnValue_12 = CallFunc_Format_ReturnValue_12;
	Parms.K2Node_MakeStruct_FormatArgumentData_15 = K2Node_MakeStruct_FormatArgumentData_15;
	Parms.K2Node_MakeArray_Array_13 = K2Node_MakeArray_Array_13;
	Parms.CallFunc_Format_ReturnValue_13 = CallFunc_Format_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_11 = CallFunc_Conv_FloatToText_ReturnValue_11;
	Parms.K2Node_MakeStruct_FormatArgumentData_16 = K2Node_MakeStruct_FormatArgumentData_16;
	Parms.K2Node_MakeArray_Array_14 = K2Node_MakeArray_Array_14;
	Parms.CallFunc_Format_ReturnValue_14 = CallFunc_Format_ReturnValue_14;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_6 = CallFunc_Add_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_7 = CallFunc_Add_FloatFloat_ReturnValue_7;
	Parms.CallFunc_GetFistDamageModifier_ReturnValue = CallFunc_GetFistDamageModifier_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_12 = CallFunc_Conv_FloatToText_ReturnValue_12;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_17 = K2Node_MakeStruct_FormatArgumentData_17;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_13 = CallFunc_Conv_FloatToText_ReturnValue_13;
	Parms.K2Node_MakeArray_Array_15 = K2Node_MakeArray_Array_15;
	Parms.K2Node_MakeStruct_FormatArgumentData_18 = K2Node_MakeStruct_FormatArgumentData_18;
	Parms.CallFunc_Format_ReturnValue_15 = CallFunc_Format_ReturnValue_15;
	Parms.K2Node_MakeArray_Array_16 = K2Node_MakeArray_Array_16;
	Parms.CallFunc_Format_ReturnValue_16 = CallFunc_Format_ReturnValue_16;
	Parms.CallFunc_GetFistDamageModifier_ReturnValue_1 = CallFunc_GetFistDamageModifier_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_14 = CallFunc_Conv_FloatToText_ReturnValue_14;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_15 = CallFunc_Conv_FloatToText_ReturnValue_15;
	Parms.K2Node_MakeStruct_FormatArgumentData_19 = K2Node_MakeStruct_FormatArgumentData_19;
	Parms.K2Node_MakeStruct_FormatArgumentData_20 = K2Node_MakeStruct_FormatArgumentData_20;
	Parms.K2Node_MakeArray_Array_17 = K2Node_MakeArray_Array_17;
	Parms.K2Node_MakeArray_Array_18 = K2Node_MakeArray_Array_18;
	Parms.CallFunc_Format_ReturnValue_17 = CallFunc_Format_ReturnValue_17;
	Parms.CallFunc_Format_ReturnValue_18 = CallFunc_Format_ReturnValue_18;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_5 = CallFunc_Greater_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_16 = CallFunc_Conv_FloatToText_ReturnValue_16;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_21 = K2Node_MakeStruct_FormatArgumentData_21;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_19 = K2Node_MakeArray_Array_19;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_17 = CallFunc_Conv_FloatToText_ReturnValue_17;
	Parms.CallFunc_Format_ReturnValue_19 = CallFunc_Format_ReturnValue_19;
	Parms.K2Node_MakeStruct_FormatArgumentData_22 = K2Node_MakeStruct_FormatArgumentData_22;
	Parms.K2Node_MakeArray_Array_20 = K2Node_MakeArray_Array_20;
	Parms.CallFunc_Format_ReturnValue_20 = CallFunc_Format_ReturnValue_20;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_18 = CallFunc_Conv_FloatToText_ReturnValue_18;
	Parms.K2Node_MakeStruct_FormatArgumentData_23 = K2Node_MakeStruct_FormatArgumentData_23;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_19 = CallFunc_Conv_FloatToText_ReturnValue_19;
	Parms.K2Node_MakeArray_Array_21 = K2Node_MakeArray_Array_21;
	Parms.K2Node_MakeStruct_FormatArgumentData_24 = K2Node_MakeStruct_FormatArgumentData_24;
	Parms.CallFunc_Format_ReturnValue_21 = CallFunc_Format_ReturnValue_21;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_4 = CallFunc_Less_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_6 = CallFunc_Greater_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_20 = CallFunc_Conv_FloatToText_ReturnValue_20;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_21 = CallFunc_Conv_FloatToText_ReturnValue_21;
	Parms.K2Node_MakeStruct_FormatArgumentData_25 = K2Node_MakeStruct_FormatArgumentData_25;
	Parms.K2Node_MakeStruct_FormatArgumentData_26 = K2Node_MakeStruct_FormatArgumentData_26;
	Parms.K2Node_MakeArray_Array_22 = K2Node_MakeArray_Array_22;
	Parms.K2Node_MakeArray_Array_23 = K2Node_MakeArray_Array_23;
	Parms.CallFunc_Format_ReturnValue_22 = CallFunc_Format_ReturnValue_22;
	Parms.CallFunc_Format_ReturnValue_23 = CallFunc_Format_ReturnValue_23;
	Parms.CallFunc_GetMaxValue_ReturnValue = CallFunc_GetMaxValue_ReturnValue;
	Parms.CallFunc_GetMaxValue_ReturnValue_1 = CallFunc_GetMaxValue_ReturnValue_1;
	Parms.CallFunc_GetDefaultValue_ReturnValue = CallFunc_GetDefaultValue_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetDefaultValue_ReturnValue_1 = CallFunc_GetDefaultValue_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_13 = CallFunc_Multiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_14 = CallFunc_Multiply_FloatFloat_ReturnValue_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_15 = CallFunc_Multiply_FloatFloat_ReturnValue_15;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_22 = CallFunc_Conv_FloatToText_ReturnValue_22;
	Parms.K2Node_MakeStruct_FormatArgumentData_27 = K2Node_MakeStruct_FormatArgumentData_27;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.K2Node_MakeArray_Array_24 = K2Node_MakeArray_Array_24;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_5 = CallFunc_Less_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Format_ReturnValue_24 = CallFunc_Format_ReturnValue_24;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_23 = CallFunc_Conv_FloatToText_ReturnValue_23;
	Parms.K2Node_MakeStruct_FormatArgumentData_28 = K2Node_MakeStruct_FormatArgumentData_28;
	Parms.K2Node_MakeArray_Array_25 = K2Node_MakeArray_Array_25;
	Parms.CallFunc_GetMaxValue_ReturnValue_2 = CallFunc_GetMaxValue_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_25 = CallFunc_Format_ReturnValue_25;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_24 = CallFunc_Conv_FloatToText_ReturnValue_24;
	Parms.CallFunc_GetMaxValue_ReturnValue_3 = CallFunc_GetMaxValue_ReturnValue_3;
	Parms.CallFunc_GetPsyDamageReduction_ReturnValue = CallFunc_GetPsyDamageReduction_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_25 = CallFunc_Conv_FloatToText_ReturnValue_25;
	Parms.CallFunc_CalcResists_Result = CallFunc_CalcResists_Result;
	Parms.CallFunc_GetAnomalyDamageReduction_ReturnValue = CallFunc_GetAnomalyDamageReduction_ReturnValue;
	Parms.CallFunc_CalcResists_Result_1 = CallFunc_CalcResists_Result_1;
	Parms.CallFunc_CalcResists_Result_2 = CallFunc_CalcResists_Result_2;
	Parms.CallFunc_GetTemperatureDamageReduction_ReturnValue = CallFunc_GetTemperatureDamageReduction_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_CalcResistsTemp_Result = CallFunc_CalcResistsTemp_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_29 = K2Node_MakeStruct_FormatArgumentData_29;
	Parms.K2Node_MakeArray_Array_26 = K2Node_MakeArray_Array_26;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_Format_ReturnValue_26 = CallFunc_Format_ReturnValue_26;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_6 = CallFunc_GreaterEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_26 = CallFunc_Conv_FloatToText_ReturnValue_26;
	Parms.CallFunc_Conv_IntToText_ReturnValue_6 = CallFunc_Conv_IntToText_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_30 = K2Node_MakeStruct_FormatArgumentData_30;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_MakeArray_Array_27 = K2Node_MakeArray_Array_27;
	Parms.CallFunc_Format_ReturnValue_27 = CallFunc_Format_ReturnValue_27;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_31 = K2Node_MakeStruct_FormatArgumentData_31;
	Parms.K2Node_MakeArray_Array_28 = K2Node_MakeArray_Array_28;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_7 = CallFunc_GreaterEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_Format_ReturnValue_28 = CallFunc_Format_ReturnValue_28;
	Parms.CallFunc_Conv_IntToText_ReturnValue_7 = CallFunc_Conv_IntToText_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_FCeil_ReturnValue_1 = CallFunc_FCeil_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_32 = K2Node_MakeStruct_FormatArgumentData_32;
	Parms.K2Node_MakeArray_Array_29 = K2Node_MakeArray_Array_29;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_29 = CallFunc_Format_ReturnValue_29;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.CallFunc_FCeil_ReturnValue_2 = CallFunc_FCeil_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_33 = K2Node_MakeStruct_FormatArgumentData_33;
	Parms.K2Node_MakeArray_Array_30 = K2Node_MakeArray_Array_30;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_Format_ReturnValue_30 = CallFunc_Format_ReturnValue_30;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_27 = CallFunc_Conv_FloatToText_ReturnValue_27;
	Parms.K2Node_MakeStruct_FormatArgumentData_34 = K2Node_MakeStruct_FormatArgumentData_34;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.K2Node_MakeArray_Array_31 = K2Node_MakeArray_Array_31;
	Parms.CallFunc_Format_ReturnValue_31 = CallFunc_Format_ReturnValue_31;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_35 = K2Node_MakeStruct_FormatArgumentData_35;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_36 = K2Node_MakeStruct_FormatArgumentData_36;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_6 = CallFunc_Conv_IntToFloat_ReturnValue_6;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_7 = CallFunc_Conv_IntToFloat_ReturnValue_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_FCeil_ReturnValue_3 = CallFunc_FCeil_ReturnValue_3;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_37 = K2Node_MakeStruct_FormatArgumentData_37;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.K2Node_MakeArray_Array_32 = K2Node_MakeArray_Array_32;
	Parms.CallFunc_Format_ReturnValue_32 = CallFunc_Format_ReturnValue_32;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_4 = CallFunc_EqualEqual_ObjectObject_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_8 = CallFunc_Conv_IntToFloat_ReturnValue_8;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_9 = CallFunc_Conv_IntToFloat_ReturnValue_9;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.CallFunc_FCeil_ReturnValue_4 = CallFunc_FCeil_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_38 = K2Node_MakeStruct_FormatArgumentData_38;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.K2Node_MakeArray_Array_33 = K2Node_MakeArray_Array_33;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_33 = CallFunc_Format_ReturnValue_33;
	Parms.K2Node_MakeStruct_FormatArgumentData_39 = K2Node_MakeStruct_FormatArgumentData_39;
	Parms.K2Node_MakeArray_Array_34 = K2Node_MakeArray_Array_34;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.CallFunc_Format_ReturnValue_34 = CallFunc_Format_ReturnValue_34;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.K2Node_MakeStruct_FormatArgumentData_40 = K2Node_MakeStruct_FormatArgumentData_40;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.K2Node_MakeArray_Array_35 = K2Node_MakeArray_Array_35;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Format_ReturnValue_35 = CallFunc_Format_ReturnValue_35;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.K2Node_MakeStruct_FormatArgumentData_41 = K2Node_MakeStruct_FormatArgumentData_41;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.K2Node_MakeArray_Array_36 = K2Node_MakeArray_Array_36;
	Parms.CallFunc_Format_ReturnValue_36 = CallFunc_Format_ReturnValue_36;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_42 = K2Node_MakeStruct_FormatArgumentData_42;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_5 = CallFunc_EqualEqual_ObjectObject_ReturnValue_5;
	Parms.K2Node_MakeArray_Array_37 = K2Node_MakeArray_Array_37;
	Parms.CallFunc_Format_ReturnValue_37 = CallFunc_Format_ReturnValue_37;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_10 = CallFunc_Conv_IntToFloat_ReturnValue_10;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_11 = CallFunc_Conv_IntToFloat_ReturnValue_11;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.CallFunc_FCeil_ReturnValue_5 = CallFunc_FCeil_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_43 = K2Node_MakeStruct_FormatArgumentData_43;
	Parms.K2Node_MakeArray_Array_38 = K2Node_MakeArray_Array_38;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Format_ReturnValue_38 = CallFunc_Format_ReturnValue_38;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_6 = CallFunc_EqualEqual_ObjectObject_ReturnValue_6;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_8 = CallFunc_GreaterEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_Conv_IntToText_ReturnValue_8 = CallFunc_Conv_IntToText_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.K2Node_Select_Default_16 = K2Node_Select_Default_16;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_12 = CallFunc_Conv_IntToFloat_ReturnValue_12;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_13 = CallFunc_Conv_IntToFloat_ReturnValue_13;
	Parms.CallFunc_MapRangeClamped_ReturnValue_6 = CallFunc_MapRangeClamped_ReturnValue_6;
	Parms.CallFunc_FCeil_ReturnValue_6 = CallFunc_FCeil_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_44 = K2Node_MakeStruct_FormatArgumentData_44;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.K2Node_MakeArray_Array_39 = K2Node_MakeArray_Array_39;
	Parms.CallFunc_Format_ReturnValue_39 = CallFunc_Format_ReturnValue_39;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_7 = CallFunc_EqualEqual_ObjectObject_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_14 = CallFunc_Conv_IntToFloat_ReturnValue_14;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_15 = CallFunc_Conv_IntToFloat_ReturnValue_15;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.CallFunc_MapRangeClamped_ReturnValue_7 = CallFunc_MapRangeClamped_ReturnValue_7;
	Parms.CallFunc_FCeil_ReturnValue_7 = CallFunc_FCeil_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.K2Node_MakeStruct_FormatArgumentData_45 = K2Node_MakeStruct_FormatArgumentData_45;
	Parms.K2Node_MakeArray_Array_40 = K2Node_MakeArray_Array_40;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Format_ReturnValue_40 = CallFunc_Format_ReturnValue_40;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (IsNegative_ != nullptr)
		*IsNegative_ = Parms.IsNegative_;

}


// Function BPLibrary.BPLibrary_C.GetStatByEnum
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESkillType              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// enum class ESkillType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        Temp_text_Variable_17                                            (None)
// class FText                        Temp_text_Variable_18                                            (None)
// class FText                        Temp_text_Variable_19                                            (None)
// class FText                        Temp_text_Variable_20                                            (None)
// class FText                        Temp_text_Variable_21                                            (None)
// class FText                        Temp_text_Variable_22                                            (None)
// class FText                        Temp_text_Variable_23                                            (None)
// class FText                        Temp_text_Variable_24                                            (None)
// class FText                        Temp_text_Variable_25                                            (None)
// class FText                        Temp_text_Variable_26                                            (None)
// class FText                        Temp_text_Variable_27                                            (None)
// class FText                        Temp_text_Variable_28                                            (None)
// class FText                        Temp_text_Variable_29                                            (None)
// class FText                        Temp_text_Variable_30                                            (None)
// class FText                        Temp_text_Variable_31                                            (None)
// class FText                        Temp_text_Variable_32                                            (None)
// class FText                        Temp_text_Variable_33                                            (None)
// class FText                        Temp_text_Variable_34                                            (None)
// class FText                        Temp_text_Variable_35                                            (None)
// class FText                        Temp_text_Variable_36                                            (None)
// class FText                        Temp_text_Variable_37                                            (None)
// class FText                        Temp_text_Variable_38                                            (None)
// class FText                        Temp_text_Variable_39                                            (None)
// class FText                        Temp_text_Variable_40                                            (None)
// class FText                        Temp_text_Variable_41                                            (None)
// class FText                        Temp_text_Variable_42                                            (None)
// class FText                        Temp_text_Variable_43                                            (None)
// class FText                        Temp_text_Variable_44                                            (None)
// class FText                        Temp_text_Variable_45                                            (None)
// class FText                        Temp_text_Variable_46                                            (None)
// class FText                        Temp_text_Variable_47                                            (None)
// class FText                        Temp_text_Variable_48                                            (None)
// class FText                        Temp_text_Variable_49                                            (None)
// class FText                        Temp_text_Variable_50                                            (None)
// class FText                        Temp_text_Variable_51                                            (None)
// class FText                        Temp_text_Variable_52                                            (None)
// class FText                        Temp_text_Variable_53                                            (None)
// class FText                        Temp_text_Variable_54                                            (None)
// class FText                        Temp_text_Variable_55                                            (None)
// class FText                        Temp_text_Variable_56                                            (None)
// class FText                        Temp_text_Variable_57                                            (None)
// class FText                        Temp_text_Variable_58                                            (None)
// class FText                        Temp_text_Variable_59                                            (None)
// class FText                        Temp_text_Variable_60                                            (None)
// class FText                        Temp_text_Variable_61                                            (None)
// class FText                        Temp_text_Variable_62                                            (None)
// class FText                        Temp_text_Variable_63                                            (None)
// class FText                        Temp_text_Variable_64                                            (None)
// class FText                        Temp_text_Variable_65                                            (None)
// class FText                        Temp_text_Variable_66                                            (None)
// class FText                        Temp_text_Variable_67                                            (None)
// class FText                        Temp_text_Variable_68                                            (None)
// class FText                        Temp_text_Variable_69                                            (None)
// class FText                        Temp_text_Variable_70                                            (None)
// class FText                        Temp_text_Variable_71                                            (None)
// class FText                        Temp_text_Variable_72                                            (None)
// class FText                        Temp_text_Variable_73                                            (None)
// class FText                        Temp_text_Variable_74                                            (None)
// class FText                        Temp_text_Variable_75                                            (None)
// class FText                        Temp_text_Variable_76                                            (None)
// class FText                        Temp_text_Variable_77                                            (None)
// class FText                        Temp_text_Variable_78                                            (None)
// class FText                        Temp_text_Variable_79                                            (None)
// class FText                        Temp_text_Variable_80                                            (None)
// class FText                        Temp_text_Variable_81                                            (None)
// class FText                        Temp_text_Variable_82                                            (None)
// class FText                        Temp_text_Variable_83                                            (None)
// class FText                        Temp_text_Variable_84                                            (None)
// class FText                        Temp_text_Variable_85                                            (None)
// class FText                        Temp_text_Variable_86                                            (None)
// class FText                        Temp_text_Variable_87                                            (None)
// class FText                        Temp_text_Variable_88                                            (None)
// class FText                        Temp_text_Variable_89                                            (None)
// class FText                        Temp_text_Variable_90                                            (None)
// class FText                        Temp_text_Variable_91                                            (None)
// class FText                        Temp_text_Variable_92                                            (None)
// class FText                        Temp_text_Variable_93                                            (None)
// class FText                        Temp_text_Variable_94                                            (None)
// class FText                        Temp_text_Variable_95                                            (None)
// class FText                        Temp_text_Variable_96                                            (None)
// class FText                        Temp_text_Variable_97                                            (None)
// class FText                        Temp_text_Variable_98                                            (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBPLibrary_C::GetStatByEnum(enum class ESkillType Index, class UObject* __WorldContext, class FText* Text, enum class ESkillType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, class FText Temp_text_Variable_40, class FText Temp_text_Variable_41, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, class FText Temp_text_Variable_44, class FText Temp_text_Variable_45, class FText Temp_text_Variable_46, class FText Temp_text_Variable_47, class FText Temp_text_Variable_48, class FText Temp_text_Variable_49, class FText Temp_text_Variable_50, class FText Temp_text_Variable_51, class FText Temp_text_Variable_52, class FText Temp_text_Variable_53, class FText Temp_text_Variable_54, class FText Temp_text_Variable_55, class FText Temp_text_Variable_56, class FText Temp_text_Variable_57, class FText Temp_text_Variable_58, class FText Temp_text_Variable_59, class FText Temp_text_Variable_60, class FText Temp_text_Variable_61, class FText Temp_text_Variable_62, class FText Temp_text_Variable_63, class FText Temp_text_Variable_64, class FText Temp_text_Variable_65, class FText Temp_text_Variable_66, class FText Temp_text_Variable_67, class FText Temp_text_Variable_68, class FText Temp_text_Variable_69, class FText Temp_text_Variable_70, class FText Temp_text_Variable_71, class FText Temp_text_Variable_72, class FText Temp_text_Variable_73, class FText Temp_text_Variable_74, class FText Temp_text_Variable_75, class FText Temp_text_Variable_76, class FText Temp_text_Variable_77, class FText Temp_text_Variable_78, class FText Temp_text_Variable_79, class FText Temp_text_Variable_80, class FText Temp_text_Variable_81, class FText Temp_text_Variable_82, class FText Temp_text_Variable_83, class FText Temp_text_Variable_84, class FText Temp_text_Variable_85, class FText Temp_text_Variable_86, class FText Temp_text_Variable_87, class FText Temp_text_Variable_88, class FText Temp_text_Variable_89, class FText Temp_text_Variable_90, class FText Temp_text_Variable_91, class FText Temp_text_Variable_92, class FText Temp_text_Variable_93, class FText Temp_text_Variable_94, class FText Temp_text_Variable_95, class FText Temp_text_Variable_96, class FText Temp_text_Variable_97, class FText Temp_text_Variable_98, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "GetStatByEnum");

	Params::UBPLibrary_C_GetStatByEnum_Params Parms{};

	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.Temp_text_Variable_27 = Temp_text_Variable_27;
	Parms.Temp_text_Variable_28 = Temp_text_Variable_28;
	Parms.Temp_text_Variable_29 = Temp_text_Variable_29;
	Parms.Temp_text_Variable_30 = Temp_text_Variable_30;
	Parms.Temp_text_Variable_31 = Temp_text_Variable_31;
	Parms.Temp_text_Variable_32 = Temp_text_Variable_32;
	Parms.Temp_text_Variable_33 = Temp_text_Variable_33;
	Parms.Temp_text_Variable_34 = Temp_text_Variable_34;
	Parms.Temp_text_Variable_35 = Temp_text_Variable_35;
	Parms.Temp_text_Variable_36 = Temp_text_Variable_36;
	Parms.Temp_text_Variable_37 = Temp_text_Variable_37;
	Parms.Temp_text_Variable_38 = Temp_text_Variable_38;
	Parms.Temp_text_Variable_39 = Temp_text_Variable_39;
	Parms.Temp_text_Variable_40 = Temp_text_Variable_40;
	Parms.Temp_text_Variable_41 = Temp_text_Variable_41;
	Parms.Temp_text_Variable_42 = Temp_text_Variable_42;
	Parms.Temp_text_Variable_43 = Temp_text_Variable_43;
	Parms.Temp_text_Variable_44 = Temp_text_Variable_44;
	Parms.Temp_text_Variable_45 = Temp_text_Variable_45;
	Parms.Temp_text_Variable_46 = Temp_text_Variable_46;
	Parms.Temp_text_Variable_47 = Temp_text_Variable_47;
	Parms.Temp_text_Variable_48 = Temp_text_Variable_48;
	Parms.Temp_text_Variable_49 = Temp_text_Variable_49;
	Parms.Temp_text_Variable_50 = Temp_text_Variable_50;
	Parms.Temp_text_Variable_51 = Temp_text_Variable_51;
	Parms.Temp_text_Variable_52 = Temp_text_Variable_52;
	Parms.Temp_text_Variable_53 = Temp_text_Variable_53;
	Parms.Temp_text_Variable_54 = Temp_text_Variable_54;
	Parms.Temp_text_Variable_55 = Temp_text_Variable_55;
	Parms.Temp_text_Variable_56 = Temp_text_Variable_56;
	Parms.Temp_text_Variable_57 = Temp_text_Variable_57;
	Parms.Temp_text_Variable_58 = Temp_text_Variable_58;
	Parms.Temp_text_Variable_59 = Temp_text_Variable_59;
	Parms.Temp_text_Variable_60 = Temp_text_Variable_60;
	Parms.Temp_text_Variable_61 = Temp_text_Variable_61;
	Parms.Temp_text_Variable_62 = Temp_text_Variable_62;
	Parms.Temp_text_Variable_63 = Temp_text_Variable_63;
	Parms.Temp_text_Variable_64 = Temp_text_Variable_64;
	Parms.Temp_text_Variable_65 = Temp_text_Variable_65;
	Parms.Temp_text_Variable_66 = Temp_text_Variable_66;
	Parms.Temp_text_Variable_67 = Temp_text_Variable_67;
	Parms.Temp_text_Variable_68 = Temp_text_Variable_68;
	Parms.Temp_text_Variable_69 = Temp_text_Variable_69;
	Parms.Temp_text_Variable_70 = Temp_text_Variable_70;
	Parms.Temp_text_Variable_71 = Temp_text_Variable_71;
	Parms.Temp_text_Variable_72 = Temp_text_Variable_72;
	Parms.Temp_text_Variable_73 = Temp_text_Variable_73;
	Parms.Temp_text_Variable_74 = Temp_text_Variable_74;
	Parms.Temp_text_Variable_75 = Temp_text_Variable_75;
	Parms.Temp_text_Variable_76 = Temp_text_Variable_76;
	Parms.Temp_text_Variable_77 = Temp_text_Variable_77;
	Parms.Temp_text_Variable_78 = Temp_text_Variable_78;
	Parms.Temp_text_Variable_79 = Temp_text_Variable_79;
	Parms.Temp_text_Variable_80 = Temp_text_Variable_80;
	Parms.Temp_text_Variable_81 = Temp_text_Variable_81;
	Parms.Temp_text_Variable_82 = Temp_text_Variable_82;
	Parms.Temp_text_Variable_83 = Temp_text_Variable_83;
	Parms.Temp_text_Variable_84 = Temp_text_Variable_84;
	Parms.Temp_text_Variable_85 = Temp_text_Variable_85;
	Parms.Temp_text_Variable_86 = Temp_text_Variable_86;
	Parms.Temp_text_Variable_87 = Temp_text_Variable_87;
	Parms.Temp_text_Variable_88 = Temp_text_Variable_88;
	Parms.Temp_text_Variable_89 = Temp_text_Variable_89;
	Parms.Temp_text_Variable_90 = Temp_text_Variable_90;
	Parms.Temp_text_Variable_91 = Temp_text_Variable_91;
	Parms.Temp_text_Variable_92 = Temp_text_Variable_92;
	Parms.Temp_text_Variable_93 = Temp_text_Variable_93;
	Parms.Temp_text_Variable_94 = Temp_text_Variable_94;
	Parms.Temp_text_Variable_95 = Temp_text_Variable_95;
	Parms.Temp_text_Variable_96 = Temp_text_Variable_96;
	Parms.Temp_text_Variable_97 = Temp_text_Variable_97;
	Parms.Temp_text_Variable_98 = Temp_text_Variable_98;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BPLibrary.BPLibrary_C.CalculatePerkDescription
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESkillType              CurrentPerk                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillType              NextPerk                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CurrentRankText                                                  (Parm, OutParm)
// class FText                        NextRankText                                                     (Parm, OutParm)
// enum class ESkillType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetStatByEnum_Text                                      (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_GetStatByEnum_Text_1                                    (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        Temp_text_Variable_17                                            (None)
// class FText                        Temp_text_Variable_18                                            (None)
// class FText                        Temp_text_Variable_19                                            (None)
// class FText                        Temp_text_Variable_20                                            (None)
// class FText                        Temp_text_Variable_21                                            (None)
// class FText                        Temp_text_Variable_22                                            (None)
// class FText                        Temp_text_Variable_23                                            (None)
// class FText                        Temp_text_Variable_24                                            (None)
// class FText                        Temp_text_Variable_25                                            (None)
// class FText                        Temp_text_Variable_26                                            (None)
// class FText                        Temp_text_Variable_27                                            (None)
// class FText                        Temp_text_Variable_28                                            (None)
// class FText                        Temp_text_Variable_29                                            (None)
// class FText                        Temp_text_Variable_30                                            (None)
// class FText                        Temp_text_Variable_31                                            (None)
// class FText                        Temp_text_Variable_32                                            (None)
// class FText                        Temp_text_Variable_33                                            (None)
// class FText                        Temp_text_Variable_34                                            (None)
// class FText                        Temp_text_Variable_35                                            (None)
// class FText                        Temp_text_Variable_36                                            (None)
// class FText                        Temp_text_Variable_37                                            (None)
// class FText                        Temp_text_Variable_38                                            (None)
// class FText                        Temp_text_Variable_39                                            (None)
// class FText                        Temp_text_Variable_40                                            (None)
// class FText                        Temp_text_Variable_41                                            (None)
// class FText                        Temp_text_Variable_42                                            (None)
// class FText                        Temp_text_Variable_43                                            (None)
// class FText                        Temp_text_Variable_44                                            (None)
// class FText                        Temp_text_Variable_45                                            (None)
// class FText                        Temp_text_Variable_46                                            (None)
// class FText                        Temp_text_Variable_47                                            (None)
// class FText                        Temp_text_Variable_48                                            (None)
// class FText                        Temp_text_Variable_49                                            (None)
// class FText                        Temp_text_Variable_50                                            (None)
// class FText                        Temp_text_Variable_51                                            (None)
// class FText                        Temp_text_Variable_52                                            (None)
// class FText                        Temp_text_Variable_53                                            (None)
// class FText                        Temp_text_Variable_54                                            (None)
// class FText                        Temp_text_Variable_55                                            (None)
// class FText                        Temp_text_Variable_56                                            (None)
// class FText                        Temp_text_Variable_57                                            (None)
// class FText                        Temp_text_Variable_58                                            (None)
// class FText                        Temp_text_Variable_59                                            (None)
// class FText                        Temp_text_Variable_60                                            (None)
// class FText                        Temp_text_Variable_61                                            (None)
// class FText                        Temp_text_Variable_62                                            (None)
// class FText                        Temp_text_Variable_63                                            (None)
// class FText                        Temp_text_Variable_64                                            (None)
// class FText                        Temp_text_Variable_65                                            (None)
// class FText                        Temp_text_Variable_66                                            (None)
// class FText                        Temp_text_Variable_67                                            (None)
// class FText                        Temp_text_Variable_68                                            (None)
// class FText                        Temp_text_Variable_69                                            (None)
// class FText                        Temp_text_Variable_70                                            (None)
// class FText                        Temp_text_Variable_71                                            (None)
// class FText                        Temp_text_Variable_72                                            (None)
// class FText                        Temp_text_Variable_73                                            (None)
// class FText                        Temp_text_Variable_74                                            (None)
// class FText                        Temp_text_Variable_75                                            (None)
// class FText                        Temp_text_Variable_76                                            (None)
// class FText                        Temp_text_Variable_77                                            (None)
// class FText                        Temp_text_Variable_78                                            (None)
// class FText                        Temp_text_Variable_79                                            (None)
// class FText                        Temp_text_Variable_80                                            (None)
// class FText                        Temp_text_Variable_81                                            (None)
// class FText                        Temp_text_Variable_82                                            (None)
// class FText                        Temp_text_Variable_83                                            (None)
// class FText                        Temp_text_Variable_84                                            (None)
// class FText                        Temp_text_Variable_85                                            (None)
// class FText                        Temp_text_Variable_86                                            (None)
// class FText                        Temp_text_Variable_87                                            (None)
// class FText                        Temp_text_Variable_88                                            (None)
// class FText                        Temp_text_Variable_89                                            (None)
// class FText                        Temp_text_Variable_90                                            (None)
// class FText                        Temp_text_Variable_91                                            (None)
// class FText                        Temp_text_Variable_92                                            (None)
// class FText                        Temp_text_Variable_93                                            (None)
// class FText                        Temp_text_Variable_94                                            (None)
// class FText                        Temp_text_Variable_95                                            (None)
// class FText                        Temp_text_Variable_96                                            (None)
// class FText                        Temp_text_Variable_97                                            (None)
// class FText                        Temp_text_Variable_98                                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)

void UBPLibrary_C::CalculatePerkDescription(enum class ESkillType CurrentPerk, enum class ESkillType NextPerk, class UObject* __WorldContext, class FText* CurrentRankText, class FText* NextRankText, enum class ESkillType Temp_byte_Variable, class FText CallFunc_GetStatByEnum_Text, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_GetStatByEnum_Text_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, class FText Temp_text_Variable_40, class FText Temp_text_Variable_41, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, class FText Temp_text_Variable_44, class FText Temp_text_Variable_45, class FText Temp_text_Variable_46, class FText Temp_text_Variable_47, class FText Temp_text_Variable_48, class FText Temp_text_Variable_49, class FText Temp_text_Variable_50, class FText Temp_text_Variable_51, class FText Temp_text_Variable_52, class FText Temp_text_Variable_53, class FText Temp_text_Variable_54, class FText Temp_text_Variable_55, class FText Temp_text_Variable_56, class FText Temp_text_Variable_57, class FText Temp_text_Variable_58, class FText Temp_text_Variable_59, class FText Temp_text_Variable_60, class FText Temp_text_Variable_61, class FText Temp_text_Variable_62, class FText Temp_text_Variable_63, class FText Temp_text_Variable_64, class FText Temp_text_Variable_65, class FText Temp_text_Variable_66, class FText Temp_text_Variable_67, class FText Temp_text_Variable_68, class FText Temp_text_Variable_69, class FText Temp_text_Variable_70, class FText Temp_text_Variable_71, class FText Temp_text_Variable_72, class FText Temp_text_Variable_73, class FText Temp_text_Variable_74, class FText Temp_text_Variable_75, class FText Temp_text_Variable_76, class FText Temp_text_Variable_77, class FText Temp_text_Variable_78, class FText Temp_text_Variable_79, class FText Temp_text_Variable_80, class FText Temp_text_Variable_81, class FText Temp_text_Variable_82, class FText Temp_text_Variable_83, class FText Temp_text_Variable_84, class FText Temp_text_Variable_85, class FText Temp_text_Variable_86, class FText Temp_text_Variable_87, class FText Temp_text_Variable_88, class FText Temp_text_Variable_89, class FText Temp_text_Variable_90, class FText Temp_text_Variable_91, class FText Temp_text_Variable_92, class FText Temp_text_Variable_93, class FText Temp_text_Variable_94, class FText Temp_text_Variable_95, class FText Temp_text_Variable_96, class FText Temp_text_Variable_97, class FText Temp_text_Variable_98, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "CalculatePerkDescription");

	Params::UBPLibrary_C_CalculatePerkDescription_Params Parms{};

	Parms.CurrentPerk = CurrentPerk;
	Parms.NextPerk = NextPerk;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetStatByEnum_Text = CallFunc_GetStatByEnum_Text;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetStatByEnum_Text_1 = CallFunc_GetStatByEnum_Text_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.Temp_text_Variable_27 = Temp_text_Variable_27;
	Parms.Temp_text_Variable_28 = Temp_text_Variable_28;
	Parms.Temp_text_Variable_29 = Temp_text_Variable_29;
	Parms.Temp_text_Variable_30 = Temp_text_Variable_30;
	Parms.Temp_text_Variable_31 = Temp_text_Variable_31;
	Parms.Temp_text_Variable_32 = Temp_text_Variable_32;
	Parms.Temp_text_Variable_33 = Temp_text_Variable_33;
	Parms.Temp_text_Variable_34 = Temp_text_Variable_34;
	Parms.Temp_text_Variable_35 = Temp_text_Variable_35;
	Parms.Temp_text_Variable_36 = Temp_text_Variable_36;
	Parms.Temp_text_Variable_37 = Temp_text_Variable_37;
	Parms.Temp_text_Variable_38 = Temp_text_Variable_38;
	Parms.Temp_text_Variable_39 = Temp_text_Variable_39;
	Parms.Temp_text_Variable_40 = Temp_text_Variable_40;
	Parms.Temp_text_Variable_41 = Temp_text_Variable_41;
	Parms.Temp_text_Variable_42 = Temp_text_Variable_42;
	Parms.Temp_text_Variable_43 = Temp_text_Variable_43;
	Parms.Temp_text_Variable_44 = Temp_text_Variable_44;
	Parms.Temp_text_Variable_45 = Temp_text_Variable_45;
	Parms.Temp_text_Variable_46 = Temp_text_Variable_46;
	Parms.Temp_text_Variable_47 = Temp_text_Variable_47;
	Parms.Temp_text_Variable_48 = Temp_text_Variable_48;
	Parms.Temp_text_Variable_49 = Temp_text_Variable_49;
	Parms.Temp_text_Variable_50 = Temp_text_Variable_50;
	Parms.Temp_text_Variable_51 = Temp_text_Variable_51;
	Parms.Temp_text_Variable_52 = Temp_text_Variable_52;
	Parms.Temp_text_Variable_53 = Temp_text_Variable_53;
	Parms.Temp_text_Variable_54 = Temp_text_Variable_54;
	Parms.Temp_text_Variable_55 = Temp_text_Variable_55;
	Parms.Temp_text_Variable_56 = Temp_text_Variable_56;
	Parms.Temp_text_Variable_57 = Temp_text_Variable_57;
	Parms.Temp_text_Variable_58 = Temp_text_Variable_58;
	Parms.Temp_text_Variable_59 = Temp_text_Variable_59;
	Parms.Temp_text_Variable_60 = Temp_text_Variable_60;
	Parms.Temp_text_Variable_61 = Temp_text_Variable_61;
	Parms.Temp_text_Variable_62 = Temp_text_Variable_62;
	Parms.Temp_text_Variable_63 = Temp_text_Variable_63;
	Parms.Temp_text_Variable_64 = Temp_text_Variable_64;
	Parms.Temp_text_Variable_65 = Temp_text_Variable_65;
	Parms.Temp_text_Variable_66 = Temp_text_Variable_66;
	Parms.Temp_text_Variable_67 = Temp_text_Variable_67;
	Parms.Temp_text_Variable_68 = Temp_text_Variable_68;
	Parms.Temp_text_Variable_69 = Temp_text_Variable_69;
	Parms.Temp_text_Variable_70 = Temp_text_Variable_70;
	Parms.Temp_text_Variable_71 = Temp_text_Variable_71;
	Parms.Temp_text_Variable_72 = Temp_text_Variable_72;
	Parms.Temp_text_Variable_73 = Temp_text_Variable_73;
	Parms.Temp_text_Variable_74 = Temp_text_Variable_74;
	Parms.Temp_text_Variable_75 = Temp_text_Variable_75;
	Parms.Temp_text_Variable_76 = Temp_text_Variable_76;
	Parms.Temp_text_Variable_77 = Temp_text_Variable_77;
	Parms.Temp_text_Variable_78 = Temp_text_Variable_78;
	Parms.Temp_text_Variable_79 = Temp_text_Variable_79;
	Parms.Temp_text_Variable_80 = Temp_text_Variable_80;
	Parms.Temp_text_Variable_81 = Temp_text_Variable_81;
	Parms.Temp_text_Variable_82 = Temp_text_Variable_82;
	Parms.Temp_text_Variable_83 = Temp_text_Variable_83;
	Parms.Temp_text_Variable_84 = Temp_text_Variable_84;
	Parms.Temp_text_Variable_85 = Temp_text_Variable_85;
	Parms.Temp_text_Variable_86 = Temp_text_Variable_86;
	Parms.Temp_text_Variable_87 = Temp_text_Variable_87;
	Parms.Temp_text_Variable_88 = Temp_text_Variable_88;
	Parms.Temp_text_Variable_89 = Temp_text_Variable_89;
	Parms.Temp_text_Variable_90 = Temp_text_Variable_90;
	Parms.Temp_text_Variable_91 = Temp_text_Variable_91;
	Parms.Temp_text_Variable_92 = Temp_text_Variable_92;
	Parms.Temp_text_Variable_93 = Temp_text_Variable_93;
	Parms.Temp_text_Variable_94 = Temp_text_Variable_94;
	Parms.Temp_text_Variable_95 = Temp_text_Variable_95;
	Parms.Temp_text_Variable_96 = Temp_text_Variable_96;
	Parms.Temp_text_Variable_97 = Temp_text_Variable_97;
	Parms.Temp_text_Variable_98 = Temp_text_Variable_98;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentRankText != nullptr)
		*CurrentRankText = Parms.CurrentRankText;

	if (NextRankText != nullptr)
		*NextRankText = Parms.NextRankText;

}


// Function BPLibrary.BPLibrary_C.CalculateMonstrumPerk
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMonstrumPerksDataTable     MonstrumPerk                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)
// int32                              PerkLevel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// class FText                        CallFunc_Format_ReturnValue_6                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_7                                         (ReferenceParm, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_7                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_8                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_8                                    (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_9                                         (ReferenceParm, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_12                          (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_9                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_10                                        (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_10                                   (None)

void UBPLibrary_C::CalculateMonstrumPerk(const struct FMonstrumPerksDataTable& MonstrumPerk, class UObject* __WorldContext, class FText* Description, int32* PerkLevel, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Subtract_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_3, class FText CallFunc_Format_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Format_ReturnValue_5, class FText CallFunc_Format_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, class FText CallFunc_MakeLiteralText_ReturnValue_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, class FText CallFunc_Format_ReturnValue_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_8, class FText CallFunc_Format_ReturnValue_8, class FText CallFunc_MakeLiteralText_ReturnValue_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, class FText CallFunc_MakeLiteralText_ReturnValue_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_12, class FText CallFunc_Format_ReturnValue_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_10, class FText CallFunc_Format_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "CalculateMonstrumPerk");

	Params::UBPLibrary_C_CalculateMonstrumPerk_Params Parms{};

	Parms.MonstrumPerk = MonstrumPerk;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.CallFunc_Format_ReturnValue_6 = CallFunc_Format_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.CallFunc_Format_ReturnValue_7 = CallFunc_Format_ReturnValue_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_Format_ReturnValue_8 = CallFunc_Format_ReturnValue_8;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_12 = K2Node_MakeStruct_FormatArgumentData_12;
	Parms.CallFunc_Format_ReturnValue_9 = CallFunc_Format_ReturnValue_9;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.CallFunc_Format_ReturnValue_10 = CallFunc_Format_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

	if (PerkLevel != nullptr)
		*PerkLevel = Parms.PerkLevel;

}


// Function BPLibrary.BPLibrary_C.CalculateDebuffProperty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDebuffProperties           DebuffProperty                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (Parm, OutParm)
// float                              Value__                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Positive_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               StaticValue_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Symbol                                                           (Parm, OutParm)
// int32                              ArmorType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Possitive_                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_10                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_11                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_12                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_13                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_14                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_15                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_16                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_17                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_18                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_19                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_20                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_21                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_22                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_23                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_24                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_25                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)

void UBPLibrary_C::CalculateDebuffProperty(const struct FDebuffProperties& DebuffProperty, class ACharacter* Player, class UObject* __WorldContext, class FText* Description, float* Value__, bool* Positive_, bool* StaticValue_, class FText* Symbol, int32* ArmorType, bool Possitive_, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Subtract_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_MakeLiteralText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_8, class FText CallFunc_MakeLiteralText_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_10, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_12, class FText CallFunc_MakeLiteralText_ReturnValue_13, class FText CallFunc_MakeLiteralText_ReturnValue_14, class FText CallFunc_MakeLiteralText_ReturnValue_15, class FText CallFunc_MakeLiteralText_ReturnValue_16, class FText CallFunc_MakeLiteralText_ReturnValue_17, class FText CallFunc_MakeLiteralText_ReturnValue_18, class FText CallFunc_MakeLiteralText_ReturnValue_19, class FText CallFunc_MakeLiteralText_ReturnValue_20, class FText CallFunc_MakeLiteralText_ReturnValue_21, class FText CallFunc_MakeLiteralText_ReturnValue_22, class FText CallFunc_MakeLiteralText_ReturnValue_23, class FText CallFunc_MakeLiteralText_ReturnValue_24, class FText CallFunc_MakeLiteralText_ReturnValue_25, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "CalculateDebuffProperty");

	Params::UBPLibrary_C_CalculateDebuffProperty_Params Parms{};

	Parms.DebuffProperty = DebuffProperty;
	Parms.Player = Player;
	Parms.__WorldContext = __WorldContext;
	Parms.Possitive_ = Possitive_;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_10 = CallFunc_MakeLiteralText_ReturnValue_10;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_11 = CallFunc_MakeLiteralText_ReturnValue_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_12 = CallFunc_MakeLiteralText_ReturnValue_12;
	Parms.CallFunc_MakeLiteralText_ReturnValue_13 = CallFunc_MakeLiteralText_ReturnValue_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_14 = CallFunc_MakeLiteralText_ReturnValue_14;
	Parms.CallFunc_MakeLiteralText_ReturnValue_15 = CallFunc_MakeLiteralText_ReturnValue_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_16 = CallFunc_MakeLiteralText_ReturnValue_16;
	Parms.CallFunc_MakeLiteralText_ReturnValue_17 = CallFunc_MakeLiteralText_ReturnValue_17;
	Parms.CallFunc_MakeLiteralText_ReturnValue_18 = CallFunc_MakeLiteralText_ReturnValue_18;
	Parms.CallFunc_MakeLiteralText_ReturnValue_19 = CallFunc_MakeLiteralText_ReturnValue_19;
	Parms.CallFunc_MakeLiteralText_ReturnValue_20 = CallFunc_MakeLiteralText_ReturnValue_20;
	Parms.CallFunc_MakeLiteralText_ReturnValue_21 = CallFunc_MakeLiteralText_ReturnValue_21;
	Parms.CallFunc_MakeLiteralText_ReturnValue_22 = CallFunc_MakeLiteralText_ReturnValue_22;
	Parms.CallFunc_MakeLiteralText_ReturnValue_23 = CallFunc_MakeLiteralText_ReturnValue_23;
	Parms.CallFunc_MakeLiteralText_ReturnValue_24 = CallFunc_MakeLiteralText_ReturnValue_24;
	Parms.CallFunc_MakeLiteralText_ReturnValue_25 = CallFunc_MakeLiteralText_ReturnValue_25;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

	if (Value__ != nullptr)
		*Value__ = Parms.Value__;

	if (Positive_ != nullptr)
		*Positive_ = Parms.Positive_;

	if (StaticValue_ != nullptr)
		*StaticValue_ = Parms.StaticValue_;

	if (Symbol != nullptr)
		*Symbol = Parms.Symbol;

	if (ArmorType != nullptr)
		*ArmorType = Parms.ArmorType;

}


// Function BPLibrary.BPLibrary_C.SetGlow
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDynamicMaterialGlowLink>DynMatLinks                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicMaterialGlowLink    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPLibrary_C::SetGlow(TArray<struct FDynamicMaterialGlowLink>& DynMatLinks, bool IsOn, float Value, class UObject* __WorldContext, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, float Temp_float_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FDynamicMaterialGlowLink& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "SetGlow");

	Params::UBPLibrary_C_SetGlow_Params Parms{};

	Parms.DynMatLinks = DynMatLinks;
	Parms.IsOn = IsOn;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPLibrary.BPLibrary_C.SetupDynamicMaterialsForGlow
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        StaticMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDynamicMaterialGlowLink>DynMatGlow                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFound                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicMaterialGlowLink    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDynamicMaterialGlowLink    K2Node_MakeStruct_DynamicMaterialGlowLink                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPLibrary_C::SetupDynamicMaterialsForGlow(class UStaticMeshComponent* StaticMesh, TArray<struct FDynamicMaterialGlowLink>& DynMatGlow, class UObject* __WorldContext, bool bFound, int32 CallFunc_Array_Length_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FDynamicMaterialGlowLink& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UMaterialInterface* CallFunc_Array_Get_Item_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FDynamicMaterialGlowLink& K2Node_MakeStruct_DynamicMaterialGlowLink, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPLibrary_C", "SetupDynamicMaterialsForGlow");

	Params::UBPLibrary_C_SetupDynamicMaterialsForGlow_Params Parms{};

	Parms.StaticMesh = StaticMesh;
	Parms.DynMatGlow = DynMatGlow;
	Parms.__WorldContext = __WorldContext;
	Parms.bFound = bFound;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeStruct_DynamicMaterialGlowLink = K2Node_MakeStruct_DynamicMaterialGlowLink;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


