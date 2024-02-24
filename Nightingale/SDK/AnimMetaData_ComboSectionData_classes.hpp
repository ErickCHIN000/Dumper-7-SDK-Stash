#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x39 - 0x28)
// BlueprintGeneratedClass AnimMetaData_ComboSectionData.AnimMetaData_ComboSectionData_C
class UAnimMetaData_ComboSectionData_C : public UAnimMetaData
{
public:
	class FName                                  HitSection;                                        // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ComboSection;                                      // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EmpoweredHit;                                      // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimMetaData_ComboSectionData_C* GetDefaultObj();

	bool GetEmpoweredHit();
	class FName GetComboSection();
	class FName GetHitSection();
};

}


