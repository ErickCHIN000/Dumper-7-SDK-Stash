#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD0 - 0xD0)
// BlueprintGeneratedClass bc_LightingElement_01_PostProcess.bc_LightingElement_01_PostProcess_C
class Ubc_LightingElement_01_PostProcess_C : public Ubc_LightingElement_01_C
{
public:

	static class UClass* StaticClass();
	static class Ubc_LightingElement_01_PostProcess_C* GetDefaultObj();

	void OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result);
	void Backup(bool* Success, bool CallFunc_Backup_Success);
	void Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, bool CallFunc_Update_Success, bool CallFunc_IsInEditor_ReturnValue);
};

}


