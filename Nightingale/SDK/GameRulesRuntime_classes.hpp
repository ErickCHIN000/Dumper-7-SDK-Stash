#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GameRulesRuntime.GameRule
class UGameRule : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameRule* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameRulesRuntime.GameRuleArbiter
class IGameRuleArbiter : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameRuleArbiter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameRulesRuntime.GameRuleContainer
class IGameRuleContainer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameRuleContainer* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameRulesRuntime.GameRulePlayer
class UGameRulePlayer : public UGameRule
{
public:

	static class UClass* StaticClass();
	static class UGameRulePlayer* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameRulesRuntime.GameRuleProvider
class IGameRuleProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameRuleProvider* GetDefaultObj();

	void UnbindEventFrom_GameRuleEvents(FDelegateProperty_& Event);
	void BindEventTo_GameRuleEvents(FDelegateProperty_& Event);
};

// 0x0 (0x28 - 0x28)
// Class GameRulesRuntime.GameRuleRealm
class UGameRuleRealm : public UGameRule
{
public:

	static class UClass* StaticClass();
	static class UGameRuleRealm* GetDefaultObj();

};

}


