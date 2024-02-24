#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass FLODRecordRow.FLODRecordRow_C
class UFLODRecordRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  FLODRecordName;                                    // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFLODRecord*                           FLODRecord;                                        // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFLODRecordRow_C* GetDefaultObj();

	void SetFLODRecord(class UFLODRecord* FLODRecord);
	void ExecuteUbergraph_FLODRecordRow(int32 EntryPoint, const struct FFLODDescription& CallFunc_GetDescription_ReturnValue, class UFLODRecord* K2Node_CustomEvent_FLODRecord, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


