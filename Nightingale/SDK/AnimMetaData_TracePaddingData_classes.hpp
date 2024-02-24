#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AnimMetaData_TracePaddingData.AnimMetaData_TracePaddingData_C
class UAnimMetaData_TracePaddingData_C : public UAnimMetaData
{
public:
	double                                       Radius;                                            // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExtentPadding;                                     // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimMetaData_TracePaddingData_C* GetDefaultObj();

	double GetExtentPadding();
	double GetRadius();
};

}


