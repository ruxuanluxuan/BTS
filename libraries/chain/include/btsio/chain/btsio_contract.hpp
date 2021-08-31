#pragma once

#include <eosio/chain/types.hpp>
#include <eosio/chain/contract_types.hpp>

namespace eosio { namespace chain {

   class apply_context;

   /**
    * @defgroup native_action_handlers Native Action Handlers
    */
   ///@{
   void apply_btsio_newaccount(apply_context&);
   void apply_btsio_updateauth(apply_context&);
   void apply_btsio_deleteauth(apply_context&);
   void apply_btsio_linkauth(apply_context&);
   void apply_btsio_unlinkauth(apply_context&);

   /*
   void apply_btsio_postrecovery(apply_context&);
   void apply_btsio_passrecovery(apply_context&);
   void apply_btsio_vetorecovery(apply_context&);
   */

   void apply_btsio_setcode(apply_context&);
   void apply_btsio_setabi(apply_context&);

   void apply_btsio_canceldelay(apply_context&);
   ///@}  end action handlers

} } /// namespace eosio::chain
