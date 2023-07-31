modded class ActionForceConsumeSingle
{
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (player.NF_IsInSafezone()) {
			return false;
		}

		return super.ActionCondition(player, target, item);
	}
}